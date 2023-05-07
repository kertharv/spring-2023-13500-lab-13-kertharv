/** 
* Spring 2023 - Lab 13
* Last name: Cataluna
* First name: Kert Harvey
* GitHub username: kertharv
* Instructor: Genady Maryash
* Recitation Instructor: Prof. Zamansky
*/

#include "funcs.h"

std::string printRange(int left, int right)
{
    if(left < right)
    {
        return std::to_string(left) + " " + printRange(left + 1, right);
    }
    else
    {
        return std::to_string(left);
    }
}

int sumRange(int left, int right)
{
    if(left < right)
    {
        return left + sumRange(left + 1, right);
    }
    else
    {
        return left;
    }
}

int sumArray(int *arr, int size)
{
    int index = size - 1;
    if(index > 0){
        return *(arr + index) + sumArray(arr, size - 1);
    }else{
        return *(arr + index);
    }
}

bool isAlphanumeric(std::string s)
{
    if(s.length() > 0)
    {
        return std::isalnum(s[0]) && isAlphanumeric(s.substr(1));
    }
    else
    {
        return true;
    }
}

bool nestedParens(std::string s)
{
    if(s.length() > 0)
    {
        return (s[0] == '(' && s[s.length() - 1] == ')') && nestedParens(s.substr(1, s.length() - 2));
    }else{
        return true;
    }
}