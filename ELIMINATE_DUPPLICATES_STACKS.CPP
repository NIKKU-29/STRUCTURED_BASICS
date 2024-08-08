#include<bits/stdc++.h>
using namespace std;

int main()
{
    stack<char> st1;
    string s="abbaca";


    for(char c :s)
    {
            if(!st1.empty() && st1.top()==c)
            {
                st1.pop();

            }

            else{st1.push(c);}

    }

    stack<char> st2;
    char c;
    string sol="";


    while(!st1.empty())
    {
        c=st1.top();
        st1.pop();
        st2.push(c);

    }

    while(!st2.empty())
    {   
        sol=sol+st2.top();
        st2.pop();

    }

cout<<"THE STRING BEFORE WAS  "<<s;
cout<<endl;
cout<<"THE STRING AFTER ELIMINTION OF DUPICATES IS  "<<sol;



}