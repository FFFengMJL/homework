#include<stdio.h>
char map[12][12]={
    {"***********"},
    {"*XXXXH    *"},
    {"*         *"},
    {"*         *"},
    {"*         *"},
    {"*         *"},
    {"*         *"},
    {"*         *"},
    {"*         *"},
    {"*         *"},
    {"*         *"},
    {"***********"}
};

int main(){
    for(int y=0;y<12;y++){
        for(int x=0;x<12;x++){
            if(map[x][y] == 'X' || map[x][y] == 'H'){
                printf("%d %d\n",x,y);
            }
        }
    }
}