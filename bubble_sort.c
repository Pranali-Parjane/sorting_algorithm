#include <stdio.h>
int main()
 {
     int n, i, j, temp;

printf("Enter the number of array elements: ");
scanf("%d", &n);
int a[n], b[n]; 

printf("Enter array elements:\n");
for (i = 0; i < n; i++) {
    scanf("%d", &a[i]);
    b[i] = a[i]; 
}
for (i = 0; i < n - 1; i++) {
    printf("Pass %d: ", i + 1);
    for (j = 0; j < n - i - 1; j++) {
        if (b[j] > b[j + 1]) {
            temp = b[j];
            b[j] = b[j + 1];
            b[j + 1] = temp;
        }
    }
    for (j = 0; j < n; j++) {
        printf("%d ", b[j]);
}
printf("\n");
}
printf("The sorted array is:\n");
for (i = 0; i < n; i++) {
    printf("%d ", b[i]); 
}
printf("\n");
return 0;

}
