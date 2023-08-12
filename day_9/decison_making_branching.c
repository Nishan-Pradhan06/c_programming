// decision making and branching 
/*
1 if statement                      ---|
    |    2 switch statement         ---|    conditaional statement     
    |       3 condition statement   ---|
    |           4 go to statement   ---> unconditinal statement
    |
    |--1 simple if syntax 
                if(condition)
                {
                     do something;
                }
    -- 2 if else
            syntax if(conditions)
                    {
                        statement-block-1;
                    }
                    else{
                        statement-block-2;
                    }
    -- 3 else if ladder
            syntax if(conditions)
                    {
                        statement-block-1;
                    }
                    else if (condition 2)
                    {
                        statement-block-2;
                    }
                    else if (condition 3)
                    {
                        statement-block-3;
                    }
                    else
                    {
                        statement block - n;

                    }
    -- 4 nested if



*/
//wap to input mark of a subject and provide additional grace mark if the score is below 40
#include<stdio.h>
#include<conio.h>
int main(){
    int marks;
    printf("enter your marks: ");
    scanf("%d",&marks);
    if (marks<40)
    {
        /* code */
        marks+=5; //adding 5 in marks
    }
    printf("Your Score is %d",marks);
    return 0;
    
}
