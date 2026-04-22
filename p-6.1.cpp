#include<iostream>
using namespace std;

class Shape
{
protected:
    float radius;
public:
    void setr(float r)
    {
        radius = r;
    }
};

class Circle : public Shape
{
public:
    float area()
    {
        return 3.14*radius*radius;
    }
};

int main()
{
    int n;
    float r;
    cout<<"Enter the number of circle : ";
    cin>>n;
    Circle *p = new Circle[n];
    cout<<endl;
    cout<<"Enter the radius of the circles..."<<endl;
    cout<<"--------------------------------"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<"Enter the radius of "<<i+1<<" circle : ";
        cin>>r;
        p[i].setr(r);
    }
    cout<<endl;
    cout<<"Display area of the circles..."<<endl;
    cout<<"--------------------------------"<<endl;
    for(int i=0;i<n;i++)
    {
        float a = p[i].area();
        cout<<"Circle "<<i+1<<" area : "<< a <<endl;
    }
    delete[] p;
    return 0;
}