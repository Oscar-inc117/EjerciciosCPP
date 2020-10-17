#include <iostream>
using namespace std;

int main() {
    int x, side1=0, side2=0, side3=0, side4=0, side5=0, side6=0;
    srand(time(0));

    for (int i = 60; i > 0; i--) {
        x = rand() % 6 + 1;

        if (x == 1)
            side1 += 1;
        else if (x == 2)
            side2 += 1;
        else if (x == 3)
            side3 += 1;
        else if (x == 4)
            side4 += 1;
        else if (x == 5)
            side5 += 1;
        else if (x == 6)
            side6 += 1;
    }

    cout << "Numero de veces del lado 1: " << side1 <<endl;
    cout << "Numero de veces del lado 2: " << side2 <<endl;
    cout << "Numero de veces del lado 3: " << side3 <<endl;
    cout << "Numero de veces del lado 4: " << side4 <<endl;
    cout << "Numero de veces del lado 5: " << side5 <<endl;
    cout << "Numero de veces del lado 6: " << side6 <<endl;

    return 0;
}