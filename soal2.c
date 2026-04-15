#include <stdio.h>

int count(int n) {
    if (n == 1) {
        return 0;
    }
    else{
        if (n%2 == 0) {
            return 1 + count(n/2);
        } 
    
        else {
            return 1 + count((3*n)+1);
        }
    }
}

int main() {
    int T;

    scanf("%d", &T) != 1;

    for (int i = 0; i < T; i++) {
        int n;
        int langkah = count(n);
        scanf("%d", &n);
        printf("LANGKAH %d\n", langkah);
    }
    return 0;
}
