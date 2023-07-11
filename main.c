#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

typedef char* string;
 
struct employee
{
	int EmpID;
	string Name;
	int Age;
	string Department;
	float Salary;
};

void Title(string title)
{
	system("@cls||clear");
	printf("EMPLOYEE MANAGEMENT SYSTEM\n");
	printf("%s\n", title);
	printf("=============================================================================================================\n");
}

void Add()
{
	printf("Add Employee");	
}

void Edit()
{
	printf("Edit Employee");	
}

void Remove()
{
	printf("Remove Employee");
}

void List()
{
	printf("List Employee");
}

int main(int argc, char *argv[]) 
{
	int ch;
	while(1)
	{
		Display("MAIN MENU");
		printf("1.	Add Employee\n");
		printf("2.	Edit Employee Details\n");
		printf("3.	Remove Employee\n");
		printf("4.	List\n");
		printf("5.	Exit\n");
		printf("Choice: ");
		scanf("%d", &ch);
		
		switch(ch)
		{
			case 1:
				Add();
				getch();
				break;
			case 2:
				Edit();
				getch();
				break;
			case 3:
				Remove();
				getch();
				break;
			case 4:
				List();
				getch();
				break;
			case 5:
				exit(0);
			default:
				printf("Invalid Choice. Enter again");
				getch();
				break;
		}
	}
	return 0;
}
