#include <iostream>

int main() {

    /**
     * there are two ways of controlling loops and if`s
     * @1 with comparison operators (< > == != <= >=)
     * @2 with bool variable
     */

    /**
     * @1 comparison operators
     */

    std::cout << std::endl;
    std::cout << "----------------------------------------------\n";

    /**
     * if - conditional operator
     */
    int a = -5;
    if (a < 0){
        std::cout << "Pizdabol";
    }
    else{
        std::cout << "Vseodno Pizdabol";
    }

    std::cout << std::endl;
    std::cout << "----------------------------------------------\n";

    /**
     * for - loop that iterates n times
     */
    for (int i = 1; i < 7000; i *= 2){
        std::cout << i << ' ';
    }

    std::cout << std::endl;
    std::cout << "----------------------------------------------\n";

    /**
     * while - loop that iterates while condition is true
     */
    while (a != 0){
        a++;
        std::cout << a << ' ';
    }

    std::cout << std::endl;
    std::cout << "----------------------------------------------\n";

    /**
     * do while - loop that works exactly as 'while' but with one guaranteed iteration
     */

    char d = 'a';
    do {
        std::cout << d << ' ';
        d++;
    }while(d < 'z');

    std::cout << std::endl;
    std::cout << "----------------------------------------------\n";

    /**
     * @2 bool variable
     */

    bool condition = true;

    if(condition){
        std::cout << "Yey";
    }
    else{
        std::cout << "Fuck";
    }

    std::cout << std::endl;
    std::cout << "----------------------------------------------\n";

    for(int i=0; condition; i++){
        if(i==5){
            condition = false;
        }
        std::cout << i << ' ';
    }

    std::cout << std::endl;
    std::cout << "----------------------------------------------\n";
    condition = true;

    int num = 3;
    while (condition){
        if(num > 10000){
            condition = false;
        }
        std::cout << num << ' ';
        num *= 3;
    }

    std::cout << std::endl;
    std::cout << "----------------------------------------------\n";
    condition = true;

    char character = '+';
    do{
        std::cout << character << ' ';
        character+=4;
        if(character>'z'){
            condition = false;
        }
    }while(condition);

    std::cout << std::endl;
    std::cout << "----------------------------------------------\n";

    /**
     * there are two operators of controlling amount of iterations
     * @break -- breaks the entire loop
     * @continue -- skip one iteration
     */

    for(int i=0; i<5; i++){
        if(i == 3){
            break;
        }
        std::cout << i << " ";
    }

    std::cout << std::endl;
    std::cout << "----------------------------------------------\n";

    for(int i=0 ;i<5; i++){
        if(i == 3){
            continue;
        }
        std::cout << i << ' ';
    }

    std::cout << std::endl;
    std::cout << "----------------------------------------------\n";
    return 0;
}
