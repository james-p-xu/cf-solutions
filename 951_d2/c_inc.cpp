#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int T;
    long long N;
    cin >> T;
    while (T--) {
        cin >> N;
        int bets[N];
        long long total = 0;
        int max = 0;
        for (int i = 0; i < N; i++) {
            cin >> bets[i];
            total += bets[i];
            if (bets[i] > max) {
                max = bets[i];
            }
        }
        if (total < (N + 1) * N) {
            cout << -1 << endl;
            continue;
        }
        long long cap = max * total + 1;
        for (int i = 0; i < N; i++) {
            cout << (cap - 1)/ bets[i] + 1 << " ";
        }
        cout << endl;
    }
}
