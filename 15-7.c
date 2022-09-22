#include <stdio.h>
 int count_dup(int *a, int size){
    int count=0;
    for(int i=0; i<size-1; i++){
        for (int j=i+1; j<size; j++){
            if(a[i]==a[j])
            count++;
        }
    }
    return count;
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

//The total number of duplicate elements in the array
int dup=count_dup(num, n);
printf("The total number of duplicate elements in the array: %d ", dup);


return 0;
}

