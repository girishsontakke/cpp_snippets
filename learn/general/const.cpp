#include <iostream>
using namespace std;
#define X 10 // defining constants by macros

void const_ptr_demo()
{

    char a = 'A', b = 'B';
    char *const ptr = &a;
    printf("Value pointed to by ptr: %c\n", *ptr);
    printf("Address ptr is pointing to: %d\n\n", ptr);

    //ptr = &b; illegal statement (assignment of read-only variable ptr)

    // changing the value at the address ptr is pointing to
    *ptr = b;
    printf("Value pointed to by ptr: %c\n", *ptr);
    printf("Address ptr is pointing to: %d\n", ptr);
}

void const_char_demo()
{
    const int x = 5; //symbolic constant
    enum
    {
        y = 100
    }; //enum constant

    char a = 'A', b = 'B';
    const char *ptr = &a;

    // *ptr = b; illegal statement (assignment of read-only location *ptr);

    // ptr can be changed
    printf("value pointed to by ptr: %c\n", *ptr);
    ptr = &b;
    printf("value pointed to by ptr: %c\n", *ptr);
}

void const_char_const_ptr_demo()
{

    char a = 'A', b = 'B';
    const char *const ptr = &a;

    printf("Value pointed to by ptr: %c\n", *ptr);
    printf("Address ptr is pointing to: %d\n\n", ptr);

    // ptr = &b; illegal statement (assignment of read-only variable ptr)
    // *ptr = b; illegal statement (assignment of read-only location *ptr)
}

int main()
{
    const_char_const_ptr_demo();
}