#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{	

	char a[7]="user123";
	 char c[7];  
	 system("color 0A");
	 	printf("||-----------------------------------------------------------------------------------------------------------------------------------||\n");
		printf("||-----------------------------------------------------------------------------------------------------------------------------------||\n");
	 	printf("\n||  PROJECT DATE      :   12-04-2018\t\t\t\t\t\t   \t\t\t\t \t  \t     ||\n");
		 printf("\n||  PROJECT NAME      :   BANKER'S ALGORITHM\t\t\t\t\t\t   \t\t\t\t \t     ||\n\n");
	 	printf("||  PURPOSE           :   DEADLOCK AVOIDANCE \t\t\t\t\t\t\t\t\t\t\t     ||\n");
		printf("\n||  \t\t\t\t\t\t\tSUBMITTED BY        :      DEEPANSHU PATHAK\t\t\t\t     ||\n\n");
		printf("||  \t\t\t\t\t\t\tSTREAM              :      B.TECH(COMPUTER SCIENCE AND ENGINEERING)\t     ||\n\n");
		printf("||  \t\t\t\t\t\t\tPASSING OUT         :      2020\t     \t\t\t\t\t     ||\n\n");
		printf("||  \t\t\t\t\t\t\tCOLLEGE             :      LOVELY PROFESSIONAL UNIVERSITY, JALANDHAR (PUNJAB)||\n");
		printf("\n||-----------------------------------------------------------------------------------------------------------------------------------||\n");
		printf("||-----------------------------------------------------------------------------------------------------------------------------------||\n\n\n");
	printf("PASSWORD  :  %c%c%c%c%c%c%c\n",a[0],a[1],a[2],a[3],a[4],a[5],a[6]);
		int S=0,x1;
		
	printf("\nPLEASE ENTER THE SYSYTEM PASSWORD :");
	char ch;
	int i1;
	x1:
	for(i1=0;i1<7;i1++)
	{
		ch=getch();
		c[i1]=ch;
		printf(" ");
	}
	c[i1]='\0';
	int flag=1;
	for(i1=0;c[i1]!='\0';i1++)
	{
	if(c[i1]!=a[i1])
	{
		 flag=0;
		break;
	}
}
		if(flag==1)
		{
			printf("\n\n\n\nsuccessfully login...... \n");
		}
		
		else
		{
			while(S<2)
			{
			printf("\n\nsorry ! you have entered incorrect password\n\n\n");
			S++;
			printf("\nAGAIN ENTER THE SYSYTEM PASSWORD :");
			goto x1;
			}
			printf("\n\n\nWRONG PASSWORD ....");
			return(0);
		}
		printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\tplease press any key");
	getch();
	system("cls");
	system("color 0B");
	printf("\n\t\t***********************************************");
	printf("\n\t   \t \t \tBANKER'S ALGORITHM\n");
	printf(" \t\t ***********************************************\n\n");
	printf("\n||-----------------------------------------------------------------------------||\n");
	printf("||	\t\t	YOU ARE IN SYSTEM CHECKING  STATE\t       ||");
	printf("\n||-----------------------------------------------------------------------------||\n\n\n");

		int i,j,k,l,m,n;
		printf("PLEASE ENTER THE NO OF PROCESS TO INCLUDE IN THE SYSTEM : ");
		scanf("%d",&m);
		printf("\n\nPROCESSES ARE :\n\n");
			printf("--------------------------------\n");
		for(i=0;i<m;i++)
		{
		
			printf("||\tP%d with instance A,B,C\t ||\n",i+1);
			printf("||-------------------------------||\n");
		}
		int max[m][3],allo[5][3],need[5][3];
		int avail[5][3],seq[5][3],unsafe[4][5];
		int  s[]={1,2,3,4,5};
		int s1[5],s2[5];
		for(i=0;i<5;i++)
		{
			s2[i]=0;
		}

		for(i=0;i<m;i++)
	{
		for(j=0;j<3;j++)
		unsafe[i][j]=0;	
	}
	printf("\n||--------------||\n||\tSTEP 1:\t||\n||--------------||\n\n");
	printf("\n ENTER THE MAXIMUM RESOURSES FOR ALL PROCESSES WITH INSTANCES A,B,C RESPECTIVELY\n");
	
	for(i=0;i<m;i++)
	{
		int a=65;
		for(j=0;j<3;j++)
		{
		printf("\nenter maximum RESOURSES for the P%d process With %c :",i+1,a);
		scanf("%d",&max[i][j]);
		a++;
		}
	printf("\n----------------------------------------------------------------------\n");
	}
	printf("\nprocess\t maximum\n\n");
	for(i=0;i<m;i++)
	{
		printf("  p%d\t",i+1);
		for(j=0;j<3;j++)
	{
	
			printf("%d  ",max[i][j]);
	}
	printf("\n");
	}
	printf("\n||---------------------------------------------------------------------------------------------||\n");
	printf("\n||---------------------------------------------------------------------------------------------||\n");
		printf("\n\n\n\n\n||--------------||\n||\tSTEP 2:\t||\n||--------------||\n\n");
	printf("\nENTER THE ALLOCATION RESOURSES FOR ALL PROCESSES WITH INSTANCES A,B,C RESPECTIVELY\n");
	for(i=0;i<m;i++)
	{
		int a1=65;
		for(j=0;j<3;j++)
		{
		printf("\nenter the allocation for p%d process with instance %c :",i+1,a1);
		scanf("%d",&allo[i][j]);
		a1++;
		}
		printf("\n------------------------------------------------------------------\n");
	}
	printf("\nprocess\t\t maximum\t\tallocation");
	printf("\n");
	
	for(i=0;i<m;i++)
	{
		printf("\np%d\t    ",i+1);
		for(j=0;j<3;j++)
	{
			printf("  %d  ",max[i][j]);
	}
	printf("\t\t");
	for(k=0;k<3;k++)
	{
		printf("  %d  ",allo[i][k]);
	}
	
	printf("\n");
	}
	
	printf("\n||---------------------------------------------------------------------------------------------||\n");
	printf("\n||---------------------------------------------------------------------------------------------||\n");
	printf("\n\n\n\n\n||--------------||\n||\tSTEP 3:\t||\n||--------------||\n\n");
	printf("NEED MATRIX WILL BE :\n");
	printf("\nprocess  \tmaximum     \tallocation  \tNEED\n");
	for(i=0;i<m;i++)
	{
		printf("\np%d\t   ",i+1);
		for(j=0;j<3;j++)
		{
		need[i][j]=max[i][j]-allo[i][j];
		printf("  %d  ",max[i][j]);
		}
		printf("\t");
		for(j=0;j<3;j++)
		{
		printf("%d  ",allo[i][j]);
		}
		printf("\t");
		for(k=0;k<3;k++)
		{
		printf("%d  ",need[i][k]);
		}
		printf("\n");
	}
	printf("\n\nfrom the given process table AVAILABLE RESOURSES is :\n");
	avail[0][0]=3;
	avail[0][1]=3;
	avail[0][2]=2;
	int a22=65;
	for(i=0;i<1;i++)
	{
		for(j=0;j<3;j++)
		{
		printf("\nfor Instance %c : %d\n",a22,avail[i][j]);
		a22++;
		}
	}
	printf("\n\n");
		l=0;
		int a5=0,a6=0;
	for(i=0;i<m;i++)
	{
	
			j=0;
			
			if(need[i][j]<=avail[l][0]&&need[i][j+1]<=avail[l][1]&&need[i][j+2]<=avail[l][2])
			{
				
				avail[l+1][j]=avail[l][j]+allo[i][j];
				avail[l+1][j+1]=avail[l][j+1]+allo[i][j+1];
				avail[l+1][j+2]=avail[l][j+2]+allo[i][j+2];
				seq[l][j]=allo[i][j];
				seq[l][j+1]=allo[i][j+1];
				seq[l][j+2]=allo[i][j+2];
				s1[l]=s[i];
				l++;
			}
		else
		{
			s2[a6]=s[i];
		unsafe[a5][j]=need[i][j];
		unsafe[a5][j+1]=need[i][j+1];
		unsafe[a5][j+2]=need[i][j+2];
		a5++;
		a6++;	
		}
	}
	
	for(i=0;i<a5;i++)
	{
		j=0;
		if(unsafe[i][j]<=avail[l][j])
			{
				avail[l+1][j]=avail[l][j]+allo[i][j];
				avail[l+1][j+1]=avail[l][j+1]+allo[i][j+1];
				avail[l+1][j+2]=avail[l][j+2]+allo[i][j+2];
				seq[l][j]=allo[i][j];
				seq[l][j+1]=allo[i][j+1];
				seq[l][j+2]=allo[i][j+2];
				s1[l]=s2[i];
				l++;
				
			}	
		
 }
 if(l==m)
 {
 	printf("\n||--------------------------------------------||\n");
	printf(" 	   	   SYSTEM IN SAFE STATE \n");
	printf("||--------------------------------------------||\n");
	printf("\nSAFE SEQUENCE WILL BE...\t");
	for(i=0;i<l;i++)
	{
		printf("P%d\t",s1[i]);
	}
	printf("\n\n");
	printf("\nprocess    \tallocation\n\n");
	for(i=0;i<l;i++)
	{
		printf("P%d",s1[i]);
		for(j=0;j<3;j++)
		{
			printf("\t  \t%d  ",seq[i][j]);
		}
		
		printf("\n");
	}
}
else
printf("\nSYSTEM IS IN UNSAFE STATE...");

