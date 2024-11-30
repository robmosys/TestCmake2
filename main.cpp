//#include "main.h"

#include "sub_project1.h"
#include "sub_project2.h"
#include <stdio.h>

int main(int _ignore)
{
    printf("hello from main\n");
    sub_project2_print();
    sub_project1_print();
    return true;
}