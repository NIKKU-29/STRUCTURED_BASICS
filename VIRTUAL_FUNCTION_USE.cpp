#include<bits/stdc++.h>
using namespace std;

class student{

    public:

    virtual void display()
    {
        cout<<"THIS IS STUDET DATA";
    }


};

class school : public student{

    public:

    void display()
    {
        cout<<"ALL DATA BELONGS TO US";
    }

};

int main()
{
    student * pointer;
    student st;
    school  sc;

    
    pointer=&sc;

    st.display();
    cout<<endl;
    sc.display();
    cout<<endl;
    pointer->display();


return 0;
   
}