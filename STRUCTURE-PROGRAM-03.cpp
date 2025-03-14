#include<iostream>
using namespace std ;
int main()
{
    struct time
    {
        int hour,min,sec;
    };

    struct time t1,t2,t3;

    cout<<"----------TIME ONE------------\n";
    cout<<"ENTER HOUR-";
    cin>>t1.hour;
    cout<<"ENTER MINUTES-";
    cin>>t1.min;
    cout<<"ENTER SECONDS-";
    cin>>t1.sec;

    cout<<"\n----------TIME TWO------------\n";
    cout<<"ENTER HOUR-";
    cin>>t2.hour;
    cout<<"ENTER MINUTES-";
    cin>>t2.min;
    cout<<"ENTER SECONDS-";
    cin>>t2.sec;

    t3.hour=0;
    t3.min=0;
    t3.sec=0;

    t3.hour = t1.hour + t2.hour;
    t3.min = t1.min + t2.min;
    t3.sec = t1.sec + t2.sec;

    if(t3.sec>=60)
    {
        t3.sec = t3.sec - 60;
        t3.min++;
    }
    if(t3.min>=60)
    {
        t3.min = t3.min-60;
        t3.hour++;
    }

    cout<<"\n---------------FINAL RESULT-----------\n";
    cout<<t3.hour<<" Hours "<<t3.min<<" Minutes "<<t3.sec<<" Seconds";




}