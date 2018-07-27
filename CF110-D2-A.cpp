

#include <iostream>
#include <string>

using namespace std;

int main()
{
	string number;
	int counter=0;
	bool flag=false;
	cin >> number;
	for (int i = 0;i < number.length();i++) {
		if (number[i] == '4' || number[i] == '7') {
			flag = true;
			counter++;
		}
	}

	if (flag == true && (counter==4 ||counter==7)) {
		cout << "YES";
	}
	else {
		cout << "NO";
	}
    return 0;
}

