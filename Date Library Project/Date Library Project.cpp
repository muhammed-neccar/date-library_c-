#include <iostream>
using namespace std;
#pragma warning(disable : 4996)
#include "clsString.h"
#include "clsDate.h"
#include "clsPeriod.h";

int main() {
    

    clsDate Date1;
    Date1.Print();

    clsDate Date2("31/1/2022");
    Date2.Print();

    Date2.IncreaseDateByOneWeek();
    Date2.Print();

    

    clsDate Date3(20, 12, 2022);
    Date3.Print();

    Date3.IncreaseDateByOneWeek();
    Date3.Print();

    clsPeriod Period1(clsDate(20, 10, 2024), clsDate(30, 12, 2025));
    clsPeriod Period2(clsDate(15, 10, 2025), clsDate(2, 7, 2026));

    cout << clsPeriod::IsOverlapPeriods(Period1, Period2) << endl;
    
    cout << Period1.IsOverLapWith(Period2) << endl;

    

    return 0;
}