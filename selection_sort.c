#include<stdio.h>
void selectionsort(int[],int);
int main(){
    int a[20],i,n;
    printf("Enter the size of list: ");
    scanf("%d",&n);
    printf("Enter %d element values: ",n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    selectionsort(a,n);
    printf("sorted array: ");
    for(i=0;i<n;i++){
        printf("%3d",a[i]);

    }
    return 0;
}
void selectionsort(int a[],int n){
    int i,j,temp,min;
    for(i = 0;i<n;i++){
        min = i;
        for(j = i + 1;j<n;j++){
            if(a[j]<a[min])
                min = j;
        }
        temp = a[i];
        a[i] = a[min];
        a[min] = temp;
    }
}
