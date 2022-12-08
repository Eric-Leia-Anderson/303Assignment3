#ifndef DATA_MAP_H
#define DATA_MAP_H
#include <iostream>
#include <string>
#include <map>
using namespace std;

class DataMap {
private:
	map<string, string> stateDataMap;
public:
	DataMap();
	void print();
	void findCapitalWithState(string state);
	void addElement(string capital, string state);
};

#endif
