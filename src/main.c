#include <stdio.h>
#include <espl_lib.h>
#include <string.h>

int main() {

	unsigned int num; 
	char 	     repeat_program;
	while(1)
	{
		printf("Enter a number:");
		scanf("%d", &num);

		char* word = num_to_words(num);
		printf("Your number is spelled %s\n", word);
	
		
		printf("Would you like to continue? [y/n]: ");
		scanf(" %c", &repeat_program);

		if(repeat_program == 'n')
		{
		break;
		}
	}

	return 0;
}

