#include <iostream>
#include <string>

using namespace std;

void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;

    for (int i = 0; i < n; i++) {
        if (s[i] == 'A') {
            cout << 'T';
        } else if (s[i] == 'T') {
            cout << 'A';
        } else if (s[i] == 'C') {
            cout << 'G';
        } else if (s[i] == 'G') {
            cout << 'C';
        }
    }
    cout << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
