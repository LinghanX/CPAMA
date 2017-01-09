#include <stdio.h>

int main()
{
    printf("%6d, %4d\n", 86, 1040);
    printf("%12.5e\n", 30.253);
    printf("%.4f\n", 83.162);
    printf("%-6.2g", .0000009979);

    return 0;
}

/*
 * format could be displayed as `%m.pX` or `%-m.pX`;
 * Note here the `-` sign indicates left alignment,
 * `m` specifies the minimum number of characters to print.
 * `p` is the precision, and X means the conversion specifier.
 */
