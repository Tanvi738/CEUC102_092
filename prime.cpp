#include<iostream>
using namespace std;

class Prime
{
    int n,sum=0,i;

    public:
    void number()
    {
        cout<<"Tanvi Patel_092"<<endl;
        cout<<"enter the number:"<<endl;
        cin>>n;
        for ( i = 1; i <= n; i++)
        {
            if(n%i == 0)
            {
                sum++;
            }
        }
    }

    void fun()
    {
        if(sum == 2)
        {
            cout<<n<<"is a prime number"<<endl;
        }
        else
        {
            cout<<n<<"is not a prime number";
        }
    }
};

int main()
{
    Prime p1;
    p1.number();
    p1.fun();
    return 0;
}