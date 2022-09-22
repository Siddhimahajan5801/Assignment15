#include <stdio.h>

int print_unique(int *a, int size){
        int i,j;
    for( i=0; i<size; i++){
          int count=0;
        for(j=0; j<=size; j++){
            if (i!=j){
            if(a[i]==a[j]){
            count++;
            }
         }
     }
        if (count==0){
        printf("%d  ", a[i]);
        } 
    }
}


int main(){ 
    int n;
    printf("Enter the total number of elements in the array : ");
    scanf("%d",&n);

  int num[n],i; 

  printf("Enter the numbers : ");
for ( i=0 ; i<n; i++){
    scanf("%d",&num[i]);
}

printf("All the unique elements of this array is : \n");
print_unique(num, n);

return 0;
}