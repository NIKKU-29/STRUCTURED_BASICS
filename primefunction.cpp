//check if no is prme
//create a function to do so

#include<iostream>
using namespace std;



int checkprime(int n)
{
for(int i=2;i<n;i++)
    {
       if(n%i==0)
        {
            return 0;
        }

    } 

return 1;
}
   

int main()
   {
    int b=113234;
    int flag=checkprime(b);


   if(flag==1)
    {cout<<b<<" IS PRIME";}
   else
   {cout<<b<<" IS NOT PRIME";}

   }

   