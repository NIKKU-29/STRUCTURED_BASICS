#include<iostream>
//finding first index
using namespace std;

int findit(int a[],int l,int r,int k)
{   
int res=-1;

        while(l<=r)
        {
               int mid= l+(r-l)/2;

                if(a[mid]==k)
                {
                    res=mid;
                    r= mid-1;
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
    int a[]={1,2,3,4,4,6,66,77};
    int k=4;
    int n=sizeof(a)/sizeof(a[0]);
    
   int index= findit(a,0,n-1, k);
   cout<<"ELEMENT TO BE FOUNDED WAS "<<k;

cout<<"\n ELEMENT FOUND AT LOCATION INDEX "<<index;
}