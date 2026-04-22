#include<iostream>
using namespace std;

int main()
{
    string paragraph;
    string word[100];
    int wordcount = 0;
    string tem = "";
    int freq[100];
    cout<<"Enter the paragraph : "<<endl;
    getline(cin,paragraph);
    paragraph+=" ";
    for(int i=0;i<paragraph.length();i++)
    {
        if(paragraph[i]!=' ')
        {
            tem+=paragraph[i];
        }
        else
        {
            if(tem != "")
            {
                for (int k=0;k<tem.length();k++)
                {
                    if(tem[k]>='A' && tem[k]<='Z')
                    {
                        tem[k]+=32;
                    }
                }
                word[wordcount]=tem;
                wordcount++;
                tem="";
            }
        }
    }
    cout<<wordcount<<endl;;
    for(int i=0;i<wordcount;i++)
    {
        freq[i]=1;
    }
    for(int i=0;i<wordcount;i++)
    {
        if(freq[i]== 0)
            continue;
        for(int j=i+1;j<wordcount;j++)
        {
            if(word[i]==word[j])
            {
            freq[i]++;
            freq[j]=0;
            }
        }
    }
    for(int i=0;i<wordcount;i++)
    {
        if(freq[i]!=0)
        {
            cout<<word[i]<<" : "<<freq[i]<<endl;
        }
    }
    return 0;
}