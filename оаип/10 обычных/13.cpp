#include <iostream>
using namespace std; 

int main() 
{ 
 int a=100, b;
 float c=4.5, d;
 d = a/c; //Без потери точности
 cout<<"d= "<<d<<endl;
 b = a/c; //С потерей точности
 cout<<"b= "<<b<<endl;
  return 0;
}