#include<iostream>
#define PI 3.1415

int a=2;
void all();

    class MYFAM
    {
        public:
           int b;
           void display()
           {
              std::cout<<"inside class"<<std::endl;
           }
    };



void all()
{ 
        
        std::cout<<"AREA OF CIRCLE IS  ";
        std::cout<<PI*a*a<<std::endl;
}


int main()
{
    MYFAM m;
    m.b=120;
    m.display();
    all();
    std::cout<<"AREA OF square IS ";
     std::cout<<m.b*m.b<<std::endl;

}

