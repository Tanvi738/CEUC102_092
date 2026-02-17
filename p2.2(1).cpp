#include<iostream>
using namespace std;
class Student
{
    private:
    int roll_number;
    string name;
    int marks[3];
    float avg=0;

    public:
    void putdata();
    Student():roll_number(92),name("Tanvi Patel")
    {
        cout<<"student register:"<<endl;
       //roll_number=92;
       // name="Tanvi Patel";
        marks[0]=80;
        marks[1]=89;
        marks[2]=98;

        for(int i=0;i<2;i++)
        {
            avg=avg+marks[i];
        }
        avg=avg/3;
    }
    Student(int r,string n,int m[3],float a)
    {
        cout<<"calling parameterrise constructer.."<<endl;
        roll_number=r;
        name=n;
        avg=a;
        for(int i=0;i<3;i++)
        {
            marks[i]=m[i];
        }
    }
};
void Student:: putdata()
{
    cout<<"sutdent roll number is:"<<roll_number<<endl;
    cout<<"student name is :"<<name<<endl;
    for(int i=0;i<3;i++)
    {
        cout<<"student's marks of "<<i+1 <<" subject is:"<<marks[i]<<endl;
    }
    cout<<"average of marks is :"<<avg<<endl;
}

int main()
{
      Student b1[5];

    cout<<"=============printing details==============="<<endl;

    for(int i=0;i<5;i++)
    {
        b1[i].putdata();
    }

    int r;
    string n;
    int m[3];
    float avg=0;

    cout<<"enter the roll number:"<<endl;
    cin>>r;

    cout<<"enter the name"<<endl;
    cin>>n;

    cout<<"enter the marks of 3 subject.."<<endl;
    for(int i=0;i<3;i++)
    {
        cout<<"enter the marks of "<<i+1<<"subject:";
        cin>>m[i];
        avg=avg+m[i];
    }
    avg=avg/3;
    cout<<endl;
    cout<<"printing details.."<<endl;

    Student b2(r,n,m,avg);
    b2.putdata();

    return 0;

}
