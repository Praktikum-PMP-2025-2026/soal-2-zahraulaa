#include <stdio.h>

int count(int n) {
    if (n == 1) {
        return 0;
    }
    if (n%2 == 0) {
        return 1 + count(n/2);
    } 
    
    else if (n%3 == 0 && n>1) {
        return 1 + count((3*n)+1);
    }

    else {
       return 0;
    }
}

int main() {
    int T, n;
    scanf("%d", &T);

    for (int i = 0; i < T; i++) {
        scanf("%d", &n);
        printf("LANGKAH %d\n", count(n));
    }
    return 0;
}
