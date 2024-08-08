#include<iostream>
using namespace std;

int main()

{

int number=486;
int sum=0;
int n=number;

while(n!=0)
{
     int digit=n%10;

     sum+=digit;

     n/=10;


}

cout<<"sUM OF DIGIT IS "<<sum;
}