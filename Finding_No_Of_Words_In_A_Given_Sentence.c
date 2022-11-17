#include <stdio.h>
#include <string.h>
#include <ctype.h>

Finding_No_Of_Words_In_A_Given_Sentenceint main(void)
{
    //string text= get_string("Text ");
    
    char text[100];
    
    printf("Sentence:");
    scanf("%[^\n]s",&text);
    
    int words=1;
    
    for(int i=0;i < strlen(text);i++)
    {
        if(text[i]==' ')
        {
            words++;
        }
    }
    printf("%d",words);
}

