#include <stdio.h>

int transformasi(int i){
    if(i <= 1){
        return 1;
    }
    return i * transformasi(i - 1);
}

int hitung() {
    int T, n;
    scanf("%d %d", &T, &n);

    for (int i = n; i <= 1; i++) {
        if (n % 2 == 0) {
            n/2;
        } else if (n % 3 == 0 && n>1) {
            ((3*n)+1);
        } 
    }
    
    int main() {
    int count = 0; 
    int cek[1000] = {0}; 
    count(transformasi);
           cek[n] = 1; 
        n = hitung(n); 
        count++; 
    } 

    printf("LANGKAH %d \n", count);
    return 0;

}
