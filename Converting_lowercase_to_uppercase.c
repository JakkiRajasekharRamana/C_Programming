#include <stdio.h> 
int main() 
{
char str[50]="i am stupid",str2[50];
int i,x,a;
for(i=0;str[i]!='\0';i++){
    x=str[i];
    if(96<x && x<124){
        x=x-32;
    }
    str[i]=x;
}
printf("%s",str);
}