// to see weather the char is upper cases or lower cases
# include<stdio.h>
int main(){

char a ; 
  printf("give a char : ");
  scanf(" %c",&a);
  
  if ( a>='a' && a<='z'){
    printf(" this is a lowercases ");
  }
  else if ( a>='A' && a<='Z'){
    printf( " this is a upper cases");
  }
  else{
    printf( " this is not a char");
  }
}
 

// this is to find which day to the week is it 

void weekDay()

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