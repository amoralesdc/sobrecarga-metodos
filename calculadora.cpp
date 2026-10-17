#include <iostream>
using namespace std;

class Calculadora {
public:
    int sumar(int a, int b) {
        return a + b;
    }

    int sumar(int a, int b, int c) {
        return a + b + c;
    }

    double sumar(double a, double b) {
        return a + b;
    }
};

int main() {
    Calculadora calc;

    cout << "Dos enteros: 5 + 3 = " << calc.sumar(5, 3) << endl;
    cout << "Tres enteros: 5 + 3 + 2 = " << calc.sumar(5, 3, 2) << endl;
    cout << "Dos decimales: 2.5 + 3.7 = " << calc.sumar(2.5, 3.7) << endl;

    return 0;
}
