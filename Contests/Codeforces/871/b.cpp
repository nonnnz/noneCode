#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int t;
        cin >> t;
        int count = 0, _max = -9999;;
        for (int j = 0; j < t; j++) {
            int ele;
            cin >> ele;
            if(ele == 1) count = 0;
            else count++;
            if(count > _max) _max = count;
        }
        if (i == n - 1 ) cout << _max;
        else cout << _max << endl;
    }
    return 0;
}