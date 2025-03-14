#include <iostream>
using namespace std;
class example
{
    private :
    int y;
    int z;
    public :
    int function(int a, int b, int c)
    {
        return (a+b)/c;
    }

    void func(int a,int b)
    {
        y = a;
        z = b;
     }

    void func()
    {
        cout<<y<<'\t'<<z;
    }

    example()
    {
        cout<<"i am a constructor"<<endl;
    }

    ~example()
    {
        cout<<"i am a destructor";
    }


};
int main()
{
    example obj;
    int x = obj.function(5,5,2);
    cout<<x<<endl;
    int a,b;
    cin>>a>>b;
    obj.func(a,b);
    obj.func();

}
