#include<stdio.h>
int main(){
    int n;
    printf("Enter the size");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements");
    for(int i=0;i<n;i++){
        scanf("%d\n",&arr[i]);
    }
    int temp=arr[n-1];
    for(int i=n-1;i>0;i--){
        arr[i]=arr[i-1];
    }
    arr[0]=temp;
    for(int i=0;i<0;i++){
        printf("%d",arr[i]);
    }
}
                         