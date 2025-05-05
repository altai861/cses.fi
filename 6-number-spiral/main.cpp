#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;

long findCorrespondingSpiralNumber(long y, long x) {
    long nthSpiral = max(y, x);
    bool startFromUp = (nthSpiral % 2 == 0) ? true : false;

    long spiralBigNumber = nthSpiral * nthSpiral;
    long spiralStartingDigit = (spiralBigNumber) - (nthSpiral + nthSpiral - 2);

    long result = 0;
    // Find the position of this y, x position
    if (nthSpiral == y) {
        if (startFromUp) {
            result = spiralBigNumber - x + 1;
        } else {
            result = spiralStartingDigit + x - 1;
        }
    } else {
        if (startFromUp) {
            result = spiralStartingDigit + y - 1;
        } else {
            result = spiralBigNumber - y + 1;
        }
    }
    return result;
}


int main() {
    long n;
    cin >> n;

    long testResults[n];

    for (long i = 0; i < n; i++) {
        long y, x;
        cin >> y >> x;

        testResults[i] = findCorrespondingSpiralNumber(y, x);
    }

    for (long i = 0; i < n; i++) {
        cout << testResults[i] << endl;
    }

    return 0;
}