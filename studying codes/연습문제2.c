#include <stdio.h>

int map [5][5] = {
    0,0,0,0,0,
    0,0,0,1,0,
    0,1,0,0,0,
    0,0,0,1,0,
    0,0,0,0,0
};
int xy[2][9];

void maze(int x, int y, int z);

int main(void)
{
    maze(0,0,0);
    return 0;
}

void maze(int x, int y, int z)
{
    int i;
    xy[0][z]=x;
    xy[1][z]=y;
        if(x==4 && y==4)
    {
        for(i=0;i<9;i++)
            printf("(%d,%d) ",xy[0][i],xy[1][i]);
        puts("");
        return;
    }
    else   
    {
        if(map[x][y+1]==0 && y+1<=4)
            maze(x,y+1,z+1);
        if(map[x+1][y]==0 && x+1<=4)
            maze(x+1,y,z+1);
    }
}