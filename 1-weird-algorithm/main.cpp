#include <iostream>
#include <cstring>
#include <cmath>
#include <algorithm>
#include <climits>
#include <stack>
#include <queue>
#include <vector>
#include <set>
#include <map>
#include <list>
#include <cassert>
#include <unordered_map>


using namespace std;

int main() {
    long long n;
    cin >> n;
    do {
	cout << n << " ";
	if (n == 1) {
	    continue;
	} else if (n % 2 == 1) {
	    n = (n * 3) + 1;
	} else {
	   n = n / 2;
	}

	if (n == 1) {
	    cout << n << endl;
	    break;
	}
    } while (n != 1);
}
