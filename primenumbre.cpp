//Primenumber

#include<iostream>
using namespace std;

class Prime
{
    int number,i,sum=0;
public:
    void fun()
    {
        cout<<"Enter the number : ";
        cin>>number;
        for(i=1;i<=number;i++)
        {
            if(number%i==0)
            {
                sum++;
            }
        }
    }
    void prime()
    {
        if(sum==2)
        {
            cout<<number<<" is prime number";
        }
        else
        {
            cout<<number<<" is not prime number";
        }
    }
};

int main()
{
    Prime p1;
    p1.fun();
    p1.prime();
    return 0;
}
