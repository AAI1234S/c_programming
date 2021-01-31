#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct person 
{
	char name[20];
	int age;
	struct person *next;
};

struct person *add_last(struct person *);
void display(struct person *);
void save(struct person *);
struct person *sync_file(struct person *);

