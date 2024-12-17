#include<stdio.h>
int main(){
    int lArea,wArea,lTile,wTile;
    printf("Enter the Length and Width of Surface");
    scanf("%d %d",&lArea,&wArea);
    
    printf("\nEnter the Length and Width of Tile");
    scanf("%d %d",&lTile,&wTile);

    int length=lArea/lTile;
    int width=wArea/wTile;

    printf("Number Of Tiles=%d",length*width);
    
    return 0;
}