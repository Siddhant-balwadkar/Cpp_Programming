#include<iostream>
using namespace std;


#pragma pack(1)
class Base
{
    public:
        int i,j; 
        int Addition(int A, int B)      //concrete
        {
            return A + B;
        }   
        virtual int Substraction(int A, int B) = 0;     //Abstract   
};

class Derived:public Base
{
    public:
        int x;
        int Substraction()

};

int main()
{
    Base *bp = new Derived();       // up casting
    
    return 0;
}