//
// Created by Siddarth Kumar on 31/03/24.
//
#include <iostream>
#include <vector>
#include <string>
#include <map>
#include "sum.h"

using namespace std;
using namespace customMath;

int main() {
    vector<int> numbersToAdd;
    vector<string> messageToDisplay;
    map<string,string> someRandomMap;

    numbersToAdd.push_back(2);
    numbersToAdd.push_back(4);

    messageToDisplay.emplace_back("Hello ");
    messageToDisplay.emplace_back("World");

    someRandomMap["message"] = "This is a value from message key of a map";

    cout << messageToDisplay.at(0) << messageToDisplay.at(1)  << "\n";

    cout << sum(numbersToAdd[0],numbersToAdd[1]) << "\n";

    cout << someRandomMap["message"];

    return 0;
}