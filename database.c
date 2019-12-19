#include<stdio.h>
struct stud{
  	char name[20];
  	char usn[10];
  	char phno[10];
  	};
  	void main()
  	{
     struct stud s[10];
     int i,n;
     printf("enter the no. of students\n");
     scanf("%d",&n);
     printf("enter the student data\n");
     for(i=0;i<n;i++)
     {
     printf("enter the name\n");
     scanf("%s",&s[i].name);
     printf("enter the usn\n");
     scanf("%s",&s[i].usn);
     printf("enter the phone number\n");
     scanf("%s",&s[i].phno);
     }
     printf("the student data is\n");
     for(i=0;i<n;i++)
     {
     printf("name=%s\n",s[i].name);
      printf("usn=%s\n",s[i].usn);
       printf("phone no=%s\n",s[i].phno);
       }
       }
