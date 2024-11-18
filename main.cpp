#include <iostream>
#include <cmath>
using namespace std;

double piformel(int iter) {
    if (iter == 1) {
        return 1;
    }

    // iter war im nicht rekursiven Ansatz die jetzige Iteration, aber in der Rekursion die übrig gebliebenen Iterationen
    return piformel(iter - 1) + pow(-1, (iter - 1)) / (2.0 * (iter - 1) + 1);
}

int main() {
    int iter = 0;

    cout << "How many iterations to approximate pi do you want?" << endl;
    cin >> iter;

    double ergebnis = piformel(iter) * 4;
    cout << "The result after " << iter << " iterations is: " << ergebnis << endl;

    return 0;
}

