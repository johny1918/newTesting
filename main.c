#include <stdio.h>
#include <stdlib.h>


int lenghty(char *file)
{
    int len=0;
    while(file[len] != '\0')
    {
        len++;
    }
    return len;
}

int main()
{
    char *text="Some basic text";
    char *findy="text";
    int i,j,textSize=lenghty(text),findSize=lenghty(findy),counter=0;
    for(i=0;i<textSize-1;i++)
    {
        for(j=0;j<findSize-1;j++)
        {
            if(text[i] == findy[j])
               {
                 counter++;
                 if(counter==findSize)
                    printf("Am gasit cuvant \"%s\" la pozitia %d",findy,i);

               }
        }
    }
    return 0;
}
