# 📅 Date Library (C++)

<p align="center">
  <img src="https://img.shields.io/badge/language-C++-blue.svg" alt="language">
</p>

---

A lightweight and reusable **Date Library in C++** for handling common date-related operations.  
This project started as a collection of small functions while practicing problem-solving, and has now been merged into a single structured C++ library.

---

## ✨ Features

- ✅ Check if a year is a leap year  
- ✅ Get the number of days in a month or year  
- ✅ Validate dates  
- ✅ Print dates in different formats  
- ✅ Compare two dates (before/after/equal)  
- ✅ Calculate the difference in days between two dates  
- ✅ Convert between (day, month, year) and day-order-in-year  
- ✅ Add or subtract days from a given date  
- ✅ Get yesterday’s date, tomorrow’s date, or system date  

---


## 📂 Project Structure

| Path                        | Description                   |
|-----------------------------|-------------------------------|
| `Date Library Project.sln`  | Visual Studio solution file   |
| `Date Library Project/`     | Source code folder            |
| ├── `clsDate.h`             | Date class (header file)      |
| ├── `clsDate.cpp`           | Date class (implementation)   |
| └── `main.cpp`              | Example usage / testing       |
| `.gitignore`                | Ignored files list            |
| `README.md`                 | Project documentation         |





---

## 🚀 Usage Example

```cpp
#include "clsDate.h"
#include <iostream>
using namespace std;

int main() {
    clsDate date1(30, 8, 2025);
    date1.Print();

    if (clsDate::isLeapYear(2024)) {
        cout << "2024 is a leap year!" << endl;
    }

    clsDate date2(1, 1, 2024);
    cout << "Days difference: " 
         << clsDate::DateDifferenceInDays(date1, date2) 
         << endl;

    return 0;
}
```

## 🛠️ Requirements

- C++11 or later
- Visual Studio 

## 📌 Motivation
This project was originally built while practicing problem-solving in C++.
Each function was first implemented separately, then later merged into a reusable library
for better structure and code reuse.

## 🌟 Future Improvements

- Add unit tests for reliability
- Support more date formats (e.g., ISO 8601: YYYY-MM-DD)
- Localization (day/month names in multiple languages)
- Time support (hours, minutes, seconds)

