#include<iostream>
using namespace std;

class Library
{
    int book_id;
    string booktitle;
    string author;
    int available;

public:

    Library()
    {
        book_id=0;
        booktitle+"";
        author="";
        available=0;
    }

    Library(int id,string title,string name,int no)
    {
        book_id=id;
        booktitle=title;
        author=name;
        available=no;
    }

    void display()
    {
        cout<<"Book ID is : "<<book_id<<endl;
        cout<<"Book Title is : "<<booktitle<<endl;
        cout<<"Book author name is : "<<author<<endl;
        cout<<"Number of available book copy is : "<<available<<endl;
    }

    void add()
    {
        cout<<"Enter book id : ";
        cin>>book_id;
        cout<<"Enter book title : ";
        cin>>booktitle;
        cout<<"Enter book author name : ";
        cin>>author;
        fflush(stdin);
        cout<<"Enter Number of available book copy : ";
        cin>>available;
    }

    void issued()
    {
        int no;
        cout<<"enter the no of book you want to issued : ";
        cin>>no;
        if(available>0)
        {
            available-=no;
            cout<<"You have successfully issued this book..."<<endl;
        }
        else if(available==0)
        {
            cout<<"You do not want to issued book.."<<endl;
        }
        else
        {
            cout<<"This book is not available.."<<endl;
        }
    }
    void returnbook()
    {
        available+=1;
        cout<<"You have successfully return this book..."<<endl;
    }
};

int main()
{
    Library l3;
    Library l1(101,"Basic of C++","Balaguru",10);
    Library l2(102,"C language","M.J.Patel",12);
    l1.display();
    cout<<endl;
    l2.display();
    cout<<endl;
    cout<<"Adding new books to the library.."<<endl;
    l3.add();
    cout<<endl;
    cout<<"isuued basic of c++ book "<<endl;
    l1.issued();
    cout<<endl;
    //cout<<"Return book.."<<endl;
    //l1.returnbook();
    cout<<"Displaying total books in the library..."<<endl;
    l1.display();
    return 0;
}
