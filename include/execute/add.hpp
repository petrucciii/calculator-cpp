#include <iostream>
#include "../math/add.h"

using namespace std;


int doAdd() {
    int x, y;

    cout << "Type the first number: ";
    cin >> x; 

    cout << "Type the second number: ";
    cin >> y;

    return Add(x, y);
}