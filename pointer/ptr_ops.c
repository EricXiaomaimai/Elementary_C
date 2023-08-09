#include <stdio.h>

int main(void)
{
    int arr[6] = { 100, 200, 300, 400, 500, 600};
    int * ptr1, *ptr2, *ptr3, *ptr4;
    ptr1 = arr;
    ptr2 = &arr[5];
    ptr3 = ptr1 + 2;
    ptr4 = ptr2 - 4;
    
    printf("ptr1 = %p, *ptr1 = %d\n", ptr1, *ptr1);
    printf("ptr2 = %p, *ptr2 = %d\n", ptr2, *ptr2);
    printf("ptr3 = %p, *ptr3 = %d\n", ptr3, *ptr3);
    printf("ptr4 = %p, *ptr4 = %d\n", ptr4, *ptr4);

    return 0;
}