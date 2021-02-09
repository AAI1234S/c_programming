#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct employee
{
	char name[30];
	int age;
	float sal;
	struct employee *next, *prev;

};

void add_last(struct employee **,struct employee **);
void display(struct employee *);
void save(struct employee *);
void reverse_display(struct employee *lptr);
void sync(struct employee **,struct employee **);
void delete_last(struct employee **ptr, struct employee **lptr);

