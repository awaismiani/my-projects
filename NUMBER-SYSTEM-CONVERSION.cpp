#include<iostream>
#include<conio.h>
#include<math.h>
#include<algorithm>
#include<vector>
using namespace std;

int binary_to_decimal(int binary)
{
    int digit;
    int decimal = 0;
    int exponent = 0;
    while(binary > 0)
    {
        digit = binary % 10;
        binary % 10;
        binary /= 10;
        decimal +=  digit * (pow(2,exponent));
        ++exponent;
        
    }
    return decimal;
}
int octal_to_decimal(int binary)
{
    int digit;
    int decimal = 0;
    int exponent = 0;
    while(binary > 0)
    {
        digit = binary % 10;
        binary % 10;
        binary /= 10;
        decimal +=  digit * (pow(8,exponent));
        ++exponent;
        
    }
    return decimal;
}

void decimal_to_binary(int decimal)
{
    vector <int> code;
    while(decimal > 0)
    {
        code.push_back((decimal % 2));
        decimal /= 2;
        
    }
    reverse(code.begin(),code.end());
    for (int x : code)
    {
        cout<< x;
    }
      
}
void decimal_to_octal(int decimal)
{
    vector <int> code;
    while(decimal > 0)
    {
        code.push_back((decimal % 8));
        decimal /= 8;
        
    }
    reverse(code.begin(),code.end());
    for (int x : code)
    {
        cout<< x;
    }
      
}
void decimal_to_hexa_decimal(int decimal)
{
    vector <int> code;
    while(decimal > 0)
    {
        code.push_back((decimal % 16));
        decimal /= 16;
        
    }
    reverse(code.begin(),code.end());
    for (int x : code)
    {
        if(x==10)
        {
            cout<<"A";
        }
        else if(x==11)
        {
            cout<<"B";
        }
        else if(x==12)
        {
            cout<<"C";
        }
        else if(x==13)
        {
            cout<<"D";
        }
        else if(x==14)
        {
            cout<<"E";
        }
        else if(x==15)
        {
            cout<<"F";
        }
        else
        {
            cout<<x;
        }
        
    }
      
}


int main()
{
    cout<<"Enter Your Input : \n";
    cout<<"1) Decimal\n2) Binary\n3) Octal\n4) Hexa decimal \n";
    int choice;
    cin>>choice;
    int value;
    cout<<"Enter Value :";
    cin>>value;

    switch(choice)
    {
        case 1:
        {
            cout<<"Binary : ";
            decimal_to_binary(value);
            cout<<"\nOctal : ";
            decimal_to_octal(value);
            cout<<"\nHexa Decimal : ";
            decimal_to_hexa_decimal(value);
            
          
        }
        break;
        case 2:
        {
            int result;
            result = binary_to_decimal(value);
            cout<<"Decimal : "<<result;
            cout<<"\nOctal : ";
            decimal_to_octal(result);
            cout<<"\nHexa Decimal : ";
            decimal_to_hexa_decimal(result);
        }
        break;
        case 3:
        {
            int result;
            
            result = octal_to_decimal(value);
            cout<<"Decimal : "<<result;
            cout<<"\nBinary : ";
            decimal_to_binary(result);
            cout<<"\nHexa Decimal : ";
            decimal_to_hexa_decimal(result);
          
        }
        break;
        case 4:
        {
          
        }
        break;
        default:
        {
            cout<<"Wrong choice!";
            return 0;
        }

    }
}