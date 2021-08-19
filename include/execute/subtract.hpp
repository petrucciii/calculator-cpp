#include <iostream>
#include "../math/subtract.h"

using namespace std;


int doSubtract() {
    int x, y;

    cout << "Type the first number: ";
    cin >> x; 

    cout << "Type the second number: ";
    cin >> y;

    return Subtract(x, y);
}