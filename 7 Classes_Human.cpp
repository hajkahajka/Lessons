
#include "Human.h"

/**
 * Class cpp file all meat are here
 */

// constructor use the var you enter and init this class fields with age(age)
Human::Human(int age, const string &name) : age(age), name(name) {

}

// constructor without parameters
Human::Human() {

}

// meat of declared mathod
/**
 * inside all methods of your class you can get and set the fields of your class
 */
void Human::sayHello() {
    cout << "Hello my name is: " << name << " and i`m " << age << " old" << endl;
}
