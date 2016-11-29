
#include <stdio.h>
#include <conio.h>
#include <Windows.h>
#include <time.h>
#include <stdlib.h>
 using namespace std;
int **make2d(int x, int y)
{
        int **ta = new int*[x];
        for(int i = 0; i < x; i++){
                ta[i] = new int [y];
                for(int j = 0; j < y; j++)
                        ta[i][j] = 0;
        }
        return ta;
}
void random(int ***cube, int x, int y, int z)
{
    srand(GetTickCount());
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            for (int k = 0; k < z; k++)
            {
                if ((rand() % 20) == 0)
                    cube [i][j][k] = 1;
            }
        }
    }
}
void print(int ** matrix, int p1, int p2)
{
    for (int i = 0; i < p1; i++)
    {
        for(int j = 0; j < p2; j++)
            printf ("%d ",matrix[i][j]);
        printf("\n");
    }
    printf("\n");
}
int *** make3d(int MX,int MY, int MZ)
{
    int *** xyz = new int**[MX];
 
    for (int i = 0; i < MX; i++)
    {
        xyz [i] = new int *[MY];
        for (int j = 0; j < MY; j++)
        {
            xyz [i][j] = new int [MZ];
            for (int k = 0; k < MZ; k++)
            {
                xyz [i][j][k] = 0;
            }
        }
    }
    return xyz;
}
void del2d(int ** a, int x)
{
        for(int i = 0; i < x; i++)
                delete[]  a[i];
        delete[] a;
        }
#define Ox 5
#define Oy 5
#define Oz 5
int main(void)
              {
int ***xyz;
xyz = make3d(5,5,5);
int **xy = make2d(Ox, Oy);
int **xz = make2d(Ox, Oz);
int **yz = make2d(Oy, Oz);
random(xyz,Ox,Oy,Oz); 

for(int x = 0; x < Ox; x++)
        for(int y = 0; y < Oy; y++)
                for(int z = 0; z < Oz; z++)
{
                        if(xyz[x][y][z] == 0) continue;
                        xy[x][y] = 1;
                        xz[x][z] = 1;
                        yz[y][z] = 1;
}
print(xy,Ox,Oy);
print(xz,Ox,Oz);
print(yz,Oy,Oz);
getch();
}
