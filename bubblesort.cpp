#include<iostream>
using namespace std;

int main()
{   
    int n=6,temp;
    int arry[n];
    cout<<"ENTER ELEMENTS OF THR ARRAY";
    for(int a=0;a<n;a++)
     {      
            
            cin>>arry[a];

    }
        for (int step=0; step <n-1;step++)
        {
              for(int i=0;i<n-step-1;i++)
                {
                    if(arry[i]<arry[i+1]) 
                        
                        {  
                            temp=arry[i];
                            arry[i]=arry[i+1];
                            arry[i+1]=temp;
                        }




        
                }
        }

                       
                            cout<<"sorted array using bubble sort------->>";
                            
                             for(int i=0;i<n;i++)
                                          {
                                                    cout<<arry[i]<<" ";
      
      
      
                                            }


}