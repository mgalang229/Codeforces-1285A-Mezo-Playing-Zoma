#include <bits/stdc++.h>

using namespace std;

const int mxN = 1e5;
char a[mxN];

void decode() {
	int n;
	cin >> n;
	for(int i = 0; i < n; ++i) {
		cin >> a[i];
	}
	int l = 0, r = 0;
	for(int i = 0; i < n; ++i) {
		if(a[i] == 'L') l++;
		else r++;
	}
	cout << r - (-l) + 1 << "\n";
}
int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	decode();
	return 0;
}
