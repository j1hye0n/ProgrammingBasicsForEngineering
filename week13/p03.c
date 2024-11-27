#include <stdio.h>

#define STUDENTNUM 4

struct student{
    int id;
    int score;   
};

void main (void){
    struct student s1[STUDENTNUM];
    
    int i,sum=0,highest=0;
    for(i=0;i<STUDENTNUM;i++)
    {
        printf("Input the ID: ");
        scanf("%d",&s1[i].id);
        printf("Input the score: ");
        scanf("%d",&s1[i].score);
        sum += s1[i].score;
    }

    for(i=1;i<STUDENTNUM;i++)
    {
    	if (s1[i].score > s1[highest].score)
    		{
    			highest=i;
			}
	}

    printf("The average of the score: %.6f\n",(double)sum/STUDENTNUM);
    printf("The highest score - ID: %d, score: %d",s1[highest].id,s1[highest].score);
}
