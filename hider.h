char help(char a[]){
    if (a=="inputd"){
    printf("yes");
    }
}
int inputd(char a[]){
int c;
printf("%s",a);
scanf("%d",&c);
return c;
}
char chr(int a){
char b=a;
return b;
}
int linput(char *str[],char times,char dough[]){
static int a[]={};
if(times!="-"){
int a2 = times;
int i=0;
do{
 printf("%s%d : ",str,i+1);
 scanf("%d\n",&a[i]);
if(dough=="yes"){
 if(a[i]==000){
    a2=3;
    break;
}
}
i++;
}while(i<times);
}
return a;
}
int listp(int a[],int b,char c[]){
int i=0;
while(i<b){
    if(c=="n"){
    printf("%d\n",a[i]);
    }
    if(c=="t"){
    printf("%d\t",a[i]);
    }
    if(c=="-"){
    printf("%d",a[i]);
    }
    i++;
}
}
int listc(int a[],int b){
static int d[]={};
for(int i=0;i<b;i++){
    d[i]=a[i];
}
return d;
}
int strlen(char v[]){
int b=0;
for(int i=0;v[i]!=0;i++){
    b++;
}
return b;
}
int sum(int a[],int len){
int sums=0;
for(int i=0;i<len;i++){
    sums=sums+a[i];
}
return sums;
}
char *inputs(char a[]){
static char b[6]="ashgh";
printf("%s",a);
return b;
}
int minm(int a[],int len){
int min_e=a[0];
for(int i=0;i<len;i++){
    if(a[i]<min_e){
        min_e=a[i];
    }
    return min_e;
}
}
