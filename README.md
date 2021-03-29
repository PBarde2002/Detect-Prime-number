# Detect-Prime-number
#include<iostream>
    
 using namespace std;

int main()
{ 

    int number,i;
    
    cout<<"enter a number";
    
    cin>>number; 
    
    for(i=2;i<number;i++)/*Initialize with i=2 beacause the prime number starts from the 2/*
    
    {
        if(number%i==0)/*If the entered number is divisible by any number less than it then the if loop breaks/*
        {
            break;
        }
    }
    if(number==i)/*if entered number is divisible by itself then it is a prime number/*
    {
        cout<<"this is prime number";

    }
    else{
        cout<<"this is not prime number";

    }
}
