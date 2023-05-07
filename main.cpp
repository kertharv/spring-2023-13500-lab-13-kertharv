/** 
* Spring 2023 - Lab 13
* Last name: Cataluna
* First name: Kert Harvey
* GitHub username: kertharv
* Instructor: Genady Maryash
* Recitation Instructor: Prof. Zamansky
*/

#include "funcs.h"
int main()
{

    std::cout << printRange(-10, 3) << "\n";
    std::cout << sumRange(1, 3) << "\n";

    int size = 10;
    int *arr = new int[size];
    arr[0] = 12;
    arr[1] = 17;
    arr[2] = -5;
    arr[3] = 3;
    arr[4] = 7;
    arr[5] = -15;
    arr[6] = 27;
    arr[7] = 5;
    arr[8] = 13;
    arr[9] = -21;
    int sum1 = sumArray(arr, size);
    std::cout << "Sum is " << sum1 << std::endl;

    delete[] arr;

    std::cout << isAlphanumeric("ABCD") << std::endl;

    std::cout << "--------------------------------------" << "\n";

    std::cout << nestedParens("((()))") << std::endl;

    return 0;
}