 #include<stdio.h>
 struct student
 {
     char name[20];
     int age;
     char dob[15];
     char degree[10];
     char batch[15];
     char current_year[10];
}stu;
int main()
{
    printf("Enter your name: ");
    scanf(" %[^\n]", stu.name);
    printf("Enter your age: ");
    scanf("%d",&stu.age);
    printf("Enter Your DOB: ");
    scanf(" %[^\n]",stu.dob);
    printf("Enter your Degree: ");
    scanf(" %[^\n]",stu.degree);
    printf("Enter your Batch: ");
    scanf(" %[^\n]",stu.batch);
    printf("Entere the Current Year: ");
    scanf(" %[^\n]",stu.current_year);

    //output
    printf("\nNAME:%s",stu.name);
    printf("\nAGE :%d",stu.age);
    printf("\nDOB :%s",stu.dob);
    printf("\nDEGREE:%s",stu.degree);
    printf("\nBATCH:%s",stu.batch);
    printf("\nCURRENT YEAR:%s",stu.current_year);


}
