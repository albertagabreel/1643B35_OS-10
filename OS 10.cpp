#include<stdio.h>
int a;
void program()
{
	int choice,m,n,x,v,start,i,j,pos,min,a[20],count;
     count=0;
     
     printf("\nEnter the number of cylinders :");
     scanf("%d",&m);
     printf("\nEnter the number of requests :");
     scanf("%d",&n);
     printf("\nEnter previous request position:");
     scanf("%d",&v);
     printf("\nEnter current position :");
     scanf("%d",&start);
     printf("\nEnter the request queue :");
     for(i=0;i<n;i++)
                     {
					 scanf("%d",&a[i]);
                      if(a[i]>=m)
                                 {
								 printf("\ninvalid input");
                                  scanf("%d",&a[i]);
                                  }
                      }
    
       printf("Data is recorded.........\n\nKindly select the option");
       printf("\n\nDISK SCHEDULING ALGORITHMS\n1. FCFS\n OR \nPRESS ANY KEY TO EXIT");
       printf("\nEnter choice :");
        scanf("%d",&choice);
        count=0;
        x=start;
        switch(choice)
                      {
					  case 1:    
					      printf("\t\t\t\t\t********WELCOME TO DISK SCHEDULING ALGORITHM OF FCFS**********\n\n");
                                           
                              printf("Scheduling services the request in the order that follows:\n%d\t",start);
                              for(i=0;i<n;i++)
                                              {
											  x-=a[i];
                                               if(x<0)
                                                      x=-x;
                                               count+=x;
                                               x=a[i];
                                               printf("%d\t",x);
                                               }
                              printf("\nTotal distance (in cylinders) is :%d ",count);
                              break;
                              	default:
				printf("EXIT\n");
				break;
                       }
       
        
    }
                                     

