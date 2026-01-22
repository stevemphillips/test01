#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int main(int argc, char *argv[]) 
{
    if(argc != 2)
    {
        printf("usage: test01 <number>\n");
    }
    else
    {
        printf("Counting down...\n");

        for(int ii = atoi(argv[1]); ii > 0; ii--)
        {
            printf("%d \r", ii);
            fflush(stdout);
            sleep(1);
        }
        printf("done!\n");
    }

    return 0;
}
