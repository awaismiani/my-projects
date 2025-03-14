#include<iostream>
using namespace std;
int main()
{
    struct distance 
    {
        int feet;
        int inches;
        
    };

    struct distance d1,d2,d3;
    cout<<"Enter Feet for firt distance :";
    cin>>d1.feet;
    cout<<"Enter inches for first distance :";
    cin>>d1.inches;

    cout<<"---------------------------\n";

    cout<<"Enter Feet for Second distance :";
    cin>>d2.feet;
    cout<<"Enter inches for second distance :";
    cin>>d2.inches;
    
    d3.inches = d1.inches - d2.inches;
    d3.feet = d1.feet - d2.feet;

    if(d3.inches<0)
    {
        d3.inches = d3.inches+12;
        d3.feet--;
    }

    cout<<"The final distans is :\n";
    cout<<d3.feet<<" Feets\n"<<d3.inches<<" Inches.";



}