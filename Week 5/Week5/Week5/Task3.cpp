#include <iostream>
#include <string>

using namespace std;


//Attempt has been made to remove all the vowels from the words entered
//Doesnt currently work

int main() {
	string Words = "";
	cout << "Enter some words ";
	cin >> Words;

	int len = Words.size();

	for (int i = 0; i < len; i++) {
		if (Words[i] == 'a' || Words[i] == 'e' || Words[i] == 'i' || Words[i] == 'o' || Words[i] == 'u' || Words[i] == 'A' || Words[i] == 'E' || Words[i] == 'I' || Words[i] == 'O' || Words[i] == 'U') {
			Words.erase(Words[i]);
		}
	}

	cout << Words;

}