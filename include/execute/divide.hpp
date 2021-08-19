#include <iostream>
#include "../math/divide.h"

using namespace std;


int doDivide() {
    int x, y;

    cout << "Type the first number: ";
    cin >> x; 

    cout << "Type the second number: ";
    cin >> y;

    if (y == 0) {
        cout << "YOU CAN'T DIVIDE A NUMBER BY 0!";
    }

    return Divide(x, y);
}