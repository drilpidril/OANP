#include <iostream> /* Написать программу которая вычисляет значение выражения 10sinx|x^4-x^5| */
#include <cmath>    // для sin и fabs

using namespace std;

int main()
{
    double x;
    
    // Ввод переменной x
    cout << "Введите x: ";
    cin >> x;
    
    // Вычисление sin(x)
    double sin_x = sin(x);
    
    // Вычисление x^4 (x в 4 степени)
    double x4 = x * x * x * x;
    
    // Вычисление x^5 (x в 5 степени) 
    double x5 = x * x * x * x * x;
    
    // Вычисление модуля |x^4 - x^5|
    double mod = x4 - x5;
    if (mod < 0) {
        mod = -mod;  // если отрицательное, меняем знак
    }
    
    // Вычисление конечного результата
    double result = 10 * sin_x * mod;
    
    // Вывод результата
    cout << "Результат: " << result << endl;
    
    return 0;
}