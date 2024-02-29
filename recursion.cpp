#include <iostream>
using namespace std;

int sum(int k) {
    if (k > 0) {
        return k + sum(k - 1);
    } else {
        return 0;
    }
}

int main() {
    int x = sum(5);
    cout << x << endl;

    return 0;
}
