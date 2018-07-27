
#include <string>
#include <iostream>
#include <Vector>
using namespace std;

int main()
{
	string word;
	vector<char> letter;
	int counter=0;
	getline(cin, word);
	for (int i = 0;i < word.length();i++) {
		if (97 <= word[i] && 122 >= word[i]) {
			letter.push_back(word[i]);
		}
	}

		// Pick all elements one by one
		for (int i = 0; i<letter.size(); i++)
		{
			int j;
			for (j = 0; j<i; j++)
				if (letter[i] == letter[j])
					break;
			if (i == j)
				counter++;
		}

		cout << counter;
    return 0;
}

