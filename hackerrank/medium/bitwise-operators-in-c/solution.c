#include <stdio.h>

void calculate_the_maximum(int n, int k) {
    int maxAnd = 0, maxOr = 0, maxXor = 0;

    for (int a = 1; a <= n; a++) {
        for (int b = a + 1; b <= n; b++) {
            int andv = a & b;
            int orv  = a | b;
            int xorv = a ^ b;

            if (andv < k && andv > maxAnd) maxAnd = andv;
            if (orv  < k && orv  > maxOr)  maxOr  = orv;
            if (xorv < k && xorv > maxXor) maxXor = xorv;
        }
    }

    printf("%d\n%d\n%d\n", maxAnd, maxOr, maxXor);
}

int main() {
    int n, k;
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
    return 0;
}
