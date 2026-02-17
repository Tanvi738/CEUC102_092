#include<iostream>
using namespace std;

class Payment
{
    int wallet_id;
    string username;
    double balance;

public:

    Payment(int id,string name,double b)
    {
         wallet_id=id;
         username=name;
         balance=b;
    }

    void loading()
    {
        double amount;
        cout<<"Enter the loading amount : ";
        cin>>amount;
        balance += amount;
        cout<<"NOW , Current balance is : "<<balance<<endl;
    }

    void withdraw()
    {
        double amount;
        cout<<"Enter the withdraw amount : ";
        cin>>amount;
        if(balance>=amount)
        {
            balance -= amount;
            cout<<"NOW , Current balance is : "<<balance<<endl;
        }
        else
        {
            cout<<"Insufficient Balance..."<<endl;
        }
    }

    void transfer(Payment &recive)
    {
        double amount;
        cout<<"Enter the transfer amount in : ";
        cin>>amount;
        if(balance>=amount)
        {
            balance-=amount;
            recive.balance+=amount;
            cout<<"Your money is succesfully transfer.."<<endl;
        }
        else
        {
            cout<<"Insufficient Balance..."<<endl;
        }
    }

    void display()
    {
        cout<<"A Unique Wallet ID is : "<<wallet_id<<endl;
        cout<<"Enter user name : "<<username<<endl;
        cout<<"Enter current Balance : "<<balance<<endl;
    }

    void money()
    {
        cout<<balance<<endl;
    }
};

int main()
{
    Payment p1(1,"Pal",20000);
    Payment p2(2,"Niva",10000);
    p1.display();
    cout<<endl;
    p1.loading();
    cout<<endl;
    p1.withdraw();
    cout<<endl<<endl;
    p2.display();
    cout<<endl;
    p2.loading();
    cout<<endl;
    p2.withdraw();
    cout<<endl<<endl;;
    cout<<"Transfer money from pal to niva.."<<endl;
    p1.transfer(p2);
    cout<<endl;
    cout<<"Transfer money from niva to pal.."<<endl;
    p2.transfer(p1);
    cout<<endl;
    cout<<"Balance in 1st account is : ";
    p1.money();
    cout<<"Balance in 2nd account is : ";
    p2.money();
    return 0;
}
/*#include<iostream>
using namespace std;

class Payment
{
    int wallet_id;
    string username;
    double balance;

public:

    Payment(int id,string name,double b)
    {
         wallet_id=id;
         username=name;
         balance=b;
    }

    void loading()
    {
        double amount;
        cout<<"Enter the loading amount : ";
        cin>>amount;
        balance += amount;
        cout<<"NOW , Current balance is : "<<balance<<endl;
    }

    void withdraw()
    {
        double amount;
        cout<<"Enter the withdraw amount : ";
        cin>>amount;
        if(balance>=amount)
        {
            balance -= amount;
            cout<<"NOW , Current balance is : "<<balance<<endl;
        }
        else
        {
            cout<<"Insufficient Balance..."<<endl;
        }
    }

    void transfer(Payment &recive)
    {
        double amount;
        cout<<"Enter the transfer amount : ";
        cin>>amount;
        if(balance>=amount)
        {
            cout<<"Your money is succesfully transfer.."<<endl;
            balance-=amount;
            recive.balance+=amount;
        }
        else
        {
            cout<<"Insufficient Balance..."<<endl;
        }
    }

    void display()
    {
        cout<<"A Unique Wallet ID is : "<<wallet_id<<endl;
        cout<<"Enter user name : "<<username<<endl;
        cout<<"Enter current Balance : "<<balance<<endl;
    }

    void money()
    {
        cout<<"Enter current Balance : "<<balance<<endl;
    }
};

int main()
{
    Payment p1(1,"Pal",20000);
    Payment p2(2,"Niva",10000);
    p1.display();
    p1.loading();
    p1.withdraw();
    cout<<endl;
    p2.display();
    p2.loading();
    p2.withdraw();
    cout<<endl;
    p1.transfer(p2);
    cout<<endl;
    cout<<"Balance in 1st account is : ";
    p1.money();
    cout<<"Balance in 2nd account is : ";
    p2.money();
    return 0;
}*/

