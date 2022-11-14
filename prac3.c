#include<stdio.h>

int list[5],tos=-1,size=4,ch;
void main()
{
    void push();
    void display();
    void pop();
    void peep();
    void update();
   
    printf("\n1:Push Operation");
    printf("\n2:Display");
    printf("\n3:Pop Operation");
    printf("\n4:Peep Operation");
    printf("\n5:Update Operation");
    printf("\n0:Exit");
    do
    {
      printf("\nEnter The Above Choice:->");
      scanf("%d",&ch);
      switch(ch)
      {
    case 0:
           exit(0);
       case 1:
           push();
           break;
       case 2:
           display();
           break;
       case 3:
           pop();
           break;
       case 4:
           peep();
           break;
       case 5:
          update();
          break;
     }
     }
     while(ch!=0);
}
void push()
{
   int value;
   if(tos>=size)
   {
     printf("\nThe Stack is Overflow...");
     return;
   }
   else
   {
      printf("\nEnter The Value:->");
      scanf("%d",&value);
      tos=tos+1;
      list[tos]=value;
   }
}
void display()
{
   int i;
   if(tos==-1)
   {
     printf("\nThere is Element not Avaible...");
     return;
   }
   else
   {
      for(i=0;i<=tos;i++)
      printf("\nThe Element is:->%d",list[i]);
   }
}
void pop()
{
  if(tos==0)
  {
    printf("\nThe stack is Underflow...");
    return;
  }
  else
  {
    tos=tos-1;
   printf("\nElement Delete Successfull.....");
 }
}
void peep()
{
   int s;
   printf("\nEnter Position for search:->");
   scanf("%d",&s);
   if(tos-s<=-1)
   {
      printf("\nThe Stack is Overflow...");
      return;
   }
   else
   {
     printf("\nThe Element is:->%d",list[tos-s]);
   }
}

void update()
{
   int it1,it2;
      printf("\nEnter Position for change:->");
     scanf("%d",&it1);
     printf("\nEnter Number For Update:->");
     scanf("%d",&it2);
   if(tos-it1<=-1)
   {
      printf("\nThe Stack Underflow...");
      return;
   }
   else
   {


     list[tos-it1]=it2;
     printf("\nUpdte Successfull.....");

   }
}
