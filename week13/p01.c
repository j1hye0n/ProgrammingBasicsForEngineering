#include <stdio.h>

/*cal_diary.c can be deleted*/

struct student{
    int id;
    char name[50];
    float grade;   
};

int main (void){
    struct student s1={2211392,"jojihyeon",4.3};
    
    s1.id = 22;
    strcpy(s1.name,"jihyeon");
    s1.grade = 4.3;

    printf("ID : %d\n",s1.id);
    printf("name : %s\n", s1.name);
    printf("grade : %.6f\n",s1.grade);
    
    return 0;
}
