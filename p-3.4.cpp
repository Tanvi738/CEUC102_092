#include<iostream>
using namespace std;

template <typename T>
void getarray(T p[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<"Enter "<<i+1<<" element : ";
        cin>>p[i];
    }
}

template <typename T>
void mymax(T p[],int n)
{
    T max_value=0;
    for(int i=0;i<n;i++)
    {
       if(p[i]>max_value)
       {
           max_value=p[i];
       }
    }
     cout<<"The maximum value is : "<<max_value<<endl;
}

template <typename T>
void rev(T p[],int n)
{
    cout<<"Reverse array..."<<endl;
    for(int i=n-1;i>=0;i--)
    {
        cout<<i+1<<" element is : "<<p[i]<<endl;
    }
}

template<typename T>
void display(T p[],int n)
{
    cout<<"Display elements of array.."<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<"Enter "<<i+1<<" element : "<<p[i]<<endl;;
    }
}

template<typename T>
void leader(T p[],int n)
{
    int i,leader=0;
    cout<<"Leader Elements in an Array : ";
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(p[i]>p[j])
            {
                leader=1;
            }
            else
            {
                leader=0;
                break;
            }
        }
        if(leader == 1)
        {
            cout<<p[i]<<" ,";
        }
    }
    cout<<endl;
}

int main()
{
    int n,choice,c;
    char again;

    cout<<"Enter the number of array elements : ";
    cin>>n;

    int i1[n];
    float f1[n];
    char c1[n];
do
{
    cout<<"1.Enter array element"<<endl;
    cout<<"2.Maxvalue"<<endl;
    cout<<"3.Reverse the array "<<endl;
    cout<<"4.Display the elements "<<endl;
    cout<<"5.Leader Elements "<<endl;
    cout<<"Enter your choice : ";
    cin>>choice;

    switch(choice)
    {
        case 1:
            cout<<"1.integer"<<endl;
            cout<<"2.float"<<endl;
            cout<<"3.character"<<endl;
            cout<<"Enter the data type : ";
            cin>>c;
            switch(c)
            {

                case 1:
                    getarray<int>(i1,n);
                    break;

                case 2:
                    getarray<float>(f1,n);
                    break;

                case 3:
                    getarray<char>(c1,n);
                    break;

            }
            break;

        case 2:
            cout<<"1.integer"<<endl;
            cout<<"2.float"<<endl;
            cout<<"3.character"<<endl;
            cout<<"Enter the data type : ";
            cin>>c;
            switch(c)
            {

                case 1:
                    mymax<int>(i1,n);
                    break;

                case 2:
                    mymax<float>(f1,n);
                    break;

                case 3:
                    mymax<char>(c1,n);
                    break;

            }
            break;

        case 3:
            cout<<"1.integer"<<endl;
            cout<<"2.float"<<endl;
            cout<<"3.character"<<endl;
            cout<<"Enter the data type : ";
            cin>>c;
            switch(c)
            {

                case 1:
                    rev<int>(i1,n);
                    break;

                case 2:
                    rev<float>(f1,n);
                    break;

                case 3:
                    rev<char>(c1,n);
                    break;

            }
            break;

        case 4:
            cout<<"1.integer"<<endl;
            cout<<"2.float"<<endl;
            cout<<"3.character"<<endl;
            cout<<"Enter the data type : ";
            cin>>c;
            switch(c)
            {

                case 1:
                    display<int>(i1,n);
                    break;

                case 2:
                    display<float>(f1,n);
                    break;

                case 3:
                    display<char>(c1,n);
                    break;

            }
            break;
        case 5:
            cout<<"1.integer"<<endl;
            cout<<"2.float"<<endl;
            cout<<"3.character"<<endl;
            cout<<"Enter the data type : ";
            cin>>c;
            switch(c)
            {

                case 1:
                    leader<int>(i1,n);
                    break;

                case 2:
                    leader<float>(f1,n);
                    break;

                case 3:
                    leader<char>(c1,n);
                    break;

            }
            break;

        default:

            cout<<"Choose corrrect choice ..."<<endl;
            break;
    }

    cout<<"You want to run again//(y/n) : ";
    cin>>again;

}while(again=='y'|| again=='Y');
    return 0;
}