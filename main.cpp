#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <windows.h>
#include <time.h>
#include <conio.h>

using namespace std;

int map[100];
int main()
{int player=0,food1,food2,food3,wall1,wall2,points=0;
    srand(time(NULL));
    food1=rand()%80;
    food2=rand()%80;
    food3=rand()%80;
    wall1=rand()%80;
    wall2=rand()%80;
    map[food1]=2;
    map[food2]=2;
    map[food3]=2;
    map[wall1]=3;
    map[wall2]=3;
    map[player]=1;
    for(int i=0;i<80;i++)
        cout<<map[i];
    while(true)
    {
        if(kbhit()==0)
        {
            char key=getch();
            if(key=='d')
            {
                map[player]=0;
                player++;
                if(map[player]==2)
                    points+=100;
                if(map[player]==3)
                    points-=100;
            }
            system("cls");
            for(int i=0;i<80;i++)
                cout<<map[i];
            cout<<"\n"<<points<<"\n";
            if(key=='e')
                return 0;
            if(player>=80)
            {
                food1=rand()%80;
                food2=rand()%80;
                food3=rand()%80;
                wall1=rand()%80;
                wall2=rand()%80;
                map[food1]=2;
                map[food2]=2;
                map[food3]=2;
                map[wall1]=3;
                map[wall2]=3;
                map[player]=1;
                system("cls");
                for(int j=0;j<80;j++)
                    cout<<map[j];
            }
        }


    }
    return 0;
}
