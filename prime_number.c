#include<stdio.h>
int main(){
    int n=3,counter=0;
    for(int i=1;i<=n;i++){
        if(n%i==0){
            counter++;
        }
    }
    if(counter==2){
        printf("Number is prime");
    }
    else{
        printf("Number is not prime");
    }
    printf("This is i check for the pollscm is work or not");
    printf("Yes it is working");
}
