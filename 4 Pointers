#include <iostream>

int main() {
    /**
     * pointer is the special type of var that holds not the
     * exact var but place in memory where var is placed
     */

    /**
     * how to use this shit???
     */

    int* a; // var of type int that holds empty place in memory
            // and this place have size of 8 bit, because of int

    int b = 5; // simple var that holds exact var in the memory

    a = &b; // now a points on the same place where the b is
            // we get the address of b var with operator &

    /**
     * now try to cout addresses of "a" and "b"
     */

    std::cout << a << ' ' << &b << std::endl;

    /**
     * and cout vars of "a" and "b"
     */

    std::cout << *a << ' ' << b << std::endl;

    /**
     * now try to change "b"
     */

    b = 7;

    /**
     * and let`s look what now "a" became
     */

    std::cout << *a << std::endl;

    /**
     * operator @new set the exact var inside the address in memory
     */

    int* num = new int(2);

    std::cout << *num << std::endl;

    /**
     * after calling the @new operator on pointer you can reassign var inside with @operator*
     */
    *num = 7;
    std::cout << *num << std::endl;

    /**
     * when you don`t need var anymore you can clear memory with @delete operator
     */

    delete num;

    /**
     * after that inside num is null pointer,
     * and if you want to use it again you must call @new operator again
     */

    /**
     * now let`s try to figure out, why dynamic arrays use @operator*
     * when you crate static array you use @operator[] to create mass
     * but without @operator* you create array in exact place in memory
     * with fixed size, but with @operator* you have just place in memory
     * and @new operator set the size of this place.
     * And this creates flexibility with this place in memory,
     * later in code you can call @new again and set bigger or smaller size
     * of array, you can`t do this with static array
     */

    int* mass = new int[10];
    delete mass;
    mass = new int[20];

    int array[20];
    //array = array[30] -- ERROR
    return 0;
}
