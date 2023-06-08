#include <stdio.h>

int main()
{
    int chosenOption;

    printf("Which task do you wanna do?\n");
    printf("Type \"1\" to create a customers list.\n");
    printf("Type \"2\" to create a tasks list.\n");

    scanf("%d", &chosenOption);

    switch (chosenOption)
    {
    case 1:
        printf("Sorry! This feature is not available right now.\n");
        break;

    case 2:
        printf("Sorry! This feature is not available right now.\n");
        break;

    default:
        printf("Others features are comming soon. Thanks for your understanding. I hope see you soon.\n");
        break;
    }
}
