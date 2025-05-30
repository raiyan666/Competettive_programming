#include<bits/stdc++.h>
using namespace std;
int product(int x) 
{
	set<int>con;
	int lim = sqrt(x) + 1;
	for (int i = 0; i <= lim; i++) {
		if (x % i == 0) {
			con.insert(i);
			con.insert(x / i);
		}
	}
	int cnt = 0;
	for (iterator :: itr = con.begin(); itr != con.end(); itr++)cnt++;
	if (cnt == 3)cout << "NO\n";
	else cout << "YES\n";

}
int main()
{
	int t;
	cin >> t;
	while (t--) {
		int x;
		cin >> x;
		product(x);
	}
	/*cout << "ra\n";*/ 
	cin.get();

}