#include <stdio.h>

int main() {

int meses[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

for(int i = 0; i < 12; i++) {
    printf("Month : %2d\n", i+1); 

    for (int j=1; j<=meses[i]; j++){
        printf("     Day:  %2d\n", j);
    }
}
return 0;
}