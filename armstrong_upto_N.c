#include <stdio.h>

int main() {
    int i, n, s, r, x;

    printf("Armstrong numbers between 1 to 1000 are:\n");

    for (i = 1; i <= 1000; i++) {
        n = i;  
        x = i;  
        s = 0;  

        while (n != 0) {
            r = n % 10;       
            s = s + (r * r * r); 
            n = n / 10;       
        }
        
        if (x == s) { 
            printf("%d ", x);
        }
    }

    return 0;
}

