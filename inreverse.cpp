#include<iostream>
using namespace std;



void printarrayrev(int a[],int big)
{
 if(big==-1)
 {
    return;
}

if(big==0)
{cout<<a[big];  //both of these if and else conditions were
               //done to make output look good
}
else{
cout<<a[big]<<",";
}
printarrayrev(a,big-1);



}

int main()
{
    int a[]={1,4,6,98,7};
    int n=sizeof(a)/sizeof(a[0]);
    int start=n-1;
    printarrayrev(a,start);

}