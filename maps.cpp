//
// Created by Siddarth Kumar on 31/03/24.
//
#include <map>
#include <iostream>

using namespace std;

void mapExample() {
    cout << "Map Example" << endl;
    map<string,string> someRandomMap;
    someRandomMap["message"] = "This is a value from message key of a map";
    cout << someRandomMap["message"] << "\n";
}