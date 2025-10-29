#include<iostream>
using namespace std;


#pragma pack(1)
class Base
{
    public:
        int i,j; 
        int Addition(int A, int B)      //concrete
        {
            return A+B;
        }   
        virtual int Substraction(int A, int B) = 0;     //Abstract   
};

class Derived:public Base
{
    public:
        int x;
        int Substraction(int A, int B)          //concrete
        {
            return A-B;
        }
        int Multiplication(int A, int B)          //concrete
        {
            return A*B;
        }

};

int main()
{
    Base *bp = new Derived();       // up casting
    
    int iRet = 0;

    iRet = bp->Addition(10,11);         //21
    cout<<iRet<<"\n";

    iRet = bp->Substraction(11,10);     //1
    cout<<iRet<<"\n";
    //iRet = bp->Multiplication(10,11);
    
    return 0;
}