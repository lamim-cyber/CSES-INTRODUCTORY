#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    long long total = (1LL * n * (n + 1)) / 2;

    if (total % 2 != 0) {
        cout << "NO" << endl;
        return 0;
    }

    vector<int> first, second;
    long long target = total / 2;
    for (int i = n; i >= 1; i--) {
        if (i <= target) {
            first.push_back(i);
            target -= i;
        } else {
            second.push_back(i);
        }
    }
    cout << "YES" << endl;
    cout << first.size() << endl;
    for (size_t i = 0; i < first.size(); ++i) {
        cout << first[i];
        if (i != first.size() - 1) cout << " ";
    }
    cout << endl;
    cout << second.size() << endl;
    for (size_t i = 0; i < second.size(); ++i) {
        cout << second[i];
        if (i != second.size() - 1) cout << " ";
    }
    cout << endl;

    return 0;
}
