#include <iostream>

int main(){
    int a = 7;
    int b = 7; // we want to "link" 'b' with 'a' so that when we change 'b', 'a' will change as-well
    b = 8; // 'a' won't change
    std::cout << a << "\n"; //prints 7

    int& c = a; // c is a reference to a
    c = 8; // changes a to 8
    // a and c have the same address
    std::cout << a << "\n"; //prints 8
    std::cout << &a << "\n"; // this two lines print the same address 
    std::cout << &c << "\n"; // this two lines print the same address
    return 0;
}

// let's look at the swap function as we know it:

void swap(int* a, int* b)
{
    int temp = *a;
    // ...
}

// instead, we can know write swap like this:

void swap(int& a, int& b)
{
    int temp = a;
    a = b;
    b = temp;
}


typedef struct A
{
    int a;
    int g;
    int r;
    int d;
    int c;
}A;

