#include<stdio.h>

int find_max(int arr[] ,int size){
    if(size == 0){
        return -1;
    }

    int max_num = arr[0];

    for(int i=1;i< size;i++){
        if(arr[i]>max_num){
            max_num=arr[i];
        }
    }

    return  max_num;

}

int main(){
    int array[] = {1,2,3,4,5,6,7,8,9};
    int size = sizeof(array)/sizeof(array[0]);
    int max_number = find_max(array,size);

    if (max_number == -1) {
        printf("The array is empty.\n");
    } else {
        printf("The maximum number in the array is: %d\n", max_number);
    }

   
}