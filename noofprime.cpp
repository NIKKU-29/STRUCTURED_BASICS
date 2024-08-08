//find no of prime elements in an given array

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
void countprime(int a[],int n)
 {
    int count=0;
    for(int i=0;i<n;i++)
    {
                
                int flag=checkprime(a[i]);

                count=count+flag;
     }

cout<<"TOTAL NO OF PRIME ELEMENTS IS  "<<count;
 }

int main()
{
int a[6]={2,3,5,7,9,10};
int s=sizeof(a)/sizeof(a[0]);

countprime(a,s);

}



