#include<stdio.h>
// wap to search an element in 1d arraY
int main(){
        int arr[10]={1,5,4,6,8,3,6,23,43,3};
        int k=23;
        
        for(int i=0;i<10;i++){
            if(arr[i]==k){
                printf("The number %d present on index %d\n",arr[i],i);
            }
        }

        
    return 0;
}
