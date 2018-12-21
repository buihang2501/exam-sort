#include <stdio.h>
#include <conio.h>

void insertion_sort(int a[], int n)
{
    int i, key, j;
    for(i = 1; i < n; i++)
    {
        key = a[i];
        j = i - 1;
        while(j >= 0 && a[j] > key)
        {
            a[j+1] = a[j];
            j = j-1;
        }
        a[j+1] = key;
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
    insertion_sort(a,n);
    printarr(a,n);
    return 0;
}
