/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include "BST.hpp"
#include "myBST.hpp"

int main()
{
    BST new_tree;
    new_tree.Insert(5);
    new_tree.Insert(2);
    new_tree.Insert(9);
    new_tree.PrintTree();

    return 0;
}
