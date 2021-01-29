#include<stdio.h>
#include<string.h>
struct Birthdate
{	
	int day;
	int month;
	int year;
}date;
struct Kundali
{
	char Boyname[20];
	char Girlname[20];
	int gun;
	struct Birthdate date;
};

int main()
{
	struct Kundali pr;

	printf("Enter the Name of Groom:");
	scanf("%s",pr.Boyname);

	printf("Enter the Birthdate of Groom:");
	scanf("%d %d %d",&pr.date.day, &pr.date.month,&pr.date.year);
	printf("Enter the Name of Bride:");
	scanf("%s",pr.Girlname);
	printf("Enter the Birthdate of Bride:");
	scanf("%d %d %d",&pr.date.day, &pr.date.month,&pr.date.year);
	printf("Enter the matches Gun Of both:\n");
	scanf("%d",&pr.gun);

	printf("------------------------------------------------------\n");
	printf("Boy Detail:\n");
	printf("Name:%s\n",pr.Boyname);
	printf("Date of Birth:%2d /%2d /%2d\n",pr.date.day,pr.date.month,pr.date.year);

	printf("------------------------------------------------------\n");
	printf("Groom Detail:\n");
	printf("Name:%s\n",pr.Boyname);
	printf("Date of Birth:%2d /%2d /%2d\n",pr.date.day,pr.date.month,pr.date.year);
	printf("-------------------------------------------------------\n");
	printf(" Both got gun :%d\n",pr.gun);

	printf("-------------------------------------------------------\n");

	return 0;
}

	
