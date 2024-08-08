#include<iostream>
using namespace std;

int findit(int a[],int s,int e,int k)
{   

        while(s<=e)
        {
               int mid= s+(e-s)/2;

                if(a[mid]<k)
                {
                    s= mid+1;
                }

                else if(a[mid]>k)
                {
                    e= mid-1;
                }


                else{return mid;}



                
        }

   
 return -1;


}


int main()
{
    int a[]={1,4,7,23,43,66,77};
    int k=77;
    int n=sizeof(a)/sizeof(a[0]);
    
   int index= findit(a,0,n-1, k);
   cout<<"ELEMENT TO BE FOUNDED WAS "<<k;

cout<<"\n ELEMENT FOUND AT LOCATION INDEX "<<index;
}