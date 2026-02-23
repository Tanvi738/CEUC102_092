#include<iostream>
using namespace std;

class Daccount
{
    string cname;
    string a_id;
    double balance;

public:
    void input()
    {
        cout<<" Enter Unique account ID  : ";
        cin.ignore();
        getline(cin,a_id);
        cout<<"Enter Customer name : ";

        getline(cin,cname);
        cout<<"Current Balance is : ";
        fflush(stdin);
        cin>>balance;
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
    void display()
    {
        cout<<"A Unique account ID is : "<<a_id<<endl;
        cout<<"Customer name : "<<cname<<endl;
        cout<<"Current Balance : "<<balance<<endl;
    }
    string getid()
    {
        return a_id;
    }
};

int main()
{
    int no,n;
    cout<<"How many accounts you want to creat ? : ";
    cin>>no;
    Daccount d[no];
    for(int i=0;i<no;i++)
    {
        cout<<"Enter "<<i+1<<" Account detail.."<<endl;
        d[i].input();
    }
    do
    {
        cout<<"1.Display"<<endl;
        cout<<"2.Loading"<<endl;
        cout<<"3.Withdraw"<<endl;
        cout<<"4.Exiting"<<endl;

        cout<<"Enter the choice : ";
        cin>>n;
        string sid;
        int flag=0;
        switch(n)
        {
        case 1:
            for(int i=0; i<no; i++)
            {
                cout<<"Display "<<i+1<<" acccount detail.."<<endl;
                d[i].display();
            }
            cout<<endl;
            break;
        case 2:
            cout<<"Enter the unique account id : ";
            cin.ignore();
            getline(cin,sid);
            for(int i=0; i<no; i++)
            {
                if(d[i].getid()==sid)
                {
                     d[i].loading();
                     flag=1;
                     break;
                }
            }
            if(!flag)
                {
                    cout<<"Incorrect id "<<endl;
                }
            cout<<endl;
            break;
      case 3:
            cout<<"Enter the unique account id : ";
            cin.ignore();
            getline(cin,sid);
            for(int i=0; i<no; i++)
            {
                if(d[i].getid()==sid)
                {
                     d[i].withdraw();
                     flag=1;
                     break;
                }
            }
             if(!flag)
                {
                    cout<<"Incorrect id"<<endl;
                }
            cout<<endl;
            break;
      default :
        cout<<"Enter correct choice..."<<endl;
        }
    }while(n!=4);
    cout<<endl;
    cout<<"Displaying Final Details.."<<endl;
            for(int i=0; i<no; i++)
            {
                cout<<"Display "<<i+1<<" acccount detail.."<<endl;
                d[i].display();
            }
    return 0;
}
