#include<iostream>
//finding first index
using namespace std;

int finditfirst(int a[],int l,int r,int k)
{   
int mes=-1;

        while(l<=r)
        {
               int mid= l+(r-l)/2;

                if(a[mid]==k)
                {
                    mes=mid;
                    r= mid-1;
                }

                else if(a[mid]<k)
                {
                    l= mid+1;
                }

                else{r=mid-1;}



                
        }

   
 return mes;


}

int finditlast(int a[],int l,int r,int k)
{   
int res=-1;

        while(l<=r)
        {
               int mid= l+(r-l)/2;

                if(a[mid]==k)
                {
                    res=mid;
                    l=mid+1;
                }

                else if(a[mid]<k)
                {
                    l= mid+1;
                }

                else{r=mid-1;}



                
        }

   
 return res;


}


int main()
{
    int a[]={1,2,4,4,4,4,66,77};
    int k=4;
    int n=sizeof(a)/sizeof(a[0]);
    
   int firstindex= finditfirst(a,0,n-1, k);
   int lastindex= finditlast(a,0,n-1,k);
   cout<<"\nELEMENT TO BE FOUNDED WAS "<<k;

int frequency=lastindex-firstindex+1;


cout<<"\nFREQUENCY OF THE NO TO BE FOUND IS "<<frequency;

}