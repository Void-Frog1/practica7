#include <iostream>
using namespace std;
int main()
{
    setlocale(0, "");
    cout << "Введите число: ";
    int inputNumber;
    cin >> inputNumber;
    int sum = 0;
    int product = 1;
    int tempNumber = inputNumber;
    while (tempNumber != 0) {
        int digit = tempNumber % 10;
        sum += digit;
        product *= digit;

        tempNumber /= 10;
    }
    cout << "Сумма цифр: " << sum << std::endl;
    cout << "Произведение цифр: " << product << std::endl;
return 0;
}
