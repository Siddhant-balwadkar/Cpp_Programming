#include<iostream>
using namespace std;

class Arithematic
{
    public:
    int iNo1;
    int iNo2;

    Arithematic()
    {
        iNo1 = 0;
        iNo2 = 0;    
    }

    Arithematic(int A,int B)
    {
        iNo1 = A;
        iNo2 = B;
    }

    int Addition()
    {
        int iAns = 0;
        iAns = iNo1 + iNo2;
        return iAns;

    }
       int Subtraction()
    {
        int iAns = 0;
        iAns = iNo1 - iNo2;
        return iAns;
    }
};

int main()
{
    Arithematic aobj1(11,10);

    int iRet = 0;

    iRet = aobj1.Addition();
    cout<<"Adiition is : "<<iRet<<"\n";
    
      iRet = aobj1.Subtraction();
    cout<<"Subtraction is : "<<iRet<<"\n";
    

    return 0;
}