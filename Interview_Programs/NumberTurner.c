#include <stdio.h>
int main() {
    int n, d;
    printf("Enter n : ");
    scanf("%d", &n);
    int z = 0, temp = n;
    while (temp > 0) {
        z++;
        temp /= 10;
    }
    printf("Enter d : ");
    scanf("%d", &d);
    if (d > z) d = z;
    for (int i = d; i >= 0; i--) {
        int split = 1;
        for (int p = 0; p < (z - i); p++) split *= 10;
        int first = n / split;   
        int last  = n % split;  
        int rev = 0;
        int x = first;
        while (x > 0) {
            rev = rev * 10 + (x % 10);
            x /= 10;
        }
        int ans = rev * split + last;
        printf("%d\n", ans);
    }
    return 0;
}
