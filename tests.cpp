/** 
* Spring 2023 - Lab 13
* Last name: Cataluna
* First name: Kert Harvey
* GitHub username: kertharv
* Instructor: Genady Maryash
* Recitation Instructor: Prof. Zamansky
*/

#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "funcs.h"

TEST_CASE("printRange function")
{
    CHECK(printRange(-10, 4) == "-10 -9 -8 -7 -6 -5 -4 -3 -2 -1 0 1 2 3 4");
    CHECK(printRange(-5, 3) == "-5 -4 -3 -2 -1 0 1 2 3");
    CHECK(printRange(6, 15) == "6 7 8 9 10 11 12 13 14 15");
    CHECK(printRange(4, 5) == "4 5");
}

TEST_CASE("sumRange function")
{
    CHECK(sumRange(1, 3) == 6);
    CHECK(sumRange(-2, 10) == 52);
    CHECK(sumRange(90, 120) == 3255);
    CHECK(sumRange(0, 100) == 5050);
    CHECK(sumRange(-100, 100) == 0);
}

TEST_CASE("sumArray function")
{
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

    CHECK(sumArray(arr, size) == 43);
    CHECK(sumArray(arr, 5) == 34);
    CHECK(sumArray(arr, 6) == 19);
    CHECK(sumArray(arr, 1) == 12);
    CHECK(sumArray(arr, 9) == 64);
    delete[] arr;
}

TEST_CASE("isAlphanumeric function")
{
    CHECK(isAlphanumeric("ABCD") == true);
    CHECK(isAlphanumeric("Abcd1234xyz") == true);
    CHECK(isAlphanumeric("KLMN 8-7-6") == false);
    CHECK(isAlphanumeric("") == true);
    CHECK(isAlphanumeric(" PPENSADJKO") == false);
}

TEST_CASE("nestedParens function")
{
    CHECK(nestedParens("((()))") == true);
    CHECK(nestedParens("()") == true);
    CHECK(nestedParens("") == true);
    CHECK(nestedParens("(((") == false);
    CHECK(nestedParens("(()") == false);
    CHECK(nestedParens(")(") == false);
    CHECK(nestedParens("a(b)c") == false);
}