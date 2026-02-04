#include<iostream>
using namespace std;

class Febonaci
{
    int n,i,a=0,b=1,c;
    public:

    int fun()
    {
        cout<<"enter the number:";
        cin>>n;
        cout<<"Tanvi Patel_25CE092"<<endl;

    }

    int fib()
    {
        for(i=1;i<=n;i++)
        {
            cout<<"febonaci sequance"<<endl;
            cout<<a<<endl;
            c=a+b;
            a=b;
            b=c;
        }
    }

};
int main()
{
    Febonaci f1;
    f1.fun();
    f1.fib();
    return 0;

}