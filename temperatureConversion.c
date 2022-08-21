#include <stdio.h>

int main()
{

    float celcius, fahrenheit ;
    int choice;

    do
    {

        printf("\n\nTemperature conversion Code\n");
        printf("1- Convert C to F\n2- Convert F to C\n3- Quit");
        printf("\nPlease enter your choice >");
        scanf("%d", &choice);
        switch(choice)
        {
        case 1:
            printf("Converting Celcius to Fahrenheit");
            printf("\nEnter the temp in Celcius");
            scanf("%f", &celcius);
            fahrenheit = 32 + (9.0/5.0) * celcius;
            printf("%.1f C = %.1f F", celcius, fahrenheit);
            break;
        case 2:
            printf("Converting Fahrenheit to Celcius");
            printf("\nEnter the temp in Fahrenheit");
            scanf("%f", &fahrenheit);
            celcius = (5.0/9.0) * ( fahrenheit - 32);
            printf("%.1f F = %.1f C", fahrenheit, celcius);
            break;
        case 3:
            printf("Thanks and Bye!");
            break;
        default:
            printf("Invalid input");
        }

    }
    while (choice !=3);

    return 0;

}
