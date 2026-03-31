#include<iostream>
#include<cmath>
using namespace std;

class Loanemi
{
    string loan_id;
    string applicant_name;
    double loan_amount;
    float interest_rate;
    int loan_tenure;
public:
    Loanemi()
    {
        cout<<"Defult constructer call "<<endl;
        loan_id="101";
        applicant_name="Tanvi";
        loan_amount=50000;
        interest_rate=10;
        loan_tenure=15;
    }
    Loanemi(string id,string name,double amount,float rate,int tenure)
    {
        cout<<"Perameter constructer call "<<endl;
        loan_id=id;
        applicant_name=name;
        loan_amount=amount;
        interest_rate=rate;
        loan_tenure=tenure;
    }
    void inpute()
    {
        cout<<"Enter loan_id : ";
        cin>>loan_id;
        cout<<"Enter applicant name : ";
        cin.ignore();
        getline(cin,applicant_name);
        cout<<"Enter loan amount : ";
        cin>>loan_amount;
        cout<<"Enter interest rate : ";
        cin>>interest_rate;
        cout<<"Enter loan tenure : ";
        cin>>loan_tenure;
    }
    void display()
    {
        cout<<"Loan ID is : "<<loan_id<<endl;
        cout<<"Applicant name is :"<<applicant_name<<endl;
        cout<<"Total loan amount is : "<<loan_amount<<endl;
        cout<<"Annual interest rate is : "<<interest_rate<<endl;
        cout<<"Loan tenure (months) is : "<<loan_tenure<<endl;
        cout<<endl;
    }
    void loan()
    {
        float r;
        float emi;
        r=interest_rate/(12*100);
        emi=(loan_amount*r*pow(1+r,loan_tenure))/(pow(1+r,loan_tenure)-1);
        cout<<"EMI is : "<<emi<<endl;
        cout<<"Total loan amount is : "<<emi*loan_tenure<<endl;
        cout<<endl;
    }
};
int main()
{
    Loanemi l1;
    l1.display();
    l1.loan();

    string loan_id;
    string applicant_name;
    double loan_amount;
    float interest_rate;
    int loan_tenure;

    cout<<"Enter loan_id : ";
    cin>>loan_id;
    cout<<"Enter applicant name : ";
    cin.ignore();
    getline(cin,applicant_name);
    cout<<"Enter loan amount : ";
    cin>>loan_amount;
    cout<<"Enter interest rate : ";
    cin>>interest_rate;
    cout<<"Enter loan tenure : ";
    cin>>loan_tenure;

    Loanemi l2(loan_id,applicant_name,loan_amount,interest_rate,loan_tenure);
    l2.display();
    l2.loan();

    return 0;
}
