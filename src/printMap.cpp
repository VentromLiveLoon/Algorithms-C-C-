#include"../headers/map.h"
#include"iostream"
using namespace std ;


void printMap(int **map,int xsize,int ysize)
{
    for(int i=0;i<xsize;i++)
    {
        for(int j=0;j<ysize;j++)
        {
            cout<<*(*(map+i)+j)<<"  ";
        }
        cout<<endl;
    }
}