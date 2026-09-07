#include <iostream>

using namespace std;

void solve() {
    int X, Y;
    cin >> X >> Y;
    
    if (X >= Y) {
        cout << 0 << "\n";
        return;
    }
    
    int diff = Y - X;
    int games_needed = (diff + 7) / 8;
    
    cout << games_needed << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int T;
    cin >> T;
    while (T--) {
        solve();
    }
    
    return 0;
}
