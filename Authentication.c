#include<stdio.h>
#include<string.h>
int main()
{
		char password[20];
		char passInput[20];
		int i,flag;
		int tryAgain;
		const char filepath[] = "f:/code/problems/Authentication/Passwords.txt";
		FILE *file;

		file = fopen(filepath,"r");

		if(file == NULL)
		{
				printf("File could not be opened");
				return 1;
		}

		else
		{
				printf("File has been opened!\n");
				fgets(password, 20, file);
				gets(passInput);

				for(i=0; i<strlen(password); i++)
				{
						flag=0;
						if(password[i] != passInput[i])
						{
								printf("WRONG");
								flag++;
								break;
						}
				}
				if(flag == 0)
				{	
						printf("Correct!");
				}


			
				fclose(file);
				return 0;
		}


}
