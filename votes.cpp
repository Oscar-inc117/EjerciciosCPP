#include <iostream>
using namespace std;

int main() {
    int votes[52] = {
        4,1,1,2,4,1,2,3,4,
        4,4,1,3,3,2,4,1,2,
        1,4,3,3,4,1,2,4,3,
        2,4,4,3,1,2,4,4,3,
        1,1,3,4,4,4,2,1,2,
        4,2,4,2,1,3,4
        };

    int j=0,s=0,p=0,b=0;

    for (int x: votes) {
        if (x == 1) 
            j += 1;
        else if (x == 2)
            s += 1;
        else if (x == 3)
            p += 1;
        else if (x == 4)
            b += 1;
    }

    if ((j > s) & (j > p) & (j > b))
        cout << "El ganador es J. Sanchez" <<endl;
    else if ((s > j) & (s > p) & (s > b))
        cout << "El ganador es S. Bermudez" <<endl;
    else if ((p > j) & (p > s) & (p > b))
        cout << "El ganador es P. Solis" <<endl;
    else if ((b > j) & (b > s) & (b > p))
        cout << "El ganador es B. Hernandez" <<endl;
    return 0;
}