#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int T, N, K, Q;
    cin >> T;
    while (T--) {
        cin >> N >> K >> Q;
        int signs[K+1], times[K + 1];
        signs[0] = 0;
        times[0] = 0;
        for (int i = 0; i < K; i++) {
            cin >> signs[i + 1];
        }
        for (int i = 0; i < K; i++) {
            cin >> times[i + 1];
        }
        for (int i = 0; i < Q; i++) {
            int q;
            cin >> q;
            int* lb = upper_bound(signs, signs + K + 1, q);
            int idx = std::distance(signs, lb) - 1;
            if (signs[idx] == q) {
                cout << times[idx] << " ";
                continue;
            }
            cout << ((long long) (q - signs[idx])) * (times[idx + 1] - times[idx]) / (signs[idx + 1] - signs[idx]) + times[idx] << " ";
        }
        cout << endl;
    }
}