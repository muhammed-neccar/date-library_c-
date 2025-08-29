#pragma once
#include <iostream>
using namespace std;
#include <vector>
#include<string>

class clsString
{
private:
	string _value;

public:

	clsString()
	{
		_value = "";
	}

	clsString(string value)
	{
		_value = value;
	}

	void SetValue(string value)
	{
		_value = value;
	}

	string Getvalue()
	{
		return _value;
	}

	__declspec(property(get = Getvalue, put = SetValue)) string value;

	static short Length(string S1)
	{
		return S1.length();
	};

	short Length()
	{
		return _value.length();
	};

	static string  UpperFirstLetterOfEachWord(string S1) {
		bool isFirstLetter = true;
		for (short i = 0; i < S1.length(); i++)
		{
			if (S1[i] != ' ' && isFirstLetter)
			{
				S1[i] = toupper(S1[i]);
			}
			isFirstLetter = (S1[i] == ' ' ? true : false);
		}
		return S1;
	}


	void UpperFirstLetterOfEachWord()
	{
		_value = UpperFirstLetterOfEachWord(_value);
	}

	static string  LowerFirstLetterOfEachWord(string S1)
	{
		bool isFirstLetter = true;
		for (short i = 0; i < S1.length(); i++)
		{
			if (S1[i] != ' ' && isFirstLetter)
			{
				S1[i] = tolower(S1[i]);
			}
			isFirstLetter = (S1[i] == ' ' ? true : false);
		}
		return S1;
	}

	void LowerFirstLetterOfEachWord()
	{
		_value = LowerFirstLetterOfEachWord(_value);
	}


	static string  UpperAllString(string S1)
	{
		for (short i = 0; i < S1.length(); i++)
		{
			S1[i] = toupper(S1[i]);
		} return S1;
	}

	void UpperAllString()
	{
		_value = UpperAllString(_value);
	}

	static string  LowerAllString(string S1)
	{
		for (short i = 0; i < S1.length(); i++)
		{
			S1[i] = tolower(S1[i]);
		}
		return S1;
	}

	void LowerAllString()
	{
		_value = LowerAllString(_value);
	}

	static char  InvertLetterCase(char char1)
	{
		return isupper(char1) ? tolower(char1) : toupper(char1);
	}

	static string  InvertAllStringLettersCase(string S1)
	{
		for (short i = 0; i < S1.length(); i++)
		{
			S1[i] = InvertLetterCase(S1[i]);
		}
		return S1;
	}

	void InvertAllStringLettersCase()
	{
		_value = InvertAllStringLettersCase(_value);
	}


	enum enWhatToCount { SmallLetters = 0, CapitalLetters = 1, All = 3 };

	static short CountLetters(string S1, enWhatToCount WhatToCount = enWhatToCount::All)
	{
		if (WhatToCount == enWhatToCount::All)
		{
			return S1.length();
		}

		short Counter = 0;

		for (short i = 0; i < S1.length(); i++)
		{
			if (WhatToCount == enWhatToCount::CapitalLetters && isupper(S1[i]))
				Counter++;
			if (WhatToCount == enWhatToCount::SmallLetters && islower(S1[i]))             Counter++;
		} return
			Counter;
	}

	static short  CountCapitalLetters(string S1)
	{

		short Counter = 0;

		for (short i = 0; i < S1.length(); i++)
		{

			if (isupper(S1[i]))
				Counter++;

		}

		return Counter;
	}

	short  CountCapitalLetters()
	{
		return CountCapitalLetters(_value);
	}


	static short  CountSmallLetters(string S1)
	{

		short Counter = 0;

		for (short i = 0; i < S1.length(); i++)
		{

			if (islower(S1[i]))
				Counter++;

		}

		return Counter;
	}

	short  CountSmallLetters()
	{
		return CountSmallLetters(_value);
	}

	static short  CountSpecificLetters(string S1, char Letter, bool MatchCase = true)
	{
		short Counter = 0;
		for (short i = 0; i < S1.length(); i++)
		{
			if (MatchCase) {
				if (S1[i] == Letter)

					Counter++;
			}
			else
			{

				if (tolower(S1[i]) == tolower(Letter))
					Counter++;
			}
		}

		return Counter;
	}

	short CountspecificLetters(char Letter, bool MatchCase = true)
	{
		return CountSpecificLetters(_value, Letter, MatchCase);
	}

	static bool IsVowel(char Ch1)
	{
		Ch1 = tolower(Ch1);

		return ((Ch1 == 'a') || (Ch1 == 'e') || (Ch1 == 'i') || (Ch1 == 'o') || (Ch1 == 'u'));

	}
	static short  CountVowels(string S1)
	{
		short Counter = 0; for (short i = 0; i < S1.length(); i++)
		{
			if (IsVowel(S1[i]))
				Counter++;
		}
		return Counter;
	}

	short CountVowels()
	{
		return CountVowels(_value);
	}


