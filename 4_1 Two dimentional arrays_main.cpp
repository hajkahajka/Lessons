#include <iostream>

int main() {

    /**
     * Two dimensional array is the array of pointers.
     * And each pointer in the array is the another array
     * so with this you have matrix this looks like this
     *  * * * * * -- 5 pointers
     *
     *  * * * * *
     *  * * * * *
     *  * * * * *
     *  * * * * *
     *
     *  and each of 5 pointers points on another array of size 4
     *
     *  now you create mass of type @int* so you have mass of pointers
     *  that`s why you use @new int*[5]
     *
     *  after that you create in each @int* another array
     *  using arr1[i] = new int[4] in the loop, because you want assign
     *  all elements in mass with other arrays
     */

    int* *arr1 = new int*[5];
    for(int i=0 ;i<5; i++){
        arr1[i] = new int[4];
    }

    /**
     * Now if you want to get some var from the matrix
     * you get number of row and column and with this way you get var from array with @operator[]
     * this way arr1[1][2], you get var on the 1`st row and 2`nd column.
     * Don`t forget that you start count from zero
     */

    /**
     * Simple enter matrix from console
     */

    for(int i=0 ;i<5; i++) {
        for (int j = 0; j < 4; j++) {
            std::cin >> arr1[i][j];
        }
    }
    return 0;
}
