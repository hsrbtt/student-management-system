#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h> 
typedef struct student{
	int stunum;
	char name[20];
	int score; 
}student;//定义学生信息 

typedef struct node{
	student student;
	struct node*next;
}node;//定义节点信息 
typedef struct account{
	char id[20];
	char an[20];
} account; 
void output();
void inputstudent(node*head);
void putoutstudent(node*head);
void countstudent(node*head);
void findstudent(node*head);
void modstudent(node*head);
void delstudent(node*head);
void sortstudent(node*head);
void savestudent(node*head);
node*readstudent(node*p);
int login();
