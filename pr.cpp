#include <iostream>
#include <Windows.h>
using namespace std;
int main() {
SetConsoleCP(1251);
SetConsoleOutputCP(1251);
int n;
cout << "Введіть значення n: ";
cin >> n;
int y = 1;
int i = 1;
int limit = 3 + n;
while (i <= limit) {
y *= i;
i++;
}
cout << "Результат обчислення (3 + " << n << ")! = " << y << endl;
return 0;
}