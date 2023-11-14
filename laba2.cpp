#include <iostream>
using namespace std;
int main()
{
    setlocale(0, "");
    int a = 0; 
    int b = 1;

cout << a << " " << b << " ";
for (int i = 2; i < 10; ++i) 
{
    int c = a + b;
   cout << c << " ";
    a = b;
    b = c;
}
cout << endl;
return 0;
}
