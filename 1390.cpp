#include<iostream>
#include<iomanip>
#include<cmath>
#include<cstring>
#include<ctype.h>
using namespace std;

class Time
{
private :
    int hh,mm,ss;
public:
    Time():hh(0),mm(0),ss(0)
    {
    }
     Time(int h,int m,int s)
    {
        hh=h;
        mm=m;
        ss=s;

    }
    Time(const Time &t)
    {
        hh=t.hh;
        mm=t.mm;
        ss=t.ss;
    }
    int hour()const {return hh;}
    int minute()const {return mm;}
    int second()const {return ss;}
    void hour(int h){hh=h;}
    void minute(int m){mm=m;}
    void second(int s){ss=s;}
    const Time &getTime()
    const {
       return *this;
    }
     Time &setTime(int h,int m,int s)
    {
        hh=h;
        mm=m;
        ss=s;
        return *this;
    }
    const Time &setTime(const Time& t)
    {
        hh=t.hh;
        mm=t.mm;
        ss=t.ss;
        return *this;
    }
    Time inputTime()
    {
        cin>>hh>>mm>>ss;
        return *this;
    }
const void showTime()
    const {
        if(hh>=24 || mm>=60 || ss>=60 ||hh<0 ||mm<0 ||ss<0 ) cout<<"Time error"<<endl;
        else cout<<setw(2)<<setfill('0')<<hh<<":"<<setw(2)<<setfill('0')<<mm<<":"<<setw(2)<<setfill('0')<<ss<<endl;
    }
};
