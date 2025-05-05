#include <iostream>
#include <limits>
#include <vector>

using namespace std;

int main() {
    long n;
    cin >> n;

    vector<long> list;

    for (long i = 0; i < n; i++) {
        long new_num;
        cin >> new_num;

        list.push_back(new_num);
    }

    long long moves = 0;

    for (long i = 0; i < list.size(); i++) {
        if (i > 0) {
            if (list[i] < list[i - 1]) {
                moves += list[i - 1] - list[i];
                list[i] = list[i - 1];
            }
        }
    }

    cout << moves << endl;

    return 0;
}