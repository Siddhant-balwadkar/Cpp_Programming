#include<iostream>
using namespace std;

class Demo
{
    public:
    //Overloading by changing number of parameters
    //fun@2ii
    void fun(int i, int j)        // fun(11,21)
    {}
    //fun@3ii
    void fun(int i, int j, int k)  // fun(11,21,51)
    {}
    
    // Overloading by changing squence of parameters
    // gun@2id
    void gun(int i,double d)      // gun(10,10.5)
    {}
    // gun@2di
    void gun(double d, int i)     //gun(10.5,10)
    {}

    //Overloading by changing datatype of parameters
    //sun@2cc
    void sun(char ch1, char ch2)
    {}
    //sun@2ff
    void sun(float f1, float f2)
    {}

    /* 
    // We cant Overloadby changing return type
    // run@2ii
    int run(int i, int j)
    {}
    // run@2ii
    float run(int i, int j)
    {}
    */
};

int main()
{
    cout<<"Size of void"\n
    return 0;
}