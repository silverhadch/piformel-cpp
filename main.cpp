#include <iostream>
#include <cmath>
using namespace std;

double piformel(int iter) {
   
    if (iter == 1) {
        return 1;
    }
    
    //iter war im nicht rekursiven Ansatz die jetzige iter aber in rekursion übrige iter
    return piformel(iter - 1) + pow(-1, (iter - 1)) / (2.0 * (iter - 1) + 1);
}

int main()
{
    
    double ergebnis = piformel(100) * 4;
    
    cout << ergebnis;

    return 0;
}

