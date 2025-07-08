#include <stdio.h>
struct A {
    int var;
};
int main() {
    struct A a = {30}; 
	struct A *ptr; // Creating a pointer to  the structure
	ptr = &a; // Assigning the address of person1 to the pointer
 
 
    printf("%d", ptr->var); // Accessing structure members using the pointer
    printf("\n%d", (*ptr).var); // Accessing structure members 
    return 0;
}


