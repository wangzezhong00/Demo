# include <iostream>
using namespace std;

int main()
{
    struct Time{
        int year;
        int month;
        int day;
        int hour;
        int minute;
        int second;
    };
    Time time;
    cout<<"Please input the year, month, day, hour, minute and second: ";
    cin>>time.year>>time.month>>time.day>>time.hour>>time.minute>>time.second;
    cout<<"It is "<<time.year<<"-"<<time.month<<"-"<<time.day<<" "<<time.hour<<":"<<time.minute<<":"<<time.second<<"."<<endl;
    return 0;
}