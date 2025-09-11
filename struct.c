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
typedef struct{
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
printf("%d\n",user2.id);



}
