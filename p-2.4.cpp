#include<iostream>
using namespace std;

class Store
{
    string item_id;
    string item_name;
    float price;
    int quantity;

public:
    Store()
    {
        item_id="105";
        item_name="Maggie";
        price=15;
        quantity=15;
    }
    Store(string id,string name,float p,int q)
    {
        item_id=id;
        item_name=name;
        price=p;
        quantity=q;
    }
    void display()
    {
        cout<<"The Unique item ID is : "<<item_id<<endl;
        cout<<"Item name is : "<<item_name<<endl;
        cout<<"Price is : "<<price<<endl;
        cout<<"Quantity in stock is : "<<quantity<<endl;
        cout<<endl;
    }
    void add()
    {
        int stock;
        cout<<"Enter new added stock : ";
        cin>>stock;
        quantity+=stock;
        cout<<"Now Quantity is "<<quantity<<endl;
        cout<<endl;
    }
    void sold()
    {
        int stock,flag=0;
        cout<<"Enter solded stock : ";
        cin>>stock;
        if(stock<=quantity)
        {
            quantity-=stock;
            flag=1;
            cout<<"Now Quantity is "<<quantity<<endl;
        }
        if(!flag)
        {
            cout<<"Now Stock is not available.."<<endl;
        }
        cout<<endl;
    }
    string id()
    {
        return item_id;
    }
};

int main()
{
    Store s[5]= {Store("101","Pen",10,100),
                Store("102","Pencile",5,200),
                Store("103","Chocolate",25,50),
                Store("104","Biscuite",50,10),
                Store()};
    int c;
    do
    {
        cout<<"1.display"<<endl;
        cout<<"2.Add iteam"<<endl;
        cout<<"3.Buy iteam"<<endl;
        cout<<"4.exit"<<endl;
        cout<<endl;
        string i_id;
        int flag=0;
        cout<<"Enter your choice : ";
        cin>>c;
        switch(c)
        {
            case 1:
                for(int i=0;i<5;i++)
                {
                    cout<<"Display "<<i+1<<" Iteam's Detail..."<<endl;
                    s[i].display();
                }
                cout<<endl;
                break;
            case 2:
                cout<<"Enter iteam id : ";
                cin>>i_id;
                for(int i=0;i<5;i++)
                {
                    if(s[i].id()==i_id)
                    {
                        s[i].add();
                        flag=1;
                    }
                    if(!flag)
                    {
                        cout<<"Enter correct iteam id.."<<endl;
                        break;
                    }
                }
                cout<<endl;
                break;
            case 3:
                cout<<"Enter iteam id : ";
                cin>>i_id;
                for(int i=0;i<5;i++)
                {
                    if(i_id==s[i].id())
                    {
                        s[i].sold();
                        flag=1;
                    }
                    if(!flag)
                    {
                        cout<<"Enter correct iteam id.."<<endl;
                        break;
                    }
                }
                cout<<endl;
                break;
            default :
                cout<<"Enter correct choice.."<<endl;
                cout<<endl;
        }
    }while(c!=4);
    cout<<endl;
    cout<<"Final displaying ..."<<endl;
        for(int i=0;i<5;i++)
                {
                    cout<<"Display "<<i+1<<" Iteam's Detail..."<<endl;
                    s[i].display();
                }
    return 0;
}
