#include<iostream>
using namespace std;

long long recursion(long long sum)
{
    if(sum<10)
    {
        return sum;
    }
    long long total = 0;
   while(sum>0)
   {
        total+=sum%10;
        sum/=10;
   }
   return recursion(total);
}

int main()
{
    string n;
    int k;
    long long s=0,sum=0,sd;
    cout<<"Enter the Number : ";
    cin>>n;
    cout<<"Enter the repetation number : ";
    cin>>k;

    for(int i=0;i<n.length();i++)
    {
        s+=(n[i]-'0');
    }
    sum=s*k;
    cout<<"The super digit is : "<<recursion(sum)<<endl;
    return 0;
}