#include <stdio.h>

int count(int n) {
    // printf("%d\n", n);
    if (n == 1) {
        return 0;
    }
    if (n%2 == 0) {
        return 1 + count(n/2);
    } 
    
    else {
        return 1 + count((3*n)+1);
    }
}

int main() {
    int T;

    scanf("%d", &T);

    for (int i = 0; i < T; i++) {
        int n;
        scanf("%d", &n);
        int langkah = count(n);
        printf("LANGKAH %d\n", langkah);
    }
    return 0;
}
