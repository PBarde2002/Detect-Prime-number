#include<iostream>
using namespace std;

int main()
{
    int number,i;
    cout<<"enter a number";
    cin>>number;
    for(i=2;i<number;i++)
    {
        if(number%i==0)
        {
            break;
        }
    }
    if(number==i)
    {
        cout<<"this is prime number";

    }
    else{
        cout<<"this is not prime number";

    }
}