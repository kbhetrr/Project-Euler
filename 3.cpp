#include <bits/stdc++.h>

using namespace std;

long long int target = 600851475143;

int main() {
	for (int i = sqrt(target); i >= 1; i--) {
		if (target % i == 0) {
			cout << i;
			break;
		}
	}
	return 0;
}
