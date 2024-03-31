//
// Created by Siddarth Kumar on 31/03/24.
//
#include <iostream>
#include <vector>
#include <string>
#include "sum.h"

using namespace std;
using namespace customMath;

int main() {
    vector<int> numbersToAdd;
    vector<string> messageToDisplay;

    numbersToAdd.push_back(2);
    numbersToAdd.push_back(4);

    messageToDisplay.emplace_back("Hello ");
    messageToDisplay.emplace_back("World");

    cout << messageToDisplay.at(0) << messageToDisplay.at(1)  << "\n";

    cout << sum(numbersToAdd[0],numbersToAdd[1]);

    return 0;
}