#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    int poly1[n], poly2[n];
    for (int i = 0; i < n; i++) scanf("%d", &poly1[i]);
    for (int i = 0; i < n; i++) scanf("%d", &poly2[i]);
    for (int i = 0; i < n; i++)
        printf("%d ", poly1[i] + poly2[i]);
    return 0;
}
