//打印上半金字塔
#include <stdio.h>	
void uppyramid()	
{	
  int i,j,rows;	
  printf("Enter the number of rows: ");	
  scanf("%d",&rows);	
  for(i=1;i<=rows;++i)	
  {	
    for(j=1;j<=i;++j)	
    {	
      printf("* ");	
    }	
    printf("\n");	
  }	
  return 0;	
}

//打印整金字塔
void wholepyramid()	
{	
  int i,space,rows,k=0;	
  printf("Enter the number of rows: ");	
  scanf("%d",&rows);	
  for(i=1;i<=rows;++i)	
  {	
    for(space=1;space<=rows-i;++space)	
    {	
       printf("  ");	
    }	
    while(k!=2*i-1)	
    {	
       printf("* ");	
       ++k;	
    }	
    k=0;	
    printf("\n");	
  }	
  return 0;	
}

int main(){
  void uppyramid();
  void wholepyramid();
  return 0;
}
