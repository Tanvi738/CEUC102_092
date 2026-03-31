#include<iostream>
using namespace std;

class Employee
{
    string name;
    float salary;
    float bonus_amount;

public:
    Employee(string n,float b_salary,float b_amount=2000)
    {
        name=n;
        salary=b_salary;
        bonus_amount=b_amount;
    }

    inline float calculation()
    {
        return salary+bonus_amount;
    }

     void display()
    {
        cout<<"name of the employee is"<<name<<endl;
        cout<<"employee's basic salary is "<<salary<<endl;
        cout<<"employee's bonus amount is"<<bonus_amount<<endl;
        cout<<"employee's total salary is"<<calculation()<<endl;
    }

};
int main()
{
    int n;
    cout<<"enter the number of employees"<<endl;
    cin>>n;

    string name;
    float salary,bonus_amount;
    int choice;

    Employee* emp[n];
    for(int i=0;i<n;i++)
    {
        cout<<"enter the details of"<<i+1<<"employee"<<endl;
        cout<<"enter the name of employee"<<endl;
        cin>>name;
        cout<<"enter the basic salary of employee"<<endl;
        cin>>salary;

    cout<<"1.default bonus"<<endl;
    cout<<"2.custom bonus"<<endl;
    cout<<"enter a choice"<<endl;
    cin>>choice;

    if(choice==1)
    {
       emp[i]= new Employee(name,salary);
    }
    else
    {
        cout<<"enter bonus"<<endl;
        cin>>bonus_amount;
        emp[i]= new Employee(name,salary,bonus_amount);
    }
    }

    for(int i=0;i<n;i++)
    {
        cout<<"===========displaying employee's details=========="<<endl;
        emp[i]->display();
    }
    return 0;
}
