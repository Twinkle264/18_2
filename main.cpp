#include <iostream>

using namespace std;

int countWays(int n) {
    if (n < 0) {
        return 0;
    } else if (n == 0 || n == 1) {
        return 1;
    } else {
        return countWays(n - 1) + countWays(n - 2) + countWays(n - 3);
    }
}

int main() {
    int n = 0;
    cout << "\tInput step number: ";
    cin >> n;

    cout << endl;
    cout << "\tNumber of ways is " << countWays(n);

    return 0;
}
