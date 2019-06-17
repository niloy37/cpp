#include "DateType.h"
#include <fstream>
#include<iostream>
using namespace std;

static int daysInMonth[] = {0,31,28,31,30,31,30,31,31,30,31,30,31};
static string conversionTable [] = {"Error", "January" , "February" ,
13 "March" , "April" , "May" , "June" , "July" , "August" , "September" ,
14 "October" , "November" , "December"};

void DateType::Initialize(int newMonth,int newDay, int newYear){
if(newMonth < 1 || newMonth > 12)
    throw string("Month is invalid");
else if (newDay<1 || newday > daysInMonth[newMonth])
    throw string("Day is invalid");
else if (newYear < 1583)
    throw string("Year is invalid");

month = newMonth;
day = newDay;
year = newYear;
}
int DateType::GetMonth() const {
return month;
}
int DateType::GetYear() const {
return year;
}
int DateType::GetDay() const {
return day;
}
string DateType::GetMonthAsString(){
return conversionTable[month];
}
RelationType DateType::ComparedTo(DateType aDate) const {
   if (year < aDate.year )
    return LESS;
   else if (year > aDate.year)
    return GREATER;
   else if (month < aDate.month)
    return LESS;
   else if (month > aDate.month)
    return GREATER;
   else if (day < aDate.day)
    return LESS;
   else if (day > aDate.day)
    return GREATER;
   else return EQUAL;
   }
DateType DateType::Adjust(int daysAway) const
{

    int newDay = day + daysAway;
    int newMonth = month;
    int newYear = year;
    bool finished = false;
    int daysInThisMonth ;
    DateType returnDate;
     while(! finished) {
        daysInThisMonth= daysInMonth [newMonth];
        if(newMonth == 2)
            if(((newYear%4 == 0) && (!newYear %100 == 0))
               || newYear % 400 == 0)
               daysInThisMonth++;

        if(newDay<= daysInThisMonth)
            finished = true;
        else {
            newDay= newDay - daysInThisMonth;
            newMOnth = (newMOnth%12)+1;
            if(newMonth == 1)
                newYear++;
                    }
     }
     returnDate.Initialize(newMonth , newDay , newYear);
     return returnDate;
}
}
