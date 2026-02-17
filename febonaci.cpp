//Febonaci

#include<iostream>
using namespace std;

class Fibonaci
{
    int n,i,a;
public:
    int fun()
    {
        cout<<"Enter the number : ";
        cin>>n;
        cout<<" Fibonacci Sequnce "<<endl;
        for(i=1;i<=n;i++)
        {
            cout<<fibo(i)<<"\t";
        }
    }
    int fibo(int a)
    {
        if(a==1)
            return 0;
        else if(a==2)
            return 1;
        else
            return fibo(a-1)+fibo(a-2);

    }
};
int main()
{
    Fibonaci f1;
    f1.fun();
    return 0;
}

