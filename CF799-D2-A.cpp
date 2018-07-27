#include <iostream>
#include<algorithm>
using namespace std;


int main()
{
	int n, t, k, d, turns;
	cin >> n >> t >> k >> d;
	turns = (n +k-1)/ k; //round up
	int oven1 = 0, oven2 =d;

	for (int i = 0;i < turns;i++) {
		if (oven1 <= oven2) {
			oven1 += t;
		}
		else {
			oven2 += t;
		}
	}
	if (max(oven1, oven2) < turns*t) {
		cout << "YES";
	}
	else {
		cout << "NO";
	}
    return 0;
}
