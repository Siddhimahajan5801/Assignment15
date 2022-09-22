#include <stdio.h>

void sort(int *ptr, int size){
    int i,j;
    int max=*ptr;

    for (i=0; i<size-1; i++){
        for (j=i+1; j<size; j++){

            if ( *(ptr+i)>*(ptr+j) ){
                max=*(ptr+i);
                *(ptr+i)=*(ptr+j);
                *(ptr+j)=max;
            }
        }
    }
}

int main(){ 
  int size;
  printf("Enter the size of your array\n");
  scanf("%d",&size);

  int arr[size];
  printf("Enter the elements of the array : \n");
  for (int i=0; i<size; i++)
    scanf("%d", &arr[i]);

 sort(arr, size);
 printf("\nThe array in ascending order is(after sorting): \n");
    for (int i=0; i<size; i++)
    printf("%d  ", arr[i]);

return 0; 
}