#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct company
{
	char company_name[30];
	unsigned int year_establish;
	float tunover;
	struct company *next;   //self referncial structure point to the next node address
};

struct company* add_last(struct company *ptr);
void display(struct company *ptr);
struct company* sync_data(struct company *ptr);
void save(struct company *ptr);
struct company* search(struct company *ptr,char *str);


