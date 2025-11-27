#include <iostream>
using namespace std; 
int a=100, b=20; //глобальные переменные a и b
void f1(int a)//локальная переменная a
{
    a+=10;
    cout<<"f1:\t"<<a<<"\t"<<::a<<endl;
}
void f2 (int b)//локальная переменная b
{
    b*=2;
    cout<<"f2\t"<<b<<"\t"<<a<<endl;
}
int main()
{
    cout<<"main:\t"<<a<<"\t"<<b<<endl;
    f1(a); f2(b);
    cout<<"main:\t"<<a<<"\t"<<b<<endl;
    return 0;
}