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
int AddLargest2EvenNumbers ( int x, int y, int z);




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
    
    
    int x, y, z;

    cout << "Enter 3 number to us ZeroSmall function"<< endl;
    cin >>  x >> y >> z;
    ZeroSmall (x,y,z);
    cout << "After ZeroSmall function is " << x << " "<< y << " " << z<< endl;
    
    
    
    
    
    cout << "Enter 3 number to use AddLargest2Evennumber function"<< endl;
    cin >>  x>> y>> z;
    cout << "After AddLargest2Evennumber is " <<AddLargest2EvenNumbers (x,y,z)<<endl;




    
    


    
    
    
    
    
    
    return 0;
}

// Summation
int Summation ( int num1, int num2)
{
    return (num1 + num2);
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
    else
    {
        return false;
    }
}




//ZeroSmall
void ZeroSmall (int& a, int& b, int& c)
{
    if (a<b && a<c)
        a=0;
    else if (b<c)
        b=0;
    else
        c=0;
}






//AddLargest2EvenNumbers
int AddLargest2EvenNumbers ( int x, int y, int z)
{
   if( !isEven(x))
   {
       x +=1;
   };
    if( !isEven(y))
    {
        y +=1;

    };
    if( !isEven(z))
    {
        z +=1;
    };
    
    ZeroSmall(x, y, z);
    
    if (x<y && x<z)
        return Summation(y,z);
    else if (y<z)
        return  Summation(x,z);
    else
        return Summation(x,y);
    

   
}
