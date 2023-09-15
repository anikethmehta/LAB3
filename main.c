/*
Name:Aniketh Mehta
PRN:23070147002

Project:aniketh
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//void swap(int *m,int *n);
/*struct stud_rec
    {
        char name[20];
        char gender;
        long PRN;
        int DOB[3];
    };*/

/*struct student
{
    char name[50];
    char gender;
    int students;
    float marks;
    long PRN;
    int DOB[3];
};*/


/*char *digit_str[9]={"one","two","three","four","five","six","seven","eight","nine"};
char *2digit_str[10]={"ten","eleven","twelve","thirteen","fourteen","fifteen","sixteen","seventeen","eighteen","nineteen"};*/
int main()
{
    //LAB2 ,basics
    /*int i,k,g;
    float j;
    char a;
    i=5;
    j=8.0;
    k=9;
    a='b';
    printf("The value of i is %d & value of j is %f & value of k is %d\n",i,j,k);
    printf("size of int is %d\n",sizeof(i));
    printf("size of float is %d\n",sizeof(j));
    printf("size of char is %d\n",sizeof(a));
    printf("sum of i & k is %d\n",i+k);
    printf("enter the value of g\n");
    scanf("%d",&g);
    printf("value of g is %d",g);*/

    //Table of a number
    /*int n;
    printf("enter the number:");
    scanf("%d",&n);
    for(int i=1;i<=10;i++)
    {
        printf("%d*%d=%d\n",n,i,n*i);
    }*/

    //enter marks of a subject
    /*int marks;
    printf("enter your marks:");
    scanf("%d",&marks);
    if(marks>90)
    {
        printf("Grade O");
    }
    else if(marks>85&&marks<90)
    {
        printf("Grade A+");
    }
    else if(marks>75&&marks<85)
    {
        printf("Grade A");
    }
    else if(marks>65&&marks<75)
    {
        printf("Grade B+");
    }
    else if(marks>55&&marks<65)
    {
        printf("Grade B");
    }
    else if(marks>50&&marks<55)
    {
        printf("Grade C");
    }
    else if(marks>40&&marks<50)
    {
        printf("Grade P");
    }
    else if(marks<40)
    {
        printf("Grade F");
    }*/


    /*int i=32569,j=69358;
    int p=i&j;
    int q=i|j;
    int r=i^j;
    int s=~i;
    printf("i&j=%d\ni|j=%d\ni^j=%d\n~i=%d",p,q,r,s);*/



    /*int x,bit_pos;
    printf("enter the value of x:");
    scanf("%d",&x);
    printf("enter the value of bit_pos:");
    scanf("%d",&bit_pos);
    printf ("x=%d pos=%d\n",x,bit_pos);
    if((x&(1<<bit_pos))==(1<<bit_pos))
    {
        printf("bit is set");
    }
    else
    {
        printf("bit is not set");
    }*/



    /*int x=5,bit_pos=6;
    x=x^(1<<bit_pos);
    printf("%d",x);*/


    //maximum and minimum using array
    /*int arr[100];
    int min,max,n;
    printf("enter the value of n:");
    scanf("%d",&n);
    printf("enter the marks of n students:");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    min=arr[0];
    int index_min=0;
    max=arr[0];
    int index_max=0;
    for(int i=1;i<n;i++)
    {
        if(min>arr[i])
        {
            min=arr[i];
            index_min=i;
        }
        if(max<arr[i])
        {
            max=arr[i];
            index_max=i;
        }
    }
    printf("minimum marks is:%d and min marks index is %d\n",min,index_min);
    printf("maximum marks is:%d and max marks index is %d",max,index_max);*/


    // triangle pattern
    /*int r,c,n=1;
    for(r=0;r<4;r++)
    {
        for(c=0;c<7;c++)
        {
            if(c <(3-r)|| c>(3+r))
            {
                printf("  ");
            }
            else
            {
                printf("%d ",n++);
            }
        }
        printf("\n");
    }*/

    //multi dimension array
    /*int matA[2][3]={1,5,6,3,9,-2};
    int matB[2][3]={1,2,3,4,5,6,};
    int r,c;
    int matC[2][3];
    printf("matrix A=\n");
    for(r=0;r<2;r++)
    {
        for(c=0;c<3;c++)
        {
            printf("%d ",matA[r][c]);
        }
        printf("\n");
    }
    printf("matrix B=\n");
    for(r=0;r<2;r++)
    {
        for(c=0;c<3;c++)
        {
            printf("%d ",matB[r][c]);
        }
        printf("\n");
    }
    printf("matrix A+B=\n");
    for(r=0;r<2;r++)
    {
        for(c=0;c<3;c++)
        {
            matC[r][c]=matA[r][c]+matB[r][c];
            printf("%d ",matC[r][c]);
        }
        printf("\n");
    }*/


    //Pointers
    /*int i=5,*int_ptr;
    printf("value of i =%d\n",i);
    printf("address of i =%p\n",&i);
    int_ptr=&i;
    printf("address is %p\n",int_ptr);
    printf("value is %d",*int_ptr);*/

    //swaping two nos
    /*int i=5,j=8;
    printf("before swapping value of i=%d & j=%d\n",i,j);
    swap(&i,&j);
    printf("after swapping value of i=%d & j=%d",i,j);*/

    //Structures
    /*struct stud_rec s1={"Aniketh Mehta"};
    struct stud_rec s2={"M"};
    struct stud_rec s3={"002"};
    struct stud_rec s4={"10/10/1999"};
    printf("1 student name is %s\n",s1.name);
    printf("1 student gender is %s\n",s2.gender);
    printf("1 student PRN is %s\n",s3.PRN);
    printf("1 student DOB is %s/%s/%s",s4.DOB[0],s4.DOB[1],s4.DOB[2]);*/

    //triangle pattern
    /*int r,c,n=1;
    for(r=0;r<4;r++)
    {
        for(c=0;c<7;c++)
        {
            if((c<(3-r)) || (c>(3+r)))
            {
                printf("  ");
            }
            else
            {

                printf("%d ",(n*(c-7/2))+1);
            }
        }
        printf("\n");
    }*/

    //reverse triangle pattern
    /*int r,c,n=1;
    for(r=0;r<4;r++)
    {
        for(c=0;c<7;c++)
        {
            if(c<r || c>((5-r)+1))
            {
                printf("  ");
            }
            else
            {

                printf("%d ",n);
            }
        }
        printf("\n");
    }*/



    //structures practice
    //DOB
    /*struct stud_rec student;
    student.DOB[0]=10;
    student.DOB[1]=10;
    student.DOB[2]=1999;
    printf("DOB is %d/%d/%d",student.DOB[0],student.DOB[1],student.DOB[2]);*/

    //PRN
    /*struct stud_rec student;
    student.PRN=23070147002;
    printf("PRN of student is %ld",student.PRN);*/

    //gender
    /*struct stud_rec student;
    student.gender='M';
    printf("gender of student is %c",student.gender);*/

    //name
    /*struct stud_rec student={"Aniketh Mehta"};
    printf("name is %s",student.name);*/




    /*struct student
    {
        int rollno;
        int year;
        int tmarks;
    };

    struct student class[40]={{001,2011,786},{003,2012,710}};
    printf("roll no is %d",class[1].rollno);*/


    /*struct student s[10];
    int i;
    printf("Enter information of students:\n");
    for(i=0;i<10;++i)
    {
        s[i].students=i+1;
        printf("for student %d\n",s[i].students);

        printf("Enter name: ");
        scanf("%s",s[i].name);

        printf("Enter your DOB");
        scanf("%d %d %d",&s[i].DOB[0],&s[i].DOB[1],&s[i].DOB[2]);
        printf("The date of birth is %d/%d/%d\n",s[i].DOB[0],s[i].DOB[1],s[i].DOB[2]);


        printf("Enter marks: \n");
        scanf("%f",&s[i].marks);


        printf("enter the PRN number\n");
        scanf("%ld",&s[i].PRN);
        printf("The Entered PRN number is %ld\n",s[i].PRN);

        printf("Enter your Gender\n");
        scanf(" %c",&s[i].gender);
    }*/


    //pointer to a structure
    /*struct stud_rec s1={"Aniketh Mehta"};
    char name=print(&s1);
    printf("name is %s",name);*/


    //Strings
    /*char *str="symbiosis";
    int len;
    for(int i=1;i<11;i++)
    {
        if(*str=='\0')
            break;
        *str++;
        len=i;
    }
    printf("length of string is %d",len);*/



    /*//strings practical
    int n;
    printf("enter the single digit number:");
    scanf("%d",&n);
    printf("%s",digit_str[n-1]);*/

    //LAB1 printing hello world in c language
    //printf("Hello World!");


    return 0;
}

/*char print(struct stud_rec *s)
{
    s->name;
}*/


/*void swap(int *m,int *n)
{
    int temp;
    temp=*m;
    *m=*n;
    *n=temp;
    return;
}*/
