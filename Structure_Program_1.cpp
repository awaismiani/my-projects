#include<iostream>
using namespace std;
int main()
{
    struct distance
    {
        int inch;
        int foot;
    };
    begin:
    struct distance d1, d2, d3;
    cout<<"Enter Feet for first distance : ";
    cin>>d1.foot;
    cout<<"Enter Inches for first distance : ";
    cin>>d1.inch;
    cout<<endl<<"------------------"<<endl;
    cout<<"\nEnter Feet for Second distance : ";
    cin>>d2.foot;
    cout<<"Enter Inches for Second distance : ";
    cin>>d2.inch;

    d3.inch = 0;
    d3.foot = 0;
    d3.inch += d1.inch + d2.inch;
    if(d3.inch>=12)
    {
        d3.inch -= 12;
        d3.foot++;
    }
    d3.foot += d1.foot + d2.foot;

    
    cout<<"The final distance is "<<d3.foot<<" Feets and "<<d3.inch<<" Inches."<<endl;

    cout<<"1. add another\t2. exit"<<endl;
    int step;
    cin >> step;
    if(step == 1)
    {
        goto begin;
    }else{
        return 0;
    }
}
