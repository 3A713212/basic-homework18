#include <stdio.h>
int main() {
    int num = 0, i = 0,n;
    printf("輸入一個整數：");
    scanf("%d", &num);
    int array[10]={};
    while(num) {
        array[num % 10]=array[num % 10]+1;  
        num /= 10;
    }
    for (i = 0; i < 10; i++) {
        if (array[i] != 0)
            printf ("%d有%d個\n", i, array[i]);} 
    return 0;
}

