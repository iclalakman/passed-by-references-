#include <stdio.h>
#include <stdlib.h>

int sumArray( int * ,int );

int main(){
    int numbers;
    int *pointer;
    int total,i;
    printf("Enter number of elements: ");
    scanf("%d",&numbers);

    pointer = malloc(numbers*sizeof(int));
    if ( pointer == NULL ){
        printf("Failed to allocate memory");
        exit(1);
    }
    for (i=0; i<numbers; i++){
        printf("Enter input[%d]: ",i);
        scanf("%d",&pointer[i]);
    }

    total=sumArray(pointer, numbers);

    printf("Sum is %d",total);
    free(pointer);
    return 0;
}

int sumArray (int *pointer , int number){
    int sum = 0;
    int i ;
    for (i=0; i<number; i++){
        sum += *(pointer+i);
    }
    return sum;

}