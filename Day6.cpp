# include <stdio.h>
# include <stdlib.h>

int main(){
    FILE *f;
    
     f= fopen ("Task6.txt", "r");
    printf("File opended successfully\n");
    printf("String input from file:\n ");
    
  	char x;
	int y = 0;
    int i = 0;
    
    while(1){
    x = fgetc(f);
    if(x==EOF)
        break;
   	else
        printf("\n%c ", x);
     }
     
    printf("\n Reserved string:\n");
    fseek(f,0,SEEK_END);
    y = ftell(f);
   
    while(i < y){
    i++;
    fseek(f,-i,SEEK_END);
    printf("%c",fgetc(f));
    }
    printf("\nThe reserved string is added to the file successfully");
	return 0;
}
