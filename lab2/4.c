
// Wap in c to print truth table showing the implication.
#include <stdio.h>

int main() 
{
    int p, q;
    printf("Truth Table - Implication\n");
    printf("+--------------------+\n");
    printf("|  p  |  q  |  p -> q|\n");
    printf("|-----|-----|--------|\n");

    for (p = 0; p <= 1; p++) {
    for (q = 0; q <= 1; q++) {
    printf("|  %d  |  %d  |    %d   |\n", p, q, !(p && !q));
    }
}
    printf("+--------------------+\n");
return 0;
}