printf("\n\n||------------------------------------------------------------------------------------||\n");
printf("||------------------------------------------------------------------------------------||\n\n");
int A1;
while(1)
{
	printf("\n\nPLEASE ENTER YOUR CHOICE\n");
	printf("\nPRESS 1   : TO AGAIN ENTER IN SYSTEM CHECKING STATE\n");
printf("PRESS 2   : TO EXIT\n");
scanf("%d",&A1);
system("CLS");
switch(A1)
{
	case 1:
	
{			
	printf("\n\t\t***********************************************");
	printf("\n\t   \t \t \tBANKER'S ALGORITHM\n");
	printf(" \t\t ***********************************************\n\n");
			printf("\n||-----------------------------------------------------------------------------||\n");
			printf("||	\t\t	YOU ARE IN SYSTEM CHECKING  STATE\t       ||");
			printf("\n||-----------------------------------------------------------------------------||\n\n\n");
		int i,j,k,l,m,n;
		printf("PLEASE ENTER THE NO OF PROCESS TO INCLUDE IN THE SYSTEM : ");
		scanf("%d",&m);
		printf("\n\nPROCESSES ARE :\n\n");
			printf("--------------------------------\n");
		for(i=0;i<m;i++)
		{
		
			printf("||\tP%d with instance A,B,C\t ||\n",i+1);
			printf("||-------------------------------||\n");
		}
		int max[m][3],allo[5][3],need[5][3];
		int avail[5][3],seq[5][3],unsafe[4][5];
		int  s[]={1,2,3,4,5};
		int s1[5],s2[5];
		for(i=0;i<5;i++)
		{
			s2[i]=0;
		}

		for(i=0;i<m;i++)
	{
		for(j=0;j<3;j++)
		unsafe[i][j]=0;	
	}
	printf("\n||--------------||\n||\tSTEP 1:\t||\n||--------------||\n\n");
	printf("\n ENTER THE MAXIMUM RESOURSES FOR ALL PROCESSES WITH INSTANCES A,B,C RESPECTIVELY\n");
	
	for(i=0;i<m;i++)
	{
		int a=65;
		for(j=0;j<3;j++)
		{
		printf("\nenter maximum RESOURSES for the P%d process With %c :",i+1,a);
		scanf("%d",&max[i][j]);
		a++;
		}
	printf("\n----------------------------------------------------------------------\n");
	}
	printf("\nprocess\t maximum\n\n");
	for(i=0;i<m;i++)
	{
		printf("  p%d\t",i+1);
		for(j=0;j<3;j++)
	{
	
			printf("%d  ",max[i][j]);
	}
	printf("\n");
	}
	printf("\n||---------------------------------------------------------------------------------------------||\n");
	printf("\n||---------------------------------------------------------------------------------------------||\n");
		printf("\n\n\n\n\n||--------------||\n||\tSTEP 2:\t||\n||--------------||\n\n");
	printf("\nENTER THE ALLOCATION RESOURSES FOR ALL PROCESSES WITH INSTANCES A,B,C RESPECTIVELY\n");
	for(i=0;i<m;i++)
	{
		int a1=65;
		for(j=0;j<3;j++)
		{
		printf("\nenter the allocation for p%d process with instance %c :",i+1,a1);
		scanf("%d",&allo[i][j]);
		a1++;
		}
		printf("\n------------------------------------------------------------------\n");
	}
	printf("\nprocess\t\t maximum\t\tallocation");
	printf("\n");
	
	for(i=0;i<m;i++)
	{
		printf("\np%d\t    ",i+1);
		for(j=0;j<3;j++)
	{
			printf("  %d  ",max[i][j]);
	}
	printf("\t\t");
	for(k=0;k<3;k++)
	{
		printf("  %d  ",allo[i][k]);
	}
	
	printf("\n");
	}
	
	printf("\n||---------------------------------------------------------------------------------------------||\n");
	printf("\n||---------------------------------------------------------------------------------------------||\n");
	printf("\n\n\n\n\n||--------------||\n||\tSTEP 3:\t||\n||--------------||\n\n");
	printf("NEED MATRIX WILL BE :\n");
	printf("\nprocess  \tmaximum     \tallocation  \tNEED\n");
	for(i=0;i<m;i++)
	{
		printf("\np%d\t   ",i+1);
		for(j=0;j<3;j++)
		{
		need[i][j]=max[i][j]-allo[i][j];
		printf("  %d  ",max[i][j]);
		}
		printf("\t");
		for(j=0;j<3;j++)
		{
		printf("%d  ",allo[i][j]);
		}
		printf("\t");
		for(k=0;k<3;k++)
		{
		printf("%d  ",need[i][k]);
		}
		printf("\n");
	}
	printf("\n\nfrom the given process table AVAILABLE RESOURSES is :\n");
	avail[0][0]=3;
	avail[0][1]=3;
	avail[0][2]=2;
	int a22=65;
	for(i=0;i<1;i++)
	{
		for(j=0;j<3;j++)
		{
		printf("\nfor Instance %c : %d\n",a22,avail[i][j]);
		a22++;
		}
	}
	printf("\n\n");
		l=0;
		int a5=0,a6=0;
	for(i=0;i<m;i++)
	{
	
			j=0;
			
			if(need[i][j]<=avail[l][0]&&need[i][j+1]<=avail[l][1]&&need[i][j+2]<=avail[l][2])
			{
			
				avail[l+1][j]=avail[l][j]+allo[i][j];
				avail[l+1][j+1]=avail[l][j+1]+allo[i][j+1];
				avail[l+1][j+2]=avail[l][j+2]+allo[i][j+2];
				seq[l][j]=allo[i][j];
				seq[l][j+1]=allo[i][j+1];
				seq[l][j+2]=allo[i][j+2];
				s1[l]=s[i];
				l++;
			}
		else
		{
			s2[a6]=s[i];
		unsafe[a5][j]=need[i][j];
		unsafe[a5][j+1]=need[i][j+1];
		unsafe[a5][j+2]=need[i][j+2];
		a5++;
		a6++;	
		}
	}
	
	for(i=0;i<a5;i++)
	{
		j=0;
		if(unsafe[i][j]<=avail[l][j])
			{
				avail[l+1][j]=avail[l][j]+allo[i][j];
				avail[l+1][j+1]=avail[l][j+1]+allo[i][j+1];
				avail[l+1][j+2]=avail[l][j+2]+allo[i][j+2];
				seq[l][j]=allo[i][j];
				seq[l][j+1]=allo[i][j+1];
				seq[l][j+2]=allo[i][j+2];
				s1[l]=s2[i];
				l++;
				
			}	
		
 }
 if(l==m)
 {
 	printf("\n||--------------------------------------------||\n");
	printf(" 	   	   SYSTEM IN SAFE STATE \n");
	printf("||--------------------------------------------||\n");
	printf("\nSAFE SEQUENCE WILL BE...\t");
	for(i=0;i<l;i++)
	{
		printf("P%d\t",s1[i]);
	}
	printf("\n\n");
	printf("\nprocess    \tallocation\n\n");
	for(i=0;i<l;i++)
	{
		printf("P%d",s1[i]);
		
		for(j=0;j<3;j++)
		{
			printf("\t  \t%d  ",seq[i][j]);
		}
		
		printf("\n");
	}
}
else
{
printf("\nSYSTEM IS IN UNSAFE STATE...");
}
printf("\n\n||-----------------------------------------------------------------------||\n");

printf("||-----------------------------------------------------------------------||\n\n");
break;
}
case 2:
		{
			getch();
			exit(0);
			break;
		}
	}
}
getch();
return(0);
}
