#include<stdio.h>
int swap_ptr(int *p1, int *p2){
    int temp;
    temp= *p1;
    *p1=*p2;
    *p2= temp;
}

int main(){
    int num1,num2;
    printf("Enter both nos.");
    scanf("%d %d",&num1,&num2);
    printf("BEFORE SWAP %d %d\n",num1,num2);
    swap_ptr(&num1,&num2);
    printf("AFTER SWAP %d %d\n",num1,num2);
    return 0;

}
