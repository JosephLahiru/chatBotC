# chatBotC
chatbot developed with C

#HERE WE INCLUDING THE HEADER FILES

#include<stdio.h> //- Standard IO for standard Inputs and outputrs
#include<string.h> //- its for play with some strings as i suppose.. I used this for compair two strings

int main()
{
	printf("ChatBotC\n\n");
	
	int i;
	
	char ques[100]; //defining the question variable
	char name[50]; //for the name
	
	printf("Please Enter your Name : ");
	scanf("%s", &name);
	
	//printf("\n%s\n", ques);
	
	while(strcmp(ques, "EXIT") != 0) // this is how that compairing works from that stringg library
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

//THIS CODE IS A CHATBOT KINDA THING.. IT CANT TAKE SPACES IN SCANF YOU HAVE TO FIX IT.. OR EVERYTINE YOU GIVE INPUTS YOU HAVE TO USE _ AS SPACE. EDIT UPDATE eNjOy ;-D
