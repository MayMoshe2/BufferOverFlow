#include <stdio.h>
#include <string.h>

int main(void)
{
    char buffer[15];
    int pass = 0;
    printf("Please enter a password:\n");
    fgets(buffer);

    if(strncmp(buffer, "123", 3))
    {
        printf("Wrong password!\n");
    }
    else
    {
        printf("Correct password!\n");
        pass = 1;
    }

    if(pass)
    {
        printf ("Root privileges are given to the user\n");
    }
    return 0;
}
