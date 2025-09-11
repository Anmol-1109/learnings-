#include <stdio.h>
#include <string.h>
int main(){
/*    struct player {
        char name[12];
        int score;

    };

struct player player1;
struct player player2;
strcpy(player1.name, "bro");
player1.score = 4;
strcpy(player2.name, "me");
player2.score=5;
printf("%s\n",player1.name);
printf("%d",player2.score);*/



/*typedef struct{
    char name[20];
    char password[10];
    int id;
}user;
user user1={"bro","password",123456};
user user2={"me","my id",110906};
printf("%s\n",user1.name);
printf("%s\n",user1.password);
printf("%d\n",user1.id);
printf("%s\n",user2.name);
printf("%s\n",user2.password);
printf("%d\n",user2.id);*/


struct student{
    char name[20];
    float gpa;
};
struct student student1={"annu",5.1};
struct student student2={"me",7.1};
struct student student3={"myself",8.0};
struct student students[]={student1,student2,student3};
for(int i = 0;i<sizeof(students)/sizeof(students[0]);i++){
    printf("%s\n",students[i].name);
     printf("%.2f\n",students[i].gpa);
}





}
