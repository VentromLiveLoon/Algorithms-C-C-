#include"iostream"
#include"../headers/map.h"
#define XSIZE 10
#define YSIZE 10
int main()
{

    int **map = getMap(XSIZE,YSIZE);
    map[3][4]=Wall;
    map[2][7]=Destination;


    printMap(map,XSIZE,YSIZE);

    ds(map,XSIZE,YSIZE,0,0);
    
    printMap(map,XSIZE,YSIZE);


    freeMap(map,XSIZE,YSIZE);
    return 0;
}