#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct employe
{
    char name[30];
    unsigned int employe_id;
    char roll[30];
    char address[100];
    float salary;
    char date_of_joinning[30];

};
void add_employe()
{
    struct employe emp;
    char employe[100];
    printf("Enter Employe name: ");
    scanf(" %[^\n]",emp.name);
    getchar();
    printf("Employe ID:");
    scanf("%u",&emp.employe_id);
    getchar();
    printf("Enter the Roll:");
    scanf(" %[^\n]",emp.roll);
    getchar();
    printf("Enter the address:");
    scanf(" %[^\n]",emp.address);
    getchar();
    printf("Enter the salary:");
    scanf("%f",&emp.salary);
    getchar();
    printf("Enter the Date of Joining:");
    scanf(" %[^\n]",emp.date_of_joinning);
    getchar();

    FILE *fp;
    fp=fopen("employe_management.txt","a");
    if(fp==0)
    {
        printf("NO FILE FOUND");
        return;
    }
    fprintf(fp,"%s\n%u\n%s\n%s\n%0.2f\n%s",emp.name,emp.employe_id,emp.roll,emp.address,emp.salary,emp.date_of_joinning);
    fclose(fp);
    printf("\n--Details Added--");


}
void view_employe()
{
    struct employe emp;
    FILE *fp;
    fp=fopen("employe_management.txt","r");
    if(fp==0)
    {
        printf("\nNO FILE FOUND");
        return;
    }
    char records[100];
    int count=1;
    while(fgets(records,sizeof(records),fp))
    {
        printf("\n%d.%s",count++,records);
    }
    fclose(fp);
}
void delete_employe()
{
    struct employe emp;
    unsigned int delete_id;
    int found=0;
    printf("\nEnter Employe ID:");
    scanf("%d",&delete_id);
    FILE *fp=fopen("employe_management.txt","r");
    FILE *temp=fopen("temp.txt","w");
    if(fp==NULL||temp==NULL)
    {
        printf("\nError in opening file");
        return;
    }
    while(fscanf(fp,"%s %u %s %s %f %s",emp.name,emp.employe_id,emp.roll,emp.address,emp.salary,emp.date_of_joinning)!=EOF)
    {
        if(emp.employe_id != delete_id)
        {
            fprintf(temp,"%s %u %s %s %f %s",emp.name,emp.employe_id,emp.roll,emp.address,emp.salary,emp.date_of_joinning);
        }
        else
        {
        found=1;
        }
    }
    fclose(fp);
    fclose(temp);
    remove("employe_management.txt") ;
    rename("temp.txt","employe_management.txt");
    if (found)
    {
        printf("Employe Id %d deleted",delete_id);
    }
    else
    {
        printf("Employe Id %d not found",delete_id);
    }
}
int main()
{
    int choice;
     while(1)
    {
    printf("--EMPLOYE MANAGEMENT--\n");
    printf("1.ADD EMPLOYE\n");
    printf("2.VIEW EMPLOYE\n");
    printf("3.DELETE EMPLOYE\n");
    printf("4.SAVE & EXIT\n");
    printf("Enter Your Choice:");
    scanf("%d",&choice);

    switch(choice)
    {
        case 1:
        add_employe();
        break;
        case 2:
        view_employe();
        break;
        case 3:
        delete_employe();
        break;
        case 4:
        exit(0);
        break;
        default:
        printf("Please enter the valid option--");
        break;

    }
    }

}
