
#include<iostream>
using namespace std;


int findmin(int a[],int n, int bg,int mn)

{

    if(bg==n)
    {
        return mn;
    }
    

    mn= min(mn,a[bg]);

    return findmin(a,n,bg+1,mn);
}



int main()
{
    int a[]={1,4,6,98,7};
    int n=sizeof(a)/sizeof(a[0]);
    int start=0;
    int mn=a[0];
   
    cout<<"smallest is  "<< findmin(a,n,start,mn);
   

}