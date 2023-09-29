#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    double A, B, C, D;
    scanf("%lf %lf %lf %lf", &A, &B, &C, &D);

    double result1 = B*log(A);
    double result2 = D*log(C);

    if (result1 > result2)
        printf("YES\n");
    else
        printf("NO\n");
    return 0;
}