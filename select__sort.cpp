#include<bits/stdc++.h>
using namespace std;

void selection(int a[],int n)
{

    int min=0;
    int ind;
    for(int i=0;i<n-1;i++)
    {
        min=a[i];

        for(int j=i+1;j<n;j++)
        {
            if(a[j]<min)
            {
               min=a[j];
                int ind=j;
            }
        }

    int temp = a[i];
        a[i] = a[ind];
        a[ind]=temp;


    }


}
int main()
{

int a[]={89,1,4,2,3,12};
int n=sizeof(a)/sizeof(a[0]);
selection(a,n);

 cout<<"sorted array using bubble sort------->>";
                            
for(int i=0;i<n;i++)
 {cout<<a[i]<<" ";
}


}