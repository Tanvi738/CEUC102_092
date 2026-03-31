#include<iostream>
using namespace std;

float recursive(int num[],int n)
{
    if(n==0)
    {
        return 0;
    }
    else
    {
        return num[n-1]+recursive(num,n-1);
    }
}

float  iterative(int num[],int n)
{
    float sum=0;
    for(int i=0;i<n;i++)
    {
        sum+=num[i];
    }
    return sum;
}

int main()
{
    int n;
    cout<<"Enter size of array : ";
    cin>>n;
    int *num = new int[n];
    for(int i=0;i<n;i++)
    {
        cout<<"Enter the "<<i+1<<" Element of the array : ";
        cin>>num[i];
    }
    float recu=recursive(num,n);
    float iter=iterative(num,n);

    cout<<"Using recursive function..."<<endl;
    cout<<"Sum is : "<<recu<<endl;
    cout<<"Using iterative function..."<<endl;
    cout<<"Sum is : "<<iter<<endl;
    return 0;
}
