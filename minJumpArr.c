#include<stdio.h>
#include<Stdlib.h>

int main(){
    int n, count=0, max, k;
    scanf("%d", &n);
    int *arr;
    arr = (int*)malloc(n*sizeof(int));
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    for(int i=0; i<n ;){
        max = arr[i+1];
        if (arr[i]==0){
            count = -1;
            break;
        }
        if (i+arr[i] == n-1){
            count ++;
            break;
        }
        else{
            for(int j = 1; j<=arr[i] ; j++){
                if (arr[i+j]>=max){
                    max = arr[i+j];
                    k = i+j;
                }
            }
            i = k;
            count++;
        }
    }
    printf("%d", count);

    return 0;
}
