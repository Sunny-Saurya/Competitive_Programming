#include <iostream>
using namespace std;

int fun1(int x, int y) {
    if (x == 0)
        return y;
    else
        return fun1(x - 1, x + y);
}

int main() {
    int x = 3, y = 4;
    cout << fun1(x, y);
    return 0;
}