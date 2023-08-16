#include <stdio.h>

int main(void)
{
    int shkk,coke,chupa;
    for(shkk=1;shkk<10;shkk++)
    {
        for(coke=1;coke<10;coke++)
        {
            for(chupa=1;chupa<30;chupa++)
            {
                if(shkk*900+coke*750+chupa*200==5000)
                {
                    printf("새우깡 %d개, 콜라 %d개, 츄파춥스 %d개\n",shkk,coke,chupa);
                    break;
                }
            }
        }
    }
    return 0;
}