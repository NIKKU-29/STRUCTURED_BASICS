#include<iostream>
using namespace std;



struct complex
{       
    double re,im;
};




complex operator+(complex&a,complex&b)
{
   complex r;
   
   r.re= a.re + b.re;
   r.im= a.im + b.im;
   return r;
} 
  
    class mytype
    {
        
    public:

        
        

            int x;
            int y;
    };


int main()
{
    complex d1,d2,d;

    d1.re=12.5; d1.im=2.3;
    d2.re=42.5; d2.im=22.5;
    d=d1+d2;

    int a,b;

    cout<<"REAL  "<<d.re<<"\n";
    cout<<"IMG   "<<d.im<<"\n";

    
    mytype m,n;
    
  
    m.x=12;
    m.y=22;

    cout<<"value of x "<<m.x<<"\n";
    cout<<"value of y "<<m.y<<"\n";
}