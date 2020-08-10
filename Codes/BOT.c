/*_____________________________________________________
|*******************ChatBotC***************************|
|**************CODEDBYTHEALPHAGUARD********************|
|______________________________________________________|
*/
#include<stdio.h>

int main()
{
	printf("ChatBotC\n\n");
	
	//FILE *dataFile;
	//int i, n;
	//char str[100];
	char ques[100];
	char ans[100];
	//char fname[10] = "data.txt";
	
	printf("Please Enter your Question : ");
	scanf("%s", &ques);
	
	printf("\nPlease Enter your answer : ");
	scanf("%s", &ans);
	
	printf("\n%s : %s", ques, ans);
	
	return 0;
}
