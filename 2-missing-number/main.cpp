#include <bits/stdc++.h>

using namespace std;

int main() {
    long n;
    cin >> n;

    vector<long> list;

    for (int i = 0; i < n - 1; i++) {
        long input;
        cin >> input;
        list.push_back(input); 
    }

    sort(list.begin(), list.end());

    for (int i = 0; i < n - 1; i++) {
        if (list[i] != i + 1) {
            cout << i + 1 << endl;
            break;
        }

        if (i == n - 2) {
            cout << n << endl;
        }
    }

    return 0;
}