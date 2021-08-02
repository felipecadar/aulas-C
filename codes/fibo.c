#include <stdio.h>
#include <stdlib.h>
//N: 1 2 3 4 5 6 7
//F: 0 1 1 2 3 5 8 ...

int main() {

    int n;
    printf("N: ");
    scanf("%i", &n);

    int t1 = 0;
    int t2 = 1;

    if(n >= 1){
        printf("%i\n", t1);
    }

    if(n >= 2){
        printf("%i\n", t2);
    }
    
    if(n >= 3){
        int done = 2;

        while (done < n)
        {
            // printf("t1: %i, t2: %i\n", t1, t2);
            int new = t1 + t2;
            t1 = t2;
            t2 = new;

            done = done + 1;

            printf("%i\n", new);

            //    t1 t2
            // t1 t2 new
            // 0  1  1   2  3  5  8

        }

    }


}