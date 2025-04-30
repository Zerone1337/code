#include <stdio.h>
int main()
{
int x=10;
char ch[] ="A";
void *gp;
gp = &x;
//gp = &ch;
printf("\n Generic pointer points to the integer value = %d ", *(int*)gp);

return 0;
}