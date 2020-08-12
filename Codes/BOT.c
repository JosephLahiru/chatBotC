/*_____________________________________________________
|*******************ChatBotC***************************|
|**************CODEDBYTHEALPHAGUARD********************|
|______________________________________________________|
*/
#include<stdio.h>
#include<string.h>

int main()
{
	printf("ChatBotC\n\n");
	
	int i;
	
	char ques[100];
	char name[50];
	
	printf("Please Enter your Name : ");
	scanf("%s", &name);
	
	//printf("\n%s\n", ques);
	
	while(strcmp(ques, "EXIT") != 0)
	{
		printf("\n%s : ", name);
		scanf("%s", &ques);
		
		//for(i = 0; i<=strlen(ques); i++)
		//{
		//	printf("%c\n", ques[i]);
		//}
		
		if(strcmp(ques, "Hello") == 0)
		{
			printf("Hi");
		}
		else if(strcmp(ques, "How_are_you?") == 0)
		{
			printf("I\'m doing well. Thank You!");
		}
		else if(strcmp(ques, "EXIT") == 0)
		{
			printf("Good bye %s..!!", name);
		}
		else
		{
			printf("I have not learned about that yet!!");	
		}
	}	
	return 0;
}
