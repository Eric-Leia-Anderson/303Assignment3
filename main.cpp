#include "palindrome.h"
#include "queueMoving.h"
#include "DataMap.h"
#include <string>

int main() {
	QueueMoving queueMoving;
	cout << "Moving rear element to front of queue. " << endl;
	queueMoving.move_to_rear();

	string word = "";
	Palindrome palindrome;

	cout << "Give me a word and I will check if it's a palindrome: \n";
	getline(cin, word);

	bool isIt = palindrome.isPalindrome(word, 0, word.size()-1);

	if (isIt) {
		cout << word << " is a palindrome. \n";
	}
	else {
		cout << word << " is NOT a palindrome. \n";
	}

	cout << endl;

	DataMap dataMap;

	dataMap.addElement("Nebraska", "Lincoln");
	dataMap.addElement("New York","Albany");
	dataMap.addElement("Ohio","Columbus");
	dataMap.addElement("California","Sacramento");
	dataMap.addElement("Massachusetts","Boston");
	dataMap.addElement("Texas","Austin");

	dataMap.print();

	dataMap.addElement("California","Los Angeles");

	cout << "I've fixed California's capital. \n\n";

	dataMap.print();

	cout << "Give me a state and I'll give you a capital: \n";
	string state = "";

	getline(cin, state);

	dataMap.findCapitalWithState(state);

}