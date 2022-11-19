#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    //string text= get_string("Text ");
    
    char text[100];
    
    printf("Sentence:");
    scanf("%[^\n]s",&text);
    
    int sentences=0;
    
    for(int i=0;i < strlen(text);i++)
    {
        if(text[i]=='.' || text[i]=='!' || text[i]=='?')
        {
            sentences++;
        }
    }
    printf("%d",sentences);
}

