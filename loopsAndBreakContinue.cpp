#include <iostream>
#include <string>
using namespace std;

int main() {
    int x = 5;
    string output = "outputting";

    while (x < 10) {
        x++;
        if (x == 8) {
            continue;
        }
        cout << output << endl;
    }

    for (int i = 0; i < 5; i++) {
        if (i == 3) {
            continue;
        }
        cout << i << endl;
    }

    return 0;
}
