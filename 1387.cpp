#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

class Time {
private :
    int t_;
public:
    Time() {t_=0;}

    Time(int h,int m,int s) {t_ = h*3600+m*60+s;}
    int hour() const {return t_/3600;}
    int minute() const {return (t_%3600)/60;}
    int second() const {return t_%60;}
    void hour(int h) {t_ = t_%3600 + h*3600;}
    void minute(int m) {t_ = t_ - minute()*60 + m*60;}
    void second(int s) {t_ = t_ - second() + s;}
    void showTime() const {
        cout<<setw(2)<<setfill('0')<<hour()<<":"
        <<setw(2)<<setfill('0')<<minute()<<":"
        <<setw(2)<<setfill('0')<<second()<<endl;
    }
    const Time& inputTime() {
        int h,m,s;
        cin>>h>>m>>s;
        t_ = h*3600 + m*60 + s;
        return *this;
    }
};
