#include <stdio.h>

int binary_search(int arrray[],int a,int size,int count);

int main(){
    int array[] = {10,20,30,40,50,60,70,80,90,100};
    int arraysize = sizeof(array) /sizeof(array[0]);
    int key;
    int result;

    printf("key\n");
    scanf("%d",&key);

    result = binary_search(array,key,arraysize,0);

    if(result == -1){
        printf("not found\n");
    }else{
        printf("search number is in %d\n",result);
    }

    return 0;
}

int binary_search(int array[],int a,int size,int count){
    int s = 0;
    int x;
    int arraysize = size;

    while((arraysize/2) >= s){
        x = count + (size - count)/2;

        if(array[x] == a){
            return x;
        }else if(array[x] < a){
            count = x;
        }else if(array[x] > a){
            size = x;
        }
        s++;
    }
    return -1;
}