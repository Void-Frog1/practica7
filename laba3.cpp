#include <iostream>
using namespace std;
int main()
{
    setlocale(0, "");
    cout << "Введите число: ";
    int number;
    cin >> number;
    cout << "Делители числа " << number << ": ";
    for (int i = 1; i <= number; ++i) {
        if (number % i == 0) {
            cout << i << " ";
        }
    }
    cout << endl;
return 0;
}
