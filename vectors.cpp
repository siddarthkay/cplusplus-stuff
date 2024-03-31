//
// Created by Siddarth Kumar on 31/03/24.
//

#include <iostream>
#include <vector>
#include <string>

using namespace std;

void vectorExample() {

    cout << "Vector Example" << endl;

    vector<int> numbersToAdd;
    vector<string> messageToDisplay;

    numbersToAdd.push_back(44);
    numbersToAdd.push_back(55);

    messageToDisplay.emplace_back("Hakuna ");
    messageToDisplay.emplace_back("Matata!");


    cout << messageToDisplay.at(0) << messageToDisplay.at(1)  << endl;

    cout <<numbersToAdd[0]+numbersToAdd[1] << endl;

}
