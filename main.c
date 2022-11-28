#include <stdio.h>
#include <stdlib.h>
#include <String.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

#define MAX_NAME 20
struct student{
	int ID;
	char name[MAX_NAME];
	double grade;
	
};
int main(int argc, char *argv[]) {
	
	
	struct student student1 = {2212030, "JuyeopKim", 4.3};
	
	student1.ID = 2212035;
	strcpy(student1.name, "NahyunKim");
	student1.grade = 4.0;
	
	
	printf("%d %s %.1f\n", student1.ID, student1.name, student1.grade);
	
	return 0;
}
