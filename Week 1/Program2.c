#include <stdio.h>

int main()
{
    char input[20], current;
    int state = 0, i = 0;

    printf("Enter String: ");
    scanf("%s", input);

    while((current = input[i++]) != '\0')
    {
        switch (state)
        {
        case 0:
            if(current == 'a') state = 3;
            else if(current == 'b') state = 1;
            else printf("Invalid Token\n");
            break;

        case 1:
            if(current == 'a') state = 3;
            else if(current == 'b') state = 2;
            else printf("Invalid Token\n");
            break;

        case 2:
            if(current == 'a') state = 3;
            else if(current == 'b') state = 2;
            else printf("Invalid Token\n");
            break;

        case 3:
            if(current == 'a') state = 4;
            else if(current == 'b') state = 1;
            else printf("Invalid Token\n");
            break;

        case 4:
            if(current == 'a') state = 4;
            else if(current == 'b') state = 1;
            else printf("Invalid Token\n");
            break;

        }
    }

    if(state == 2 || state == 4) printf("String Accepted!");
    else printf("String Not Accepted!");

    return 0;
}
