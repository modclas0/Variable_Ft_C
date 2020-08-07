#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct _Person
{
	char name[20];
	int age;
	char address[100];
} Person;

int		main(void)
{
	Person *p1 = malloc(sizeof(Person));

	strcpy(p1->name, "이승현");
	p1->age = 30;
	strcpy(p1->address, "구리시 인창동");

	printf("이름 : %s\n", p1->name);
	printf("나이 : %d\n", p1->age);
	printf("주소 : %s\n", p1->address);

	free(p1);

	return (0);
}
