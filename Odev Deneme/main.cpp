//
//  main.cpp
//  Odev Deneme
//
//  Created by Veysel on 3.10.2018.
//  Copyright © 2018 Veysel. All rights reserved.
//

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    int x,y;
    cout<<"Satir degeri "<<endl;
    cin>>x;
    cout<<"Sutun degeri "<<endl;
    cin>>y;
    int matrix[x][y],i,j,enk,enb,sonuc;
    
    for(i=0;i<x;i++)
        for(j=0;j<y;j++)
        {
            cout<<"["<<i<<","<<j<<"]";
            cin>>matrix[i][j];
        }
    enk=matrix[0][0];
    for(i=0;i<x;i++)
        for(j=0;j<y;j++)
        {
            if(enk>matrix[i][j]) enk=matrix[i][j];
        }
    enb=matrix[0][0];
    for(i=0;i<x;i++)
        for(j=0;j<y;j++)
        {
            if(enb<matrix[i][j]) enb=matrix[i][j];
        }
    cout<<"En kucuk deger "<<enk<<endl;
    cout<<"En buyuk deger "<<enb<<endl;
    sonuc=(enb-enk);
    cout<<"Fark "<<sonuc<<endl;
    
    return 0;
}
