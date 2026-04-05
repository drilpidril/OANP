#include <iostream>
using namespace std;

int main()
{
    double x, y;
    
    cout << "x = ";
    cin >> x;
    cout << "y = ";
    cin >> y;
    
    if (x >= 0 && x <= 50 && y >= 0 && y <= 25)
    {
        
        if (x == 0 || x == 50 || y == 0 || y == 25)
        {
            cout << "НА ГРАНИЦЕ" << endl;
        } 
        else 
        {
            cout << "ДА" << endl;
        }
    }
    else
    {
        cout << "НЕТ" << endl;
    }
    
    return 0;
}