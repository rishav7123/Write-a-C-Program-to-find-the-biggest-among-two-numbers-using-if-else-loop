// Write a ‘C’ Program to find the biggest among two numbers using  if… else loop
#include<stdio.h>
int main(){
    int a,b;
    printf("Enter two numbers: ");
    scanf("%d %d",&a,&b);
    if(a > b){
        printf("a = %d is the greatest number.",a);
    }
    else{
        printf("b = %d is the greatest number.", b);
    }
    return 0;

}