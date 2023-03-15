#include <iomanip>
#include <iostream>
using namespace std;

class Time {
private:
    int h_, m_, s_;

public:
    Time()
        : h_(0)
        , m_(0)
        , s_(0)
    {
    }
    Time(int h, int m, int s)
        : h_(h)
        , m_(m)
        , s_(s)
    {
    }
    Time(const Time& t)
        : h_(t.h_)
        , m_(t.m_)
        , s_(t.s_)
    {
    }
    int hour() const
    {
        return h_;
    }
    int minute() const
    {
        return m_;
    }
    int second() const
    {
        return s_;
    }
    void hour(int h)
    {
        h_ = h;
    }
    void minute(int m)
    {
        m_ = m;
    }
    void second(int s)
    {
        s_ = s;
    }
    Time& setTime(int h, int m, int s)
    {
        h_ = h;
        m_ = m;
        s_ = s;
        return *this;
    }
    Time& setTime(const Time& t)
    {
        h_ = t.h_;
        m_ = t.m_;
        s_ = t.s_;
        return *this;
    }
    const Time& getTime() const
    {
        return *this;
    }
    Time& inputTime()
    {
        int h, m, s;
        cin >> h >> m >> s;
        h_ = h;
        m_ = m;
        s_ = s;
        return *this;
    }
    void showTime() const
    {
        if (h_ >= 24 || m_ >= 60 || s_ >= 60 || h_ < 0 || m_ < 0 || s_ < 0)
            cout << "Time error" << endl;
        else
            cout << setw(2) << setfill('0') << h_ << ":"
                 << setw(2) << setfill('0') << m_ << ":"
                 << setw(2) << setfill('0') << s_ << endl;
    }
    void showTime12Hour() const
    {
        if (h_ >= 24 || m_ >= 60 || s_ >= 60 || h_ < 0 || m_ < 0 || s_ < 0)
            cout << "Time error" << endl;
        else if (h_ >= 13) {
            cout << setw(2) << setfill('0') << h_ - 12 << ":"
                 << setw(2) << setfill('0') << m_ << ":"
                 << setw(2) << setfill('0') << s_ << " p.m." << endl;
        } else if (h_ == 0) {
            cout << 12 << ":" << setw(2) << setfill('0') << m_ << ":"
                 << setw(2) << setfill('0') << s_ << " a.m." << endl;
        } else if (h_ == 12) {
            cout << 12 << ":" << setw(2) << setfill('0') << m_ << ":"
                 << setw(2) << setfill('0') << s_ << " p.m." << endl;
        } else {
            cout << setw(2) << setfill('0') << h_ << ":"
                 << setw(2) << setfill('0') << m_ << ":"
                 << setw(2) << setfill('0') << s_ << " a.m." << endl;
        }
    }
};
