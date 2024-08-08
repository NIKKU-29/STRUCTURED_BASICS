#include<bits/stdc++.h>
using namespace std;


int main()
{
    int num;
    cout<<"ENTER THE NUMBER  ";
    cin>>num;
    int count=0;
    int ans=1;
    int sum=0;

    for(int i=0;i<32;i++)
    {
        if((num>>i) & 1 ==1)
        {
            count++;
        }
    }

    

    
    sum = (1 << count) - 1;

    cout << "--->" << sum;
    return sum;
}