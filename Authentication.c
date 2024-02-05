#include<stdio.h>
#include<string.h>
int main()
{
		char password[20];
		char passInput[20];
		int i,flag,n=2;
		const char filepath[] = "f:/code/problems/Authentication/Passwords.txt";
		FILE *file;

		file = fopen(filepath,"r");

		if(file == NULL) //File Error Statement
		{
				printf("File could not be opened");
				return 1;
		}

		else
		{
				printf("File has been opened!\n"); //File opening statement
				fgets(password, 20, file); //Getting string from file
				
				while(n!=0){
				n = 2;
				printf("Enter Password: \n");
				gets(passInput); // Input password
				
				for(i=0; i<strlen(password); i++) //Matching password from file with password from input
				{
						flag=0;
						if(password[i] != passInput[i]) 
						{
								printf("WRONG");
								flag++;
								break;
						}
				}

				if(flag!=0){
						printf("\nPress 1 to try again\nPress 0 to quit\n");
						scanf("%d",&n);
						getchar();

				}
				if(flag == 0)
				{	
						printf("Correct!");
						fclose(file);
						return 0;
				}
				
				}	
		}
}
