#include<stdio.h>

int main(){
    int n;
     if (scanf("%d", &n) == 1)  
    for(int i=1;i<=n;i++){
         if (i%2==1){
        printf("\n%d",i);
        }
        if(i%2==0 ){
             char a ='L';
        printf("\n%c",a);}

         if(i%4==0 ){
        char b='T';
        printf("%c",b);
        }
        if(i%8==0){
        char c='O';
        printf("%c",c);
        }
        if(i%16==0){
        char d='L';
        printf("%c",d);
        }
}}