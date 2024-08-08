#include<iostream>

using namespace std;

int printsum(int n)
{ 
 int sum=0;
 for(int i=0;i<=n;i++)
 {
    sum=sum+i;
 }
 return sum;
}

int main()

{
  int a=5;
  cout<<"sum is "<<printsum(a);




}