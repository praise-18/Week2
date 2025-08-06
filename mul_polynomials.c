#include <stdio.h>
int main() {
    int m, n;
    scanf("%d %d", &m, &n);
    int a[m], b[n], result[m+n-1];
    for (int i = 0; i < m; i++) scanf("%d", &a[i]);
    for (int i = 0; i < n; i++) scanf("%d", &b[i]);
    for (int i = 0; i < m+n-1; i++) result[i] = 0;

    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            result[i+j] += a[i] * b[j];

    for (int i = 0; i < m+n-1; i++)
        printf("%d ", result[i]);
    return 0;
}
