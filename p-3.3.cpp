#include<iostream>
using namespace std;

class Account
{
    int account_number;
    string aholder_name;
    double current_balance;
    static int n;

public:

    Account()
    {
        n++;
    }

    void getdata()
    {
        cout<<"Enter Account Number : ";
        cin>>account_number;
        cout<<"Enter Account holder name : ";
        cin>>aholder_name;
        cout<<"Enter current balance : ";
        cin>>current_balance;
    }

    void transfer(Account &a)
    {
        float amount;
        cout<<"Enter the transfer amount : ";
        cin>>amount;
        if(current_balance>=amount)
        {
            current_balance-=amount;
            a.current_balance+=amount;
            cout<<"Money is succesfully transfer..."<<endl;
        }
        else
        {
            cout<<"Insufficiant balance.."<<endl;
        }
    }
    void display()
    {
        cout<<"Account number is : "<<account_number<<endl;
        cout<<"Account holder name is : "<<aholder_name<<endl;
        cout<<"Current balance is : "<<current_balance<<endl;
    }
    void t_account()
    {
        cout<<n<<" number of account is created.."<<endl;
    }
};

int Account :: n;
int main()
{
    int p;
    cout<<"Enter the number of account you want to created : ";
    cin>>p;
    cout<<endl;
    Account *a = new Account[p];
    for(int i=0;i<p;i++)
    {
        cout<<"Enter the "<<i+1<<" account detail.."<<endl;
        a[i].getdata();
        cout<<"-------------------------------------"<<endl;
    }
    cout<<endl;
    cout<<"For money transfer..."<<endl;
    int sender,reciver;
    cout<<"Enter the sender account number..(0 to p-1) : ";
    cin>>sender;
    cout<<"Enter the reciver account number..(0 to p-1) : ";
    cin>>reciver;
     if(sender>=0 && sender<p && reciver>=0 && reciver<p)
     {
         if(sender==reciver)
         {
             cout<<"cannot transfer to the same account..."<<endl;
         }
         else
         {
             a[sender].transfer(a[reciver]);
         }
     }
     else
     {
         cout<<"Enter valid Account number..."<<endl;
     }
    cout<<endl;
    cout<<"Display account details.."<<endl;
    for(int i=0;i<p;i++)
    {
        cout<<"----------------------------------------------"<<endl;
        cout<<"Display the "<<i+1<<" account detail.."<<endl;
        a[i].display();
    }
    cout<<endl;
    cout<<"Total account.."<<endl;
    a[0].t_account();

   // delete[] a;
    return 0;
}
