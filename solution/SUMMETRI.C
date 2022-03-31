/* write a program to creat to 3 by 3 metrix and print the sum it
date:18\2\2022 */
#include<stdio.h>
#include<conio.h>
void main()
{
  int a[3][3],i,j,m1,m2;
  clrscr();
  for(i=0;i<3;i++) //this loop for row
  {
    for(j=0;j<3;j++) //for column
    {
     printf("\n enter value for a[%d]a[%d]:",i,j);
     scanf("%d",&a[i][j]);
    }
   }
   //logic: print 2D array
   for(i=0;i<3;i++) //row
   {
    for(j=0;j<3;j++)//column
       printf("%d\t",a[i][j]);
       printf("\n");
    }
    //print sum array
    for(i=0;i<3;i++)
    {
      for(j=0;j<3;j++)
      {
       printf("\n enter value for m1[%d]m1[%d]:",i,j);
       scanf("%d",&m1[i][j]);
       }
       for(i=0;i<3;i++)
       {
	for(j=0;j<3;j++)
	{
	 printf("\n enter value m2[%d]m2[%d]:",i,j);
	 scanf("%d",&m2[i][j]);
	 }
	}
      getch();
 }
