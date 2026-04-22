#include<iostream>
#include<fstream>

using namespace std;

int main()
{
    string filename = "prisha.txt";
    string line;
    int linecount = 0;
    int wordcount = 0;
    int charactercount = 0;

    ofstream outfile(filename,ios::out);

    if(!outfile)
    {
        cerr<<"Error ! file could not be open "<<endl;
        return 1;
    }

    outfile<<"Hello Everyone"<<endl;
    outfile<<"Charotar univercity of science and technology"<<endl;
    outfile<<"CSPIT computer engineering"<<endl;
    outfile.close();
    cout<<endl;
    ifstream infile(filename,ios::in);

    if(!infile)
    {
        cerr<<"Error ! file could not be open "<<endl;
        return 1;
    }

    while(getline(infile,line))
    {
        cout<<line<<endl;
        linecount++;
        charactercount += line.length();
        for(int i=0;i<=line.length();i++)
     {
        if(line[i]== ' ')
        {
            wordcount++;
        }
    }
    wordcount++;
    }
    cout<<endl;
    cout<<"Number of lines : "<<linecount<<endl;
    cout<<"Number of character : "<<charactercount<<endl;
    cout<<"Number of words : "<<wordcount<<endl;
    return 0;
}