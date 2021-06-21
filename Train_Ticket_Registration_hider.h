#include<stdio.h>
#include<dos.h>
int long long inputlld(char str[]){
    long long int input;
    printf("%s",str);
    scanf("%lld",&input);
    return input;
}
int inputd(char str[]){
    int input;
    printf("%s",str);
    scanf("%d",&input);
    return input;
}
//symble repeter...-_-
int rep(char symble[],int num){
    for(int i=0;i<num;i++){
        printf("%s",symble);
    }
    printf("\n");
}
//array len finder.....ex:len(sizee(array),array);
int len(int b,char a[]){
    int st=b / 4 ;
    return st;
}
//string lingth finder
int strle(char a[]){
   int coun=0;
   for(int i=0;a[i]!=0;i++){
        coun++;
   }
   return coun;
}
