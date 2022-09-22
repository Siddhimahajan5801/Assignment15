#include <stdio.h>
void read_n_reverse(int size, int *a){
   int i,temp;

   printf("The elements of the array is : \n");
   for (i=0; i<size; i++)
   printf("%d  ", a[i]);

   printf("\nThe elements in the reverse order is : \n");
   for (i=0; i<size/2; i++){
         temp=a[i];
         a[i]=a[size-1-i];
         a[size-1-i]=temp;
   }
   for (i=0; i<size; i++)
   printf("%d  ", a[i]);
}

int main(){ 
   int n,i;
   printf("Enter the number of values in the array : ");
   scanf("%d",&n);

   int arr[n]; 
   printf("Enter the values of the elements in the array :\n"); 
   for (i=0; i<n; i++)
    scanf("%d",&arr[i]);

    read_n_reverse(n,arr);
   
return 0; 
}
