#include <iostream>
using namespace std;

int main() {
    string s = "codeforces";
    int n, count;
    cin >> n;
    cin.ignore();
    for (int i = 0; i < n; i++) {
        string d;
        getline(cin, d);
        count = s.length();
        for (int j = 0; j < s.length(); j++) {
            if(s[j] == d[j]) count--;
        }
        if (i == n - 1 ) cout << count;
        else cout << count << endl;
    }
    return 0;
}