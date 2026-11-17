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