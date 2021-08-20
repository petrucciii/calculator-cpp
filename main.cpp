#include <iostream>
#include <process.h>
#include "math.h"

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


    if (optionSelected == 1) cout << EX_ADD;
    else if (optionSelected == 2) cout << EX_SUBTRACT;
    else if (optionSelected == 3) cout << EX_MULTIPLY;
    else if (optionSelected == 4) cout << EX_DIVIDE;
    else if (optionSelected == 5) cout << EX_PI;
    else cout << "YOU MUST SELECT ONE OF THE OPTIONS!";

    cout << "\n";
    system("pause");

    return 0;
}
