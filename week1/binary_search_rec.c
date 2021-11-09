#include <stdio.h>
int binary_search(int a[], int low, int high, int x){
    int mid;
    mid = (low + high) / 2;
    if (a[mid] == x)
        return mid;
    if (low <= high){
        if (a[mid] < x)
            return binary_search(a, mid + 1, high, x);
        if (a[mid] > x)
            return binary_search(a, low, mid - 1, x);
    }
    return -1;    
}

int main(){
    int n;
    printf("Enter no.of elements in the array\n");
    scanf("%d", &n);
    int a[n], key, pos, l, h;
    printf("Enter %d elements\n", n);
    for (int i =0; i < n; i++)
        scanf("%d", &a[i]);
    printf("Enter search element\n");
    scanf("%d", &key);
    l = 0;
    h = n - 1;
    pos = binary_search(a, l, h, key);
    if (pos == -1)
        printf("Element not found\n");
    else
        printf("Element found at position %d\n", pos + 1);
}
