//
// Created by Siddarth Kumar on 31/03/24.
//

#include <string>
#include <iostream>

using namespace std;

struct humanStruct{
    string name;
    int age;
    string location;
};

void structsExample() {
    cout << "Struct Example" << endl;

    humanStruct person = humanStruct{
            "sid", 99, "Earth"
    };

    cout << "person's name is -> "
         << person.name
         << " person's age is -> "
         << person.age
         << " person's location is "
         << person.location
         << endl;
}