#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int arr[]={12,32,41,13,56,23};
    int k=56;
    cout<<endl<<"INTIAL ARRAY ";
     for(int i=0;i<6;i++)
        cout<<arr[i]<<" ";



    sort(arr,arr+6);

        cout<<endl<<"AFTER SORTING ";
        for(int i=0;i<6;i++)
        {cout<<arr[i]<<" ";}

        cout<<"\n";

        cout<<endl<<"ELEMENT TO BE FOUND IS \t "<<k;

        if(binary_search(arr,arr+6,k))  
        cout<<endl<<"ELEMENT FOUND";

        else
        cout<<endl<<"ELEMENT NOT FOUND";   
}