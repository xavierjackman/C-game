#include <iostream>
#include <cstdio>
#include <cstdlib>

using namespace std;

int main(int args, char* argc[])
{
int celsius;
cout << "Enter tempurture in Celsius:" ;
cin >> celsius;  

int factor;
factor = 212 - 32;

int fahrenheit;
fahrenheit = factor * celsius/100 + 32;

cout << "Fahrenheit value is: ";
cout << fahrenheit << endl;

return 0;
}

