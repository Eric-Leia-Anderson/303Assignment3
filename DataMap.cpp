#include "DataMap.h"

/* Default constructor. */
DataMap::DataMap() {

}
 /* This iterates throught the map and prints out each state and capital. */
void DataMap::print() {
	cout << "States and Capitals \n";
	for (map<string, string>::iterator iter = stateDataMap.begin(); iter != stateDataMap.end(); iter++) {
		cout << (*iter).first << ": " << (*iter).second << "\n";
	}
	cout << endl;
}

/* This iterates through the map and finds the capital if it exists, otherwise it prints out that it doesn't exist. */
void DataMap::findCapitalWithState(string state) {
	map<string,string>::iterator iter = stateDataMap.find(state);
	if (iter != stateDataMap.end()) {
		cout << "The capital of " << state << " is: " << (*iter).second << "\n";
	}
	else {
		cout << "No state and capital. \n";
	}
	cout << endl;
}

/* This will insert a new pair into the map and if it already exists then it will update it. */
void DataMap::addElement(string capital, string state) {
	stateDataMap.insert_or_assign(capital, state);
}