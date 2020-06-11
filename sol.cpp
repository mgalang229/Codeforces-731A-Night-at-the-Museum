#include <bits/stdc++.h>

using namespace std;

void decode() {
	string s;
	cin >> s;
	int t = 'a';
	int ans = 0, m, m2;
	for(int i = 0; i < (int)s.size(); ++i) {
		m = max(t, (int)s[i]);
		m2 = min(t, (int)s[i]);
		ans += min(26 - (m - m2), abs(m - m2));
		t = s[i];
	}
	cout << ans << "\n";
}
int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	decode();
	return 0;
}
