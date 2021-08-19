#include <iostream>
#include "../math/multiply.h"

using namespace std;


int doMultiply() {
    int x, y;

    cout << "Type the first number: ";
    cin >> x; 

    cout << "Type the second number: ";
    cin >> y;

    return Multiply(x, y);
}