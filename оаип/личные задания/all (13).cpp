#include <iostream>
using namespace std;

int main()
{
    double A, B;
    
    cout << "Введите первое число: ";
    cin >> A;
    cout << "Введите второе число: ";
    cin >> B;
    
    double cubeA = A * A * A;
    double cubeB = B * B * B;
    double sum = cubeA + cubeB;
    double average = sum / 2.0;
    
    cout << "Среднее арифметическое кубов: " << average << endl;
    
    return 0;
}