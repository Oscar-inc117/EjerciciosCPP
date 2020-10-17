#include <iostream>
using namespace std;

int fib(int n) {
    if (n == 0)
        return 0;
    else if (n == 1)
        return 1;
    else 
        return fib(n-1) + fib(n-2);
}

int main() {
    int i = 0;
    
    while (true){
        if (fib(i) >= 10000) {
            cout << fib(i) <<endl;
            break;
        }
        i++;
    }

    return 0;
}