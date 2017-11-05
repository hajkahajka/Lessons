#include <iostream>

/**
 * let write some func
 * @return void
 */

void print(){
    std::cout << "Hello" << std::endl;
}
/**
 * @param int a
 * @param int b
 * @return a*b
 */
int multiply(int a, int b){
    return a*b;
}

void change(int& a){
    a+=2;
}

void otherChange(int a){
    a+=2;
}

void changeThing(int& a){
    a += 10;
}

void changeThing(std::string& a){
    a += "mama";
}

int main() {
    /**
     * Functions are used for several reasons
     * @1 main purpose is for prevent copy/paste in the code
     * @2 is for pushing out some unite functional that has it`s own purpose
     * and logical complicity
     * @3 Reduce complexity
     * @4 Introduce an intermediate, understandable abstraction
     * @5 Improve portability
     */

    /**
     * Function work with the way it work in math
     * it get some var as parameters and return some counted value
     * but in programming you musn`t return something, and musn`t get something
     * Function that don`t return value call @void function
     */

    /**
     * after you write func you can call it from main()
     */

    print();

    std::cout << multiply(3, 4) << std::endl;

    int num = multiply(2, 7);

    std::cout << num << std::endl;

    /**
     * If you pass as parameter for example int& a
     * with @operator&, you will change exact val
     * witch you pass from main, if you don`t use
     * @operator& in the func will be created
     * copy of var that you passed
     */

    int a = 3;
    int b = 3;
    std::cout << a << " " << b << std::endl;
    change(a);
    otherChange(b);
    std::cout << a << " " << b << std::endl;

    /**
     * Function overloading
     * two ways to distinguish functions
     * @1 Function signature - is complex of parameters and return type of function
     * @2 Function name
     *
     * if only one of this things is unique you can distinguish the function
     *
     * So you can have two or more functions with the same name but different signature (Function overloading)
     * and two or more functions with same signature and different names
     */

    int overNum = 4;
    std::string line = "Fuck ";

    changeThing(overNum);
    changeThing(line);

    std::cout << overNum << " " << line << std::endl;


    return 0;
}
