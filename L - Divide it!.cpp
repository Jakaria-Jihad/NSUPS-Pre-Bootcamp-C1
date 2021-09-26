#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<cmath>
#include<ctime>
#include<iostream>
#include<algorithm>
#include<map>
#include<stack>
#include<queue>
#include<vector>
#include<set>
#include<string>
#define ll long long
#define dd double
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	ll t;
	cin >> t;
	while (t--) {
		ll n; cin >> n;
		ll sum = 0;
		ll flag = 0;
		while (n != 1) {
			if (n % 2 == 0) {
				n = n / 2;
				sum++;
			}
			else if(n % 3 == 0 && n % 5 == 0) {
				n = min(((n / 3) * 2),((n / 5) * 4));
				sum++;
			}
			else if (n % 3 == 0) {
				n = n / 3 * 2;
				sum++;
			}
			else if (n % 5 == 0) {
				n = n / 5 * 4;
				sum++;
			}
			else {
				flag = 1;
				cout << "-1" << endl;
				break;
			}
		}
		if (flag == 0) {
			cout << sum << endl;
		}
	}
}
