#include<stdio.h>
int main()
{
		char pass[20];
		int i;
		const char filepath[] = "f:/code/problems/Authentication/Passwords.txt";
		FILE *file;

		file = fopen(filepath,"a");
		
		if(file == NULL)
		{
				printf("File hasnt been opened.\nYou did something wrong bud.");
				return 1;
		}
		else
		{
				printf("File has been opened!");
				fseek(file, 0, SEEK_END);
				int size = ftell(file);
				if(size == 0)
				{
						gets(pass);
						fputs(pass,file);
				}
				else
				{
						printf("Enter Password: ");
						gets(pass);
						while((ch = fgetc(file)) != EOF){
								if(ch!=)
						}
						if()
				}
				return 1;
		}


}
