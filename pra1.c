#include<stdio.h>
void main(){
    int a[100],n,i,num,found=0;
    printf("Enter how many element you want in array : ");
    scanf("%d",&n);
    printf("Enter array elements : ");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("Enter an element you want to search : ");
    scanf("%d",&num);
    for(i=0;i<n;i++){
        if(num == a[i]){
            printf("Element %d is found at %d position.",num,i);
            found++;
        }
    }
}