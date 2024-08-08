#include<iostream>
using namespace std;


int Area(int a,int b=14){return (a*b);}
double Area(double c ,double d=10){return (c*d);}

int main(){int x=10,y=12,t; double c=12.1,d=3.2,n;


t=Area(2,8);
cout<<"AREA IS "<<t<<endl;

t=Area(x);
cout<<"AREA IS "<<t<<endl;

t=Area(x,y);
cout<<"AREA IS "<<t<<endl;

n=Area(c,d);
cout<<"AREA IS "<<n<<endl; 

t=Area(c,d);
cout<<"AREA IS "<<t<<endl; 

n=Area(c);
cout<<"AREA IS "<<n<<endl;

t=Area(c);
cout<<c<<endl;
cout<<d<<endl;

cout<<"AREA IS "<<t<<endl;

}