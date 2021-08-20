#include <iostream>

#include "include/execute/add.hpp"
#include "include/execute/subtract.hpp"
#include "include/execute/multiply.hpp"
#include "include/execute/divide.hpp"
#include "include/execute/PI.hpp"

using namespace std;

int main() {
    int optionSelected;

    cout << "1. Add\n";
    cout << "2. Subtract\n";
    cout << "3. Multiply\n";
    cout << "4. Divide\n";
    cout << "5. PI\n";

    cout << "What do you want to do?(1/2/3/4/5) ";
    cin >> optionSelected;


    if (optionSelected == 1) cout << doAdd();
    else if (optionSelected == 2) cout << doSubtract();
    else if (optionSelected == 3) cout << doMultiply();
    else if (optionSelected == 4) cout << doDivide();
    else if (optionSelected == 5) cout << doPI();
    else cout << "YOU MUST SELECT ONE OF THE OPTIONS!";

    cout << "\n";
    system("pause");

    return 0;
}
