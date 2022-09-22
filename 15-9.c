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

void merge_n_sort(int size, int *a, int *b){
     int arr3[2*size],i,j;

     for (i=0,j=size; i<size, j<2*size; i++,j++){
        arr3[i]=a[i];
        arr3[j]=b[i];
     }
     sort(arr3, 2*size);

     printf("The elements of new merged and sorted array is :\n");
     for (i=0; i<2*size; i++)
     printf("%d  ", arr3[i]);
}

int main(){ 
    int n;
    printf("Enter the total number of elements in both the array : ");
    scanf("%d",&n);

    int arr1[n],arr2[n],i; 

    printf("Enter the numbers of array1 : ");
        for ( i=0 ; i<n; i++){
    scanf("%d",&arr1[i]);
}
printf("Enter the numbers of array2 : ");
        for ( i=0 ; i<n; i++){
    scanf("%d",&arr2[i]);
}

merge_n_sort(n, arr1, arr2);
return 0; 
}