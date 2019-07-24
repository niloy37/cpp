#ifndef TIMESTAMP_H_INCLUDED
#define TIMESTAMP_H_INCLUDED
class TimeStamp{
private:
    int second;
    int minute;
    int hour;
public:
    TimeStamp(int,int,int);
    std::string getValues();
    bool compareTo(int,int,int);

};


#endif // TIMESTAMP_H_INCLUDED
