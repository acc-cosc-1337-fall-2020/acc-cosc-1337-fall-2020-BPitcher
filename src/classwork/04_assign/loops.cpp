//cpp
#include "loops.h"
#include <iostream>
using namespace std;

int factorial(int num)
{
    int factorial;
    int i;
    do
    {
        factorial *=i;
        cout<<"\nAt i = " + i;
        cout<<"your factorial is: " + factorial;
        i++;
    } while (i<=num);

    /*string choice;
    cout<<"\nWould you like your factorial loop to keep going? (y\n)";
    cin>>choice;
    if(choice == "y")
    {
        num++;
    }*/
}