//program to implement structurs

#include<stdio.h>

int main()
{
  struct student
  {
  int rno;
  char name[20];
  float marks[8];
  };

  struct student s[3];
  int i,j;
  char dm;

  for(j=0;j<3;j++)
  {
     printf("\nenter student%d details:",j+1);
     printf("\nenter roll number: ");
     scanf("%d",&s[j].rno);
     scanf("%c",&dm);
     printf("\nenter name: ");
     gets(s[j].name);
     printf("\nenter 8 marks: ");
     for(i=0;i<8;i++)
      scanf("%f",&s[j].marks[i]);
  }
  for(j=0;j<3;j++)
  {
     printf("\nstudent%d details: ",j+1);
     printf("\nroll number: %d",s[j].rno);
     printf("name: %s",s[j].name);
     printf("\nmarks: ");
      for(i=0;i<8;i++)
        printf("%.2f ",s[j].marks[i]);
  }
}
