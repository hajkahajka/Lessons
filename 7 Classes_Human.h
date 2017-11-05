#ifndef INC_7_CLASSES_HUMAN_H
#define INC_7_CLASSES_HUMAN_H

#include <iostream>

using namespace std;

// class declaration
class Human {
public: // this shit will be explained later
    //class fields
    int age;
    string name;

    // Constructor without parameters
    Human();

    // class constructor with parameters
    Human(int age, const string &name);

    // class method (declaration only)
    void sayHello();
};


#endif //INC_7_CLASSES_HUMAN_H
