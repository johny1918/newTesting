#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int lenghty(char *file)
{
    int len=0;
    while(file[len] != EOF)
    {
        len++;
    }
    return len;
}

void FindWord(char *location,char *searchWord)
{
    FILE *dataFile = fopen(location,"r");
    char buffer[2000];
    int i,j,counter=0;
    if(!dataFile)
        puts("Error");
    puts("This is the text from file:\n");
    while(fgets(buffer,2000,dataFile)!=NULL)
    {
        printf("%s",buffer);
    }
    puts("\n");
    fclose(dataFile);
    for(i=0;i<lenghty(buffer);i++)
    {
        for(j=0;j<lenghty(searchWord);j++)
        {
            if(buffer[i] == searchWord[j])
            {
                counter++;
                if(counter==lenghty(searchWord))
                {
                    printf("Am gasit cuvant %s\n",searchWord);
                }
            }
        }
    }
}

int main()
{
    char *loc="/home/john/Documents/fisier.txt";
    FindWord(loc,"is");

    return 0;
}
