#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);
    int N, Q;
    cin >> N >> Q;
    int A[N + 1]; A[0] = 0;
    for (int i = 1; i <= N; i++)
        cin >> A[i];

    // Process
    for (int i = 1; i <= N; i++) {
        A[i] += A[i - 1];
    }

    // Control : Output
    for (int i = 0; i < Q; i++) {
        int q; cin >> q;
        cout << distance(A, upper_bound(A, A + (N + 1), q)) << endl;
    }
    return 0;
} 