#include <stdio.h>
#include <stdlib.h>
#define M 100

void printArray(int A[], int start, int length)
{
    if(start >= length)
        return;
    printf("%d, " ,A[start]);
    printArray(A, start + 1, length);
}




int main()
{
    int N, i;
    int A[M];
    
    printf("kac element olsun: ");
    scanf("%d", &N);
    printf("Elementleri yazin: ");
    for(i=0; i<N; i++)
    {
        scanf("%d" ,&A[i]);
    }
    printf("elements in the array: ");
    printArray(A, 0, N);

    return 0;
}