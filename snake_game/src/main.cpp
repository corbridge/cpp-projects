#include <iostream>
#include <windows.h>

int height = 20;
int width = 70;

int SnakePosition_width = 1;
int SnakePosition_height = 4;

void GameBuffer();

int main()
{
    std::cout<<"TE AMO CON TODO MI CORAZON OKSANITA"<<std::endl;

    bool end = false;
    char key;
    int move;
    
    while(!end)
    {
        // std::cin>> key;

        // switch(key)
        // {
        //     case 'A':
        //         move = 1;
        //         break;
        //     case 'S':
        //         move = 2;
        //         break;
        //     case 'D':
        //         move = 3;
        //         break;
        //     case 'W':
        //         move = 4;
        //         break;

        // }

        GameBuffer();

        if(GetKeyState('E') & 0x8000/*Check if high-order bit is set (1 << 15)*/)
        {
            end = true;
        }
    }
}

void GameBuffer()
{
    system("cls");
    for(int i = 0; i < width; i++)
    {
        std::cout<<"-";
        if (i == width - 1)
        {
            std::cout<<"\n";
        }
    }

    for(int j = 0; j < height; j++)
    {
        for(int i = 0; i < width; i++)
        {
            if(i == 0)
            {
                std::cout<<"|";
            }
            else if (i == width - 1)
            {
                std::cout<<"|\n";
            }
            else if(i + 1 == SnakePosition_width + 1 && j == SnakePosition_height)
            {
                std::cout<<"0";
            }
            else
            {
                std::cout<<" ";
            }
        }
    }

    for(int i = 0; i < width; i++)
    {
        std::cout<<"-";
        if (i == width - 1)
        {
            std::cout<<"\n";
        }
    }

}