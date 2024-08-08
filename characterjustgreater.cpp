#include<iostream>
using namespace std;




int solve_bs(char a[],char n,char k)
{
    int res=-1;
 
    int l=0;
    int r=n-1;  

       while(l<=r)
       {
           int mid=l+(r-l)/2;

           if(a[mid]==k)
           {
            l=mid+1;
           }

           else if(a[mid]>k)
           {
            res=a[mid];
            r=mid-1;
           }

           else{l=mid+1;}

        }

        return res;

}


int main()
{
    char a[]={'a','c','d','f','f','f','i'};
    char k = 'e';
    int n =sizeof(a)/sizeof(a[0]);

    char val=solve_bs(a,n,k);
    if(val==-1)
    {cout<<"THE GIVEN CHARACTER DONOT EXIST IN THIS ARRAY";}

else{
cout<<"THE SMALLEST CAHARACTER JUST GREATER THAN  "<<k<<" IS "<<val;
}
}



