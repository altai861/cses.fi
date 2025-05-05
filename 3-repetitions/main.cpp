#include <iostream>
#include <vector>
#include <limits>

using namespace std;

int main() {
    string seq;
    cin >> seq;

    long globalMax = 1; // INT_MIN, LONG_MIN are in limits.
    long localSeq = 1;
    
    for (long i = 0; i < seq.length(); i++) {
        if (i > 0) {
            if (seq[i] == seq[i - 1]) {
                localSeq += 1;
            } else {
                localSeq = 1;
            }

            if (localSeq > globalMax) {
                globalMax = localSeq;
            }
        }
    }

    cout << globalMax << endl;

    return 0;
}