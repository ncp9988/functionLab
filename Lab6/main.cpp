//
//  main.cpp
//  Lab6
//
//  Created by Chau Pham on 10/20/22.
//

#include <iostream>
#include <cmath>
#include <cctype>
#include <iomanip>


using namespace std;

int Summation ( int num1, int num2);
double raisePower (double n, int p);
bool isEven ( int a);
void ZeroSmall (int& a, int& b, int& c);



int main() {
    
    int num1, num2;

    cout << "Enter 2 number to find sum:"<< endl;
    cin >> num1 >> num2;
    cout << "The summation of "<< num1 <<" and "<< num2 << " is " << Summation(num1, num2)<< endl;
    
    double n;
    int p=2 ;
    cout << "Enter a number to find its square:"<< endl;
    cin >> n;
    cout <<"The square of "<< n << " is "<< raisePower(n , p)<< endl;
    
    
    int a;
    cout << "Enter a number to find if it is an even number"<< endl;
    cin >> a ;
    cout << a << " is an even number: "<< isEven(a)<< endl;
    
    
    
    
    int number1 = 9, number2= 10, number3= 2;
    ZeroSmall ( number1, number2, number3);
    cout << number1 << " "<< number2 << " " << number3<< endl;

    
    


    
    
    
    
    
    
    return 0;
}

// Summation
int Summation ( int num1, int num2)
    {
    int sum;
        return sum = num1 + num2;
    }


// RaisePower
double raisePower( double n, int p)
{
    for ( int p =1;p<=1;  p++)
    {
        n *=n;
    }
    return n;
}



//isEven
bool isEven ( int a)
{
    if (a % 2 == 0)
        return true;
    return false;
}

void ZeroSmall (int& a, int& b, int& c)
{
    if (a<b && a<c)
        a=0;
    else if (b<c)
        b=0;
    else
        c=0;
}


