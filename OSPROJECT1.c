#include<stdio.h>
#include<conio.h>
int main()
{	
	char a[7]="user123";
	 char c[7];
	 char u[4]="user";
	printf("\n\t       -----------------------------------------------");
	printf("\n\t   \t \t BANKER'S ALGORITHM\n");
	printf("\t       -----------------------------------------------\n\n");
	printf("PASSWORD  :  user123\n");
	printf("\nplease enter the System password  :");
	char ch;
	int i1;
	for(i1=0;i1<7;i1++)
	{
		ch=getch();
		c[i1]=ch;
		printf("*");
	}
	c[i1-1]='\0';
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
			printf("\n\nsuccessfully login\n");
			printf("\n||--------------------------------------------		||\n");
			printf("||		YOU ARE IN SYSTEM CHECKING  STATE	||");
			printf("\n||--------------------------------------------		||\n\n\n");
		}
		
		else
		{
			printf("\n\nsorry ! you have entered incorrect password\n");
			return(0);
		}
		
		
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
	return(0);
}