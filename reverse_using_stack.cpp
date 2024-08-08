#include<bits/stdc++.h>
using namespace std;


int main()
{
    stack<int> st;
    int n=406;
    //604
    int digit;
    while(n!=0)
    {
        digit=n%10;
        st.push(digit);
        n=n/10;

    }
int multiplier=1;
int reverse=0;

while(!st.empty())
{
    digit=st.top();
    st.pop();
    int zee=digit*multiplier;
    reverse=reverse+zee;
    multiplier=multiplier*10;


}

cout<<"THE REVERSE OF THE GIVEN NO IS "<<reverse;




}