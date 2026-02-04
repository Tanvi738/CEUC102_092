#include<iostream>
using namespace std;

class Palindrome
{
    char name[50] ,rev[50];
    int l=0,i,flag;
public:
    void length()
    {
        cout<<"Tanvi Patel_092"<<endl;
        cout<<"Enter the string : ";
        cin>>name;
        for(i=0;name[i]!='\0';i++)
        {
            l++;
        }
    }
    void reverce()
    {
        int j=0;
        for(i=l-1;i>=0;i--)
        {
            rev[j]=name[i];
            j++;
        }
        rev[j]='\0';
        cout<<"Reversing string is : "<<rev<<endl;
    }
    void pelindrome()
    {
        for(i=0;name[i]!='\0'&&rev[i]!='\0';i++)
        {
                if(name[i]!=rev[i] || name[i]=='\0'|| rev[i]=='\0')
                {
                    flag=0;
                }
                else
                {
                    flag=1;
                }
        }
        if(flag==1)
        {
            cout<<"This string is Palindrome"<<endl;
        }
        else
        {
            cout<<"This string is not Palindrome"<<endl;
        }
    }
};

int main()
{
    Palindrome p1;
    p1.length();
    p1.reverce();
    p1.pelindrome();
    cout<<"End this programm..";
    return 0;
}