	static void PrintVowels(string S1)
	{
		cout << "\nVowels in string are: ";
		for (short i = 0; i < S1.length(); i++)
		{
			if (IsVowel(S1[i]))

				cout << S1[i] << "    ";
		}
	}

	void PrintVowels()
	{
		PrintVowels(_value);
	}


	static void PrintEachWordInString(string S1) {
		string delim = " "; // delimiter   
		cout << "\nYour string wrords are: \n\n";
		short pos = 0; string sWord; // define a string variable 
		// use find() function to get the position of the delimiters 
		while ((pos = S1.find(delim)) != std::string::npos)
		{
			sWord = S1.substr(0, pos);
			// store the word  
			if (sWord != "")
			{
				cout << sWord << endl;
			}
			S1.erase(0, pos + delim.length());
			/* erase() until positon and move to next word. */
		}
		if (S1 != "")
		{
			cout << S1 << endl; // it print last word of the string.  
		}
	}

	void PrintEachWordInString()
	{
		PrintEachWordInString(_value);
	}


	static short CountWords(string S1) {
		string delim = " ";
		// delimiter
		short Counter = 0;
		short pos = 0;
		string sWord;
		// define a string variable  
		// use find() function to get the position of the delimiters 
		while ((pos = S1.find(delim)) != std::string::npos)
		{
			sWord = S1.substr(0, pos);
			// store the word  
			if (sWord != "")
			{

				Counter++;
			}
			//erase() until positon and move to next word.
			S1.erase(0, pos + delim.length());
		}
		if (S1 != "")
		{
			Counter++;
			// it counts the last word of the string.
		}
		return Counter;
	}

	short CountWords()
	{
		return  CountWords(_value);
	}



	static string TrimLeft(string S1)
	{
		for (short i = 0; i < S1.length(); i++)
		{
			if (S1[i] != ' ')
			{
				return S1.substr(i, S1.length() - i);
			}
		}
		return "";
	}

	void TrimLeft()
	{
		_value = TrimLeft(_value);
	}



	static string TrimRight(string S1)
	{
		for (short i = S1.length() - 1; i >= 0; i--) {
			if (S1[i] != ' ')
			{
				return S1.substr(0, i + 1);
			}
		} return"";
	}

	void TrimRight()
	{
		_value = TrimRight(_value);
	}


	static string Trim(string S1)
	{
		return (TrimLeft(TrimRight(S1)));
	}

	void Trim()
	{
		_value = Trim(_value);
	}


	static vector<string> Split(string S1, string Delim)
	{
		vector<string> vString;
		short pos = 0;
		string sWord;
		// define a string variable  
		// use find() function to get the position of the delimiters 
		while ((pos = S1.find(Delim)) != std::string::npos)
		{
			sWord = S1.substr(0, pos);
			// store the word   
			if (sWord != "")
			{
				vString.push_back(sWord);
			}
			S1.erase(0, pos + Delim.length());
		}
		if (S1 != "")
		{
			vString.push_back(S1);
			// it adds last word of the string.    
		}
		return vString;
	}

	vector<string> Split(string Delim)
	{
		return Split(_value, Delim);
	}


	static string ReverseWordsInString(string S1)
	{
		vector<string> vString;
		string S2 = "";
		vString = Split(S1, " ");
		// declare 
		vector<string>::iterator iter = vString.end();
		while (iter != vString.begin())
		{
			--iter;
			S2 += *iter + " ";
		}
		S2 = S2.substr(0, S2.length() - 1); //remove last space.
		return S2;
	}

	void ReverseWordsInString()
	{
		_value = ReverseWordsInString(_value);
	}


	static string ReplaceWord(string S1, string StringToReplace, string sRepalceTo)
	{
		short pos = S1.find(StringToReplace);
		while (pos != std::string::npos)
		{
			S1 = S1.replace(pos, StringToReplace.length(), sRepalceTo);
			pos = S1.find(StringToReplace);
			//find next   
		}
		return S1;
	}

	string ReplaceWord(string StringToReplace, string sRepalceTo)
	{
		return  ReplaceWord(_value, StringToReplace, sRepalceTo);
	}


	static string RemovePunctuationsFromString(string S1)
	{
		string S2 = "";
		for (short i = 0; i < S1.length(); i++)
		{
			if (!ispunct(S1[i]))
			{
				S2 += S1[i];
			}
		}
		return S2;
	}

	void RemovePunctuationsFromString()
	{
		_value = RemovePunctuationsFromString(_value);
	}

	static void PrintFirstLetterOfEachWord(string S1) {
		bool isFirstLetter = true;
		cout << "\nFirst letters of this string: \n";
		for (short i = 0; i < S1.length(); i++)
		{
			if (S1[i] != ' ' && isFirstLetter)
			{
				cout << S1[i] << endl;
			}
			isFirstLetter = (S1[i] == ' ' ? true : false);
		}
	}

	void PrintFirstLetterOfEachWord()
	{
		PrintFirstLetterOfEachWord(_value);
	}



	
};
