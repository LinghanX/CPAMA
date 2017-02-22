#include <stdio.h>

#define CUBE(x) ((x)*(x)*(x))
#define REMAINDER_BY_4(x) ((x)%4)
#define ONE_OR_OTHER(x,y) ((x)*(y)<100?1:0)

int main(){
    int x = 3, y = 30;
    printf("CUBE function:\n");

    printf("The CUBE macro returns: %d\n", CUBE(x));
    printf("The remainder macro returns: %d\n", REMAINDER_BY_4(x));
    printf("The one or other macro returns: %d\n", ONE_OR_OTHER(x, y));

    return 0;
}
