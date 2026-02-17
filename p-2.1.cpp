
#include<iostream>
using namespace std;

class Rectangle
{
    float length,width;

public:
    void input()
    {
        cout<<"Enter the length : ";
        cin>>length;
        cout<<"Enter the width : ";
        cin>>width;
    }
    float area()
    {
        return length*width;
    }
    float perimeter()
    {
        return 2*(length+width);
    }
    void display()
    {
        cout<<"Area of rectangle : " <<area()<<endl;
        cout<<"Perimeter of rectangle : "<<perimeter()<<endl;
    }
};

int main()
{
    Rectangle r1[2];

    for(int i=0;i<2;i++)
    {
        cout<<"Enter value for "<<i+1<<" Rectangle"<<endl;
        r1[i].input();
    }
    cout<<endl;
    for(int i=0;i<2;i++)
    {
        cout<<"Display area and perimeter "<<i+1<<" Rectangle"<<endl;
        r1[i].display();
    }
    return 0;
}
