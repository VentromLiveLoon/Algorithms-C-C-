int **getMap(int xsize,int yszie)
{
    int **map = new int *[xsize];
    for(int i=0;i<yszie;i++)
    {
        *(map+i)=new int [10];
    }

    return map;
}