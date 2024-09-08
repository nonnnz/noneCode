#include <iostream>
using namespace std;

bool can_make_pile(int n, int m) {
    if (n > m) {
        return false;
    }
    if (n == m) {
        return true;
    }
    if (m % 2 == 0) {
        return can_make_pile(n, m / 2);
    }
    if (m % 2 == 1) {
        return can_make_pile(n, m - 1) || can_make_pile(n, m + 1);
    }
    return false;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        if (can_make_pile(n, m)) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
    return 0;
}
