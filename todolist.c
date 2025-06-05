#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define MAX_LEN 100
#define FILE_NAME "todo.txt"

void add_task()
{
    char task[MAX_LEN];
    printf("Enter the task: ");
    fgets(task,MAX_LEN,stdin);
    task[strcspn(task,"\n")]=0;
    FILE *fp;
    fp=fopen(FILE_NAME,"a");
    if (fp==NULL)
    {
        printf("Failed to open file");
        return;
    }
    fprintf(fp,"%s\n",task);
    fclose(fp);
    printf("Task added\n");
}
void view_task()
{
    char task[MAX_LEN];

    FILE *fp;
    fp=fopen(FILE_NAME,"r");
    if (fp==NULL)
    {
        printf("\nNO task found");
        return;
    }
    printf("\nto do list");
    int count=1;
    while (fgets(task,MAX_LEN,fp))
    {
        task[strcspn(task, "\n")]= 0;
        printf("\n%d. %s", count++, task);
    }


    fclose(fp);
    printf("\nTask Displayed");
}
int main()
{
    int choice;
    while(1)
    {
        printf("Select The operation:");
        printf("\n1.Add task");
     //   printf("2.Delete task");
        printf("\n3.View task");
      //  printf("4.Save and Exit");
        printf("\n4.Save and Exit");
        printf("\nSelect your Choice: ");

        scanf("%d",&choice);
        getchar();
        switch(choice)
        {
        case 1:
            add_task();
            break;
       // case 2:
          //  delete_task();
         //   break;
        case 3:
            view_task();
            break;
        case 4:
            exit(0);
        default:
            printf("Enter the valid choice");

        }
    }
}
