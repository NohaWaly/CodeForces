
#include <iostream>
#include <string>
using namespace std;

int max(int w,int y) {
	if (w > y || w==y)
		return w;
	else
		return y;
}

int main()
{
	int w, y,x;
	string die[6] = { "1/6","1/3","1/2","2/3","5/6","1/1" }, roll;
	cin >> w >> y;
	x = max(w, y);
	roll = die[6 - x];
	cout << roll;
    return 0;
}

