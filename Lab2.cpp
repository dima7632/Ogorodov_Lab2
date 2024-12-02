#include <iostream>
#include <Windows.h>
#include <cmath> 

using namespace std;

unsigned long long factorial(int n) {
if (n < 0) {
cout << "Факторіал не визначений для від'ємних чисел!" << endl;
return 0;
}
if (n == 0 || n == 1) {
return 1;
}
return n * factorial(n - 1);
}

int main() {
int number;

cout << "Введіть число: ";
cin >> number;

if (number > 64) {
cout << "Факторіал числа " << number << " дорівнює ∞ " << endl;
} else {
unsigned long long result = factorial(number);
if (result != 0) {
cout << "Факторіал числа " << number << " дорівнює " << result << endl;
}
}

return 0;
}
