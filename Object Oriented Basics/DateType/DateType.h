#include<string>
#include<fstream>
using namespace std;
enum RelationType {LESS,EQUAL,GREATER};

class DateType {
public
void Initialize (int newMonth,int newDay , int newYear);
int GetMonth () const;
int GetYear () const;
int GetDay() const;
string GetMonthAsString () const;
DateType Adjust (int daysAway) const;
RelationType ComparedTo (DataType someDate) const;
private :
    int year;
    int day;
    int month;


};
