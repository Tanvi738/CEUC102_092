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
    Student()
    {
        cout<<"student register:"<<endl;
        roll_number=92;
        name="Tanvi Patel";
        marks[0]=80;
        marks[1]=89;
        marks[2]=98;

        for(int i=0;i<3;i++)
        {
            avg=avg+marks[i];
        }
        avg=avg/3;
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
    return 0;

}
