#include <stdio.h>

int main(void)
{
    int n1, n2, n3, n4, n5, n6, n7, n8, n9, n10, n11, n12, n13, n14, n15, n16;

    printf("Enter the numbers from 1 to 16 in any order:\n");
    scanf("%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d", &n1, &n2, &n3, &n4, &n5, &n6, &n7, &n8, &n9, &n10, &n11, &n12, &n13, &n14, &n15, &n16);

    printf("\n%d %d %d %d\n%d %d %d %d\n%d %d %d %d\n%d %d %d %d\n", n1, n2, n3, n4, n5, n6, n7, n8, n9, n10, n11, n12, n13, n14, n15, n16);

    printf("\nRow sum: %d\n", (n1 + n2 + n3 + n4));
    printf("Column sum: %d\n", (n1 + n5 + n9 + n13));
    printf("Rows sum: %d\n", (n1 + n6 + n11 + n16));

    return 0;
}