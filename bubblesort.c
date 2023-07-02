#include <stdio.h>
#include <string.h>
void printarray(char* A, int n){
    for(int i=0; i<n; i++){
      printf("%c ", A[i]);
    }
      printf("\n");
}
void bubblesort(char* A, int n){

    int temp=0;
    for(int i=0; i<n-1; i++){
        for(int j=0; j<n-1-i;j++){
            if(A[j]>A[j+1]){
            temp =A[j];
            A[j]=A[j+1];
            A[j+1]=temp;
        }
    }
    }
}
int main(){
    char str[1000];
    printf("Enter the string: ");
    gets(str);
int n;
n=strlen(str);
    printarray(str,n);
    bubblesort(str,n);
    printarray(str,n);
    

    return 0;
}