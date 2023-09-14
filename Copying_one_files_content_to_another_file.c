#include <stdio.h>

int main() {
    char line[100];
    FILE *fptr=fopen("class5.c","r");
    FILE *fptr2=fopen("new.txt","w");
    
    while (fgets(line,20,fptr)!=NULL) 
    {
        fread(line,sizeof(line),10,fptr);


    }
    // while((int c=getc(fptr))!=EOF)
    fclose(fptr);
    fclose(fptr2);

    return 0;
}