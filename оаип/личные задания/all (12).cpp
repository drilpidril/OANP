/*разобрать функцию f(n), которая для заданного натурального числа n находит значение sqrt(n)+n. Вычислить с её помощью значение выражения*/
#include <iostream> // для cout
#include <cmath>    // для sqrt

using namespace std;

// функция f(n) по заданию
double f(int n) {
    // sqrt(n) + n как в условии
    double result = sqrt(n) + n;
    return result; // возвращаем ответ
}

int main() {
    // первое слагаемое (n=6)
    double term1 = f(6) / 2.0;
    // второе слагаемое (n=13)
    double term2 = f(13) / 2.0;
    // третье слагаемое (n=21)
    double term3 = f(21) / 2.0;

    // складываем все части
    double result = term1 + term2 + term3;

    // настраиваем вывод (4 знака после точки)
    cout.precision(4);
    cout << fixed;
    // показываем результат
    cout << "Результат выражения: " << result << endl;

    return 0; // конец программы
}