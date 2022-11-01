
#include"iostream"
using namespace std ;

#include"../headers/map.h"

void ds(int **map,int xsize,int ysize,int x,int y)
{
    // 如果x，y越界了，直接返回
    if(x<0 || y<0 || x>xsize-1 || y>ysize-1)
    {
        return;
    }
    else
    // 如果遇到了墙，直接返回
    if(*(*(map+x)+y)==Wall)
    {
        return;
    }
    else
    // 如果这里已经浏览过了，直接返回
    if(*(*(map+x)+y)==Marke)
    {
        return;
    }
    else
    // 如果到达了最终的目的地直接退出。
    if(*(*(map+x)+y)==Destination)
    {
        cout<<"Yes i find it"<<"Position is::"<<x<<":"<<y<<endl;
        return;
    }
    else
    {
        // 标记当前节点
        *(*(map+x)+y)=Marke;
        // 向右走
        ds(map,xsize,ysize,x+1,y);
        // 向左走
        ds(map,xsize,ysize,x-1,y);
        // 向下走
        ds(map,xsize,ysize,x,y+1);
        // 向上走
        ds(map,xsize,ysize,x,y-1);
    }

}