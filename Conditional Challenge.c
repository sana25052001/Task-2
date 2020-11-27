#include <stdio.h>

int main()
{
int a;
printf("Enter the marks between:\n");
scanf("%d",&a);
printf("marks entered are:%d\n",a);
   if (a>=85)
   {
       printf("Grade A\n");
   }
   else if (a>=70)
   {
    printf("Grade B\n");
   }
   else if(a>=55)
   {
    printf("Grade C\n");
   }
   else if (a>=40)
   {
    printf("Grade D\n");
   }
   else if (a<40)
   {
    printf("Grade F\n");
   }
    return 0;
}
