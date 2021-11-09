#include <stdio.h>
int linear_search(int a[], int n, int x){
    n = n - 1;
    if (a[n] == x)
        return n;
        if (n >= 0)
            return linear_search(a, n, x);
            return -1;
}

int main(){
    int n;
    printf("Enter no.of elements in the array\n");
    scanf("%d", &n);
    int a[n], key, pos;
    printf("Enter %d elements\n", n);
    for (int i =0; i < n; i++)
        scanf("%d", &a[i]);
    printf("Enter search element\n");
    scanf("%d", &key);
    pos = linear_search(a, n, key);
    if (pos == -1)
        printf("Element not found\n");
    else
        printf("Element found at position %d\n", pos + 1);
}
