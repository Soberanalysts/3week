//백트래킹 : 불필요한 탐색 최소화(가지치기)

#include<bits/stdc++.h>
using namespace std;
int n, temp, ret, cnt;
vector<int> v;
const int mod = 11;



void go(int idx, int sum) {
	if (ret == 10)  return; 			//Mod 11 은 10이 최대값인걸 활용하여 백트래킹
	if (idx == n) {
		ret = max(ret, sum % mod);
		cnt++;
		return;
	}
	go(idx + 1, sum + v[idx]);
	go(idx + 1, sum);
}
int main() {
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> temp;
		v.push_back(temp);
	}
	go(0, 0);
	cout << ret << "\n";
	cout << cnt << "\n";
	return 0;
}
