#include<bits/stdc++.h>

using namespace std;



int main(){

string colors="AAABABB";
int n=colors.size();
cout<<n;
int turn=1;
int ans=0;
calculate(colors,turn,ans,n);

}

int calculate(string colors,int turn,int& ans,int n)
{

if((turn%2)!=0)
{
    for(int i=1;i<n-1;i++)
    {
      if(colors[i-1]=='A'&&colors[i]=='A'&&colors[i+1]=='A')
      {
        colors.erase(i,1);
        return ans=0;
        turn+=1;
      }
      else ans=1;

    }

}
     if((turn%2)==0)
{
    for(int i=1;i<n-1;i++)
    {
      if(colors[i-1]=='B'&&colors[i]=='B'&&colors[i+1]=='B')
      {
        colors.erase(i,1);
        turn+=1;
      }
      else ans=0;

    }

}

    if(ans==0)
    {
        cout<<" True";
    }
    if(ans==1)
    {
        cout<<" FALSE";
    }


}