#include <iostream> /* Написать прогрмму показывающую разницу между матем. минусом и лог. отрицанием для разных типов данных */
using namespace std;
int main()
{
int x = 3, y = 0;
bool f = false, v = true;
cout << - x << "\t" << ! x << endl;
cout << - y << "\t" << ! y << endl;
cout << f << "\t" << ! f << endl;
cout << v << "\t" << ! v << endl;
return 0;
}