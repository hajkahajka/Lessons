#include <iostream>

int main() {
    /**
     * there are one extra type of loops, that simplify work with arrays
     * it calls foreach loop
     */

    int array[5] = {1, 2, 3, 4, 5};

    std::cout << std::endl;
    std::cout << "---------\n";

    /**
     * if you don`t use & with i, loop creates copy of var into i and work with it
     */

    for(int i : array){
        std::cout << i << ' ';
    }

    std::cout << std::endl;
    std::cout << "---------\n";

    /**
     * if you use i with &, loop get exact var from array and work with it
     */

    for(int& i : array){
        i+= 2;
    }

    std::cout << std::endl;
    std::cout << "---------\n";

    for(int& i : array){
        std::cout << i << ' ';
    }
    return 0;
}
