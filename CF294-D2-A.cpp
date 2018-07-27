
#include <iostream>

using namespace std;


int main()
{
	int wireNum, killedBirds, result,position,num;
	cin >> wireNum;
	int *birdArr = new int[wireNum];
	for (int i = 1;i <= wireNum;i++) {
		cin >> birdArr[i];
	}
	cin >> killedBirds;
	for (int i = 0;i < killedBirds;i++) {
		cin >> position>>num;
		result = birdArr[position] - num;
		if (position + 1 <= wireNum && position - 1 > 0) {
			birdArr[position + 1] += result; //down
			birdArr[position - 1] += (num - 1); //up
			birdArr[position] = 0;
		}
		else if(position + 1 > wireNum)
		{
			birdArr[position - 1] += (num - 1);
			birdArr[position] = 0;
		}
		else if (position - 1 <= 0) {
			birdArr[position + 1] += result;
			birdArr[position] = 0;
		}
	}
	for (int i = 1;i <= wireNum;i++) {
		cout << birdArr[i] << endl;
	}
    return 0;
}

