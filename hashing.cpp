#include<bits/stdc++.h>

using namespace std;
const int M = 1e9 + 7;
const int N = 1e7 + 10;


int hsh[N];

int main() {




	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

#ifndef ONLINE_JUDGE

	freopen("input.txt", "r", stdin);

	freopen("output.txt", "w", stdout);

#endif



	int n;
	cin >> n;
	int a[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		hsh[a[i]]++;

	}

	int t;
	cin >> t;

	while (t--) {
		int x;
		cin >> x;
		cout << hsh[x] << endl;

	}


	return 0;
}
