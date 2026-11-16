# include<stdio.h>
int main()

{
    int week;
    printf(" entry the day of the week (1-7) : ");
    scanf(" %d", &week );

    switch (week)
    {
        case 1 : printf(" monday\n");
        break;

        case 2 : printf( " tuesady\n");
        break;

         case 3 : printf( " wednesday\n");
        break;

         case 4 : printf( " thusday\n");
        break;

         case 5 : printf( " friday\n");
        break;
        
         case 6: printf( " saturday\n");
        break;

         case 7 : printf( "sunday \n");
        break;

        default : printf("  cant you see it is coding as week from 1 to 7 , so put that only \n ");
        
    }

}