#include <bits/stdc++.h>
#include <iostream>
#include <cmath>
using namespace std;
void func(float x, float &p, float&S)// Функция для вычисления

{
    p = 4*x;//вычисления периметра
    S = p*p;//вычисления площади
}

int main() 
{
	float x, p, S;// обьявление переменных
	cout << "Введите значение x: " << endl;
	cin >> x;//вывод значения x
	(p > S)? cout <<"p больше": cout <<"S больше";//сравнение p и S
	return 0;

}