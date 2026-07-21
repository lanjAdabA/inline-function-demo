#include <stdio.h>
int addition(int, int); // Function prototype
inline int addition (int a, int b)
{
    return a + b;
}

int main(){
    int result = addition(5, 3);
    printf("%d", result);
    return 0;
}