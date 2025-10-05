#include<iostream>
using namespace std;

int main()
{
    int lenght = 0;
    int *Arr = NULL;

    cout<<"Enter no of elements : \n";
    cin>>lenght;

    //Step 1 : Allocate thr memory
    Arr = new int [lenght];
    if (Arr == NULL)
    {
        cout<<"Unable to allocate the memory\n";
    }
    else
    {
        cout<<"Memory gets allocated\n";
    }
    
    //Step 2: Use the memory

    //Step 3: Deallocae the memory
    delete [] Arr;

    return 0;
}