#include <stdio.h>
int main() {
    int x = 5;
    char y = 'b';
    printf("5,b\n");
    scanf("%d,%c",&x,&y);
    printf("x+y =%d,%c,%d\n",x,y,x+y);
    return 0;
}