#include <stdio.h>
int bubbleSort(int [], int );
int writeArray(int [], int );
int swap(int *, int *);
int main(){
    int a[10];
    int i,n;

    printf("Enter no.of elements\n");
    scanf("%d", &n);

    printf("Enter %d elements\n", n);
    for (i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }

    bubbleSort(a, n);
    }

int writeArray(int a[],int n){
    int i;
    for (i = 0; i < n; i++){
        printf("%d\t", a[i]);
    }
    }
int swap(int *a, int *b){
    int t;
    t = *a;
    *a = *b;
    *b = t;
}

int bubbleSort(int a[], int n){
    int i, j;
    int swapped = 0;
    for (i = 0; i < n - 1; i++){
        swapped = 0;
        for (j = 0; j < n - i - 1; j++){
            if ( a[j] > a[j + 1]){
                swap(&a[j], &a[j + 1]);
                swapped = 1;
            }

        }
    if (swapped == 0)
        break;
    printf(" \n after round = %d\n", i + 1);
    writeArray(a, n);
    printf("\n");

    }
}
