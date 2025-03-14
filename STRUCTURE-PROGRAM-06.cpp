//adding date
#include<iostream>
using namespace std ;
int main()
{
    struct date
    {
        int d,m,y;
    };

    struct date d1,d2,d3;

    cout<<"---------- DATE (ONE) ------------\n";
    cout<<"Enter Day From 1 To 30 :";
    cin>>d1.d;
    cout<<"Enter Month :";
    cin>>d1.m;
    cout<<"Enter Year :";
    cin>>d1.y;

    cout<<"---------- DATE (TWO) ------------\n";
    cout<<"Enter Day From 1 To 30 :";
    cin>>d2.d;
    cout<<"Enter Month :";
    cin>>d2.m;
    cout<<"Enter Year :";
    cin>>d2.y;
    

    d3.d=0;
    d3.m=0;
    d3.y=0;

   d3.d = d1.d + d2.d;
   d3.m = d1.m + d2.m;
   d3.y = d1.y + d2.y;

    if(d3.d>=30)
    {
        d3.d = d3.d - 30;
        d3.m++;
    }
    if(d3.m>=12)
    {
        d3.m = d3.m-12;
        d3.y++;
    }

    cout<<"\n---------------FINAL RESULT-----------\n";
    cout<<d3.y<<" Years "<<d3.m<<" Months "<<d3.d<<" Days";




}