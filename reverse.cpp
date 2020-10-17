#include <iostream>
using namespace std;

int reverse(int x) {
    int remainder, reversed = 0;

    while (x != 0) {
        remainder = x % 10;
        reversed = reversed * 10 + remainder;
        x /= 10;
    }

    return reversed;
}

int main() {
    int x;
    cout << "Ingresa un numero: ";
    cin >> x;
    int a = reverse(x);
    cout << a <<endl;
    return 0;
}
