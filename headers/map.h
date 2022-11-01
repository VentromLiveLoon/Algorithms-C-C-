#define Wall 1
#define Route 0
#define Destination 5
#define Marke 2



void printMap(int **map,int xsize,int ysize);
int **getMap(int xsize,int yszie);
int **freeMap(int **map,int xsize,int yszie);
void ds(int **map,int xsize,int ysize,int x,int y);