#include<stdio.h>
void add_employe()
{

}
void view_employe()
{

}
void delete_employe()
{

}
int main()
{
    int choice;
    printf("--EMPLOYE MANAGEMENT--\n");
    printf("1.ADD EMPLOYE\n");
    printf("2.VIEW EMPLOYE\n");
    printf("3DELETE EMPLOYE\n");
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
        default:
        printf("Please enter the valid option--");
        break;

    }

}