#include <iostream>
using namespace std;

void swapNums(int &x, int &y) {
    int z = x;
    x = y;
    y = z;
}

int crazyMath(int x, int y) {
    return x * y - x / y * 89 + 7 / 2;
}

int main() {
    int firstNum = 10;
    int secondNum = 20;

    cout << "Before swap: " << endl;
    cout << firstNum << " " << secondNum << endl;

    swapNums(firstNum, secondNum);

    cout << "After swap: " << endl;
    cout << firstNum << " " << secondNum << endl;

    int crazyMathOutput = crazyMath(1, 1);

    cout << "Crazy Math Output: " << crazyMathOutput << endl;

    return 0;
}
