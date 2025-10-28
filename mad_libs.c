// create a mad libs program where the user can input words to fill in the blanks of a story
#include<stdio.h>
#include<string.h>
int main() {
char noun1[50]="";
char noun2[50]="";
char verb[50]="";
char adjective1[50]=""; 
char adjective2[50]="";
char adjective3[50]="";
char place[50]="";
printf("Enter a noun: "); 
fgets(noun1,sizeof(noun1),stdin);
noun1[strlen(noun1)-1]='\0'; // remove newline character
printf("Enter another noun: ");     
fgets(noun2,sizeof(noun2),stdin);
noun2[strlen(noun2)-1]='\0';
printf("Enter a verb: ");
fgets(verb,sizeof(verb),stdin);
verb[strlen(verb)-1]='\0'; 
printf("Enter an adjective: ");
fgets(adjective1,sizeof(adjective1),stdin);
adjective1[strlen(adjective1)-1]='\0'; 
printf("Enter another adjective: ");
fgets(adjective2,sizeof(adjective2),stdin);
adjective2[strlen(adjective2)-1]='\0'; 
printf("Enter one more adjective (not ending in -est): ");
fgets(adjective3,sizeof(adjective3),stdin);
adjective3[strlen(adjective3)-1]='\0';  
printf("Enter a place: ");
fgets(place,sizeof(place),stdin);
place[strlen(place)-1]='\0'; 
printf("Here is your story:\n");
printf("Once I had a dream about a %s %s who lived in %s.\n",adjective1,noun1,place);
printf("Every day I would %s with my %s %s in the %s.\n",verb,adjective1,noun1,place);
printf("One day we came across a %s %s. \n",adjective2,noun2);
printf("It was the most  %s adventure of my life!\n",adjective3);
return 0;
}

