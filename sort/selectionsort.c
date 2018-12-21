#include <stdio.h>
#include <conio.h>


void swap(int *a, int *b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

void selection_sort(int a[], int n){
    int i, min, j;
    for(i = 0; i < n-1; i++)
    {
        min = i;
        for(j = i+1; j < n; j++)
        {
            if(a[min] > a[j]) min = j;
        }
        swap(&a[i], &a[min]);
    }
}

void printarr(int a[], int n)
{
    int i;
    for(i = 0; i < n; i++)
    {
        printf("    %d", a[i]);
    }

}

int main()
{
    int n, a[10];
    printf("Nhap so phan tu cua mang: ");
    scanf("%d",&n);
    for(int i = 0; i < n; i++)
    {
        printf("\n a[%d] la ", i+1);
        scanf("%d", &a[i]);
    }
    printf("\n Sort:    ");
    selection_sort(a,n);
    printarr(a,n);
    return 0;
}
