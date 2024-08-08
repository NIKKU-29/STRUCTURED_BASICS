#include<iostream>

using namespace std;



int findit(int a[],int n,int b)
{
    for(int i=0;i<n;i++)

    {
        if(a[i]==b)
        {return i;}

        
    }
       
            return -1;


}

int main()
{
    int a[]={1,4,7,23,43,66,77};
    int k=77;
    int n=sizeof(a)/sizeof(a[0]);
    
   int index= findit(a,n, k);
   cout<<"ELEMENT TO BE FOUNDED WAS "<<k;
   if(index==-1)
   {cout<<"\nELEMENT NOT FOUND";}
  else{cout<<"\n ELEMENT FOUND AT LOCATION INDEX "<<index;}
}