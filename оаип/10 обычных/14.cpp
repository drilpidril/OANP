#include <iostream>
using namespace std; 

int main() 
{ 
 int a=1500000000;
 a=(a*10)/10; // Неверный результат
 cout<<"a="<<a<<endl;
 int b=1500000000;
 b=(static_cast<double>(b)*10)/10;//верный результат
 cout<<"b="<<b<<endl;
  return 0;
}