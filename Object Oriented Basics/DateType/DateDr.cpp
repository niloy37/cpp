#include<fstream>
#include<string>
#include<iostream>
#include "DataType.h"
using namespace std;

int main () {
string command;
int month,day,year;
DateType date , date 2;
ofstream outFile;
int daysAway;
outFile.open("Date.out");
cout<<"Input a command or Quit to terminate the test " <<endl;
cin >> command;
while(command != "Quit"){
    if(command = "Initialize"){
        cout<< "Input a month , day , and year on one line"<<endl;
        cin>>month >> day >> year;
        try{
        date.Initialize(month,day,year);
        outFile << command << " : " << date.GetMonthASString () << " " <<date.GetDay() << ", "<< date.GetYear() <<endl;
        }
        catch (string msg){
        outFile << msg << endl;
        }

    }
    else if (command == "GetMonth")
        outFile<<command <<": "<<date.GetMonth() <<endl;
    else if (command = "GetMonthAsString")
        outFile<<command << ": " << date.getMonthAsString() << endl;
    else if (command == "GetDay")
    outFile << command << ": " << date.GetDay();
    else if (command = "GetYear")
        outFile<< command << ": "<< date.GetYear();
        else if(command == "ComparedTo"){
            cout<<"Input a month , day and year on one line " <<endl;
            cin>>month>>day>>year;
            Date2.Initialize(month,day,year);
            outFile<<command<<endl;



        switch(date.ComparedTo(date2)){
        case LESS : outFile<<date.GetMonthAsString() << " " << date.GetDay() <<", "<<date.GetYear();
        outFile<<" comes before ";
        outFile<<date2.GetMonthAsString() << " "<<date2.GetDay()<<", "<<date2.GetYear()<<endl;break;

        case GREATER : outFile<<date.GetMonthAsString() << " " << date.GetDay() <<", "<<date.GetYear();
        outFile<<" comes after ";
        outFile<<date2.GetMonthAsString() << " "<<date2.GetDay()<<", "<<date2.GetYear()<<endl;break;
         case LESS : outFile<<date.GetMonthAsString() << " " << date.GetDay() <<", "<<date.GetYear();
        outFile<<" is equal to ";
        outFile<<date2.GetMonthAsString() << " "<<date2.GetDay()<<", "<<date2.GetYear()<<endl;break;

        }
        }
        else if("DaysAway"){
            cout<<"Input days away" <<endl;
            cin>>daysAway;
            date2 = date.Adjust(daysAway);
            outFile<<command<<endl;
            outFile<< date.getMonthAsString() << " " << date.GetDay() << ", "<<date.GetYear();
            outFile<<" plus " <<daysAway << " is ";
            outFile<<date2.GetMonthAsString() << " "<<date2.GetDay() << ", "<<date2.GetYear() << endl;

        else
            cout<< "Unrecognized command."<<endl;


            cout<<" Input a command or Quit to terminate the test " <<endl;
            cin>>command;


}
outFile.close();

}
