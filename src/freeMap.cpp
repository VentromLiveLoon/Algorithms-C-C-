int **freeMap(int **map,int xsize,int yszie)
{
    
    for(int i=0;i<yszie;i++)
    {
        delete *(map+i);
    }
    delete map ;

    
    return map;
}