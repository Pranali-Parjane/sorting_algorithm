#include <stdio.h>

int main() {
    int a[10], n, i, j, k, temp;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter the array elements:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
for (i = 1; i < n; i++)
 {  
        for (j = 0; j < i; j++)
         {  
            if (a[j] > a[i])
             {  
                temp = a[i];  
for (k = i; k > j; k--)  
 {  
     a[k] = a[k - 1];  
                }
 a[j] = temp;  
                break;
            }
        }
        printf("Pass %d:\n",i);
        for(k=0;k<n;k++)
        {
            printf("%d\t",a[k]);
        }
        printf("\n");
    }
printf("Sorted array: ");
    for (i = 0; i < n; i++)
     {
        printf("%d ", a[i]);
    }
    printf("\n");

    return 0;
}
  
