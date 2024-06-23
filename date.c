#include<stdio.h>
 void date(int days,int *dd,int *mm,int *yy)
 {
    *dd=*dd+days;
      if((*mm==1 || *mm==3 || *mm==5 || *mm==7 || *mm==8 || *mm==10) && *dd>31)
        {
           *dd=*dd-31;
           *mm=*mm+1;
        }
      if((*mm==4 || *mm==6 || *mm==9 || *mm==11) && *dd>30)
        {
           *dd=*dd-30;
           *mm=*mm+1;
        }  
      if((*mm==12) && *dd>31) 
       {
          *dd=*dd-31;
          *yy=*yy+1;
          *mm=1;
       }
      if((*mm==2) && *dd>29)
        if(*yy%4==0)
         {
            *dd=*dd-29;
             *mm=*mm+1;
         }  
      if((*mm==2) && *dd>28)
        if(*yy%4!=0)
         {
            *dd=*dd-28;
             *mm=*mm+1;
         }           
 }  
   int main()
{
   int days,dd,mm,yy;
      printf("Enter date in dd= ");
        scanf("%d",&dd);
     printf("Enter date in mm= ");
        scanf("%d",&mm); 
    printf("Enter date in yy= ");
        scanf("%d",&yy);
    printf("Enter no of days to add= ");
        scanf("%d",&days);  
     date(days,&dd,&mm,&yy);  
    printf("New date= %d-%d-%d",dd,mm,yy);                 
}   
