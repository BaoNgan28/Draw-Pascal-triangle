#include <stdio.h>

void space (int dong){
    for(int i = 0; i < dong; i++){
        for(int j = 1; j < dong-i; j++){
            printf(" ");
        }
        for(int j = 0; j <= i; j++){
        	printf("* ");
		}
        printf("\n");
    }
}

int main ()
{
    int dong, cot;
    printf("Nhap dong: ");
    scanf("%d", &dong);
    space(dong);
    return 0;
}