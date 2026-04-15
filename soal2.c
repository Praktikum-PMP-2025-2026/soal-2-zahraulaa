#include <stdio.h>

int transformasi(int i){

    if(i <= 1){
        return 1;
    }
    return i * transformasi(i - 1);
}

int main() {
    int T, n;
    scanf("%d %d", &T, &n);

    for (int i = n; i <= 1; i++) {
        if (n % 2 == 0) {
            n/2;
        } else if (n % 3 == 0 && n>1) {
            ((3*n)+1);
        } 
    }
   
    printf("LANGKAH %d \n", n);

    return 0;

}
