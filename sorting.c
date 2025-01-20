#include <stdio.h>
 
void main(void)
{
    int Tab[10]= { 1, 7 , 6 , 9, 3, 8, 5, 2, 4, 10 };
    printf("array size = %d \n", sizeof(Tab)/sizeof(Tab[9]));
    for(int i=0;i<10;i++){
        printf("Tab-i[%d] = %d\n",i,Tab[i]);
        for(int j=i;j<10;j++){
            printf("-----> Tab-J[%d] = %d | (Tab[j] < Tab[i]) = %d\n",j,Tab[j],Tab[j] < Tab[i]);
            if(Tab[j] > Tab[i]){
                int temp = Tab[i];
                Tab[i] = Tab[j];
                Tab[j] = temp;
            }
        }
        printf("--> Tab-i[%d] = %d\n",i,Tab[i]);
    }
    
    for(int k=0;k<10;k++){
        printf("Tab[%d] = %d\n",k+1,Tab[k]);
    }
}