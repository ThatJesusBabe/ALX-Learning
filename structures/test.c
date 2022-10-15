#include <stdio.h>

int main()
{
int a[5] = {1, 3, 6, 8};
int* ptr;
ptr = &a;
printf("%d", a[0]);
printf("%d", (ptr)[0]);

return(0);
}
