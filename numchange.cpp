#include <iostream>
using namespace std;

void numchange(int num[10][10] ,int x,int y) {
    int i = 0,j = 0,k = 0;
    int temp = 0;
    for(i = 0;i<x;i++)
    {
        for ( j = 0; j < y; j++)
        {
            temp = num[i][j];
            num[i][j] = num[j][i];
            num[j][i] = temp;
        }
        for ( k = 0; k < y; k++)
        {
            cout<<num[i][k]<<" ";
        }
        cout<<endl;
    }
    
}
int main(){
    int p[10][10] = {0};
    int i = 0,j = 0;
    int x = 0,y = 0;
    cout<<"请输入行数和列数"<<endl;
    cin>>x>>y;
    cout<<"请输入第一行矩阵数"<<endl;
    for(i = 0;i<x;i++)
    {
        for ( j = 0; j < y; j++)
        {
            cin>>p[i][j];
        }
        cout<<"请输入下一行矩阵数"<<endl;
    }
    numchange(p,x,y);
    return 0;
}