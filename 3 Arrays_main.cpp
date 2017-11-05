#include <iostream>

int main() {
    /**
     * arrays is the structures of data that holds set of var in one place,
     * and sets certain var unique index
     */

    /**
     * there are two types of arrays
     * @1 static arrays
     * @2 dynamic arrays
     */

    int size = 10;

    // simple static array of int type
    int arr1[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};

    // simlpe dynamic array of int type
    int* arr2 = new int[10];

    /**
     * int arr1[size] -- ERROR
     * int* arr2 = new int[size] -- CORRECT
     */

    /**
     * to get var from index we do : arr[index],
     * where index some var that >= 0 and < arr.size()
     */

    /**
     * all work with arrays we do with loops
     */

    /**
     * simple entering mass from console
     * example of work arrays with loops
     */
    for (int i = 0; i < 10; i++){
        std::cin >> arr1[i];
        std::cin >> arr2[i];
    }

    /**
     * simple sorting algorithm
     */

    for(int i = 9; i>0; i--){
        for(int j=0 ; j<i-1; j++){
            if(arr1[j] > arr1[j+1]){
                std::swap(arr1[j], arr1[j+1]);
            }
        }
    }


    return 0;
}
