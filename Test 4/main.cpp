//
//  main.cpp
//  Test 4
//
//  Created by Alex Vashurov on 13.10.14.
//  Copyright (c) 2014 Alex Vashurov. All rights reserved.

#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

int main()
{
    setlocale (LC_ALL, "RUS");
    int i, j, k = 0,c = 0;
    int buff;
    int buff1;
    ifstream file1 ("/Users/AlexVashurov/Desktop/Test 4/in.txt");
    file1>>buff>>buff1;
    int m=buff;
    int n=buff1;
    int mas[m][n];
    int b = m * n-1;
    
    do
    {
        for (j = c; j < n - c; j++)
        {
            if (k > b)
                break;
            mas[c][j] = k++;
        }
        
        for(i=c+1;i<m-c;i++)
        {
            if(k > b)
                break;
            mas[i][n - c - 1] = k++;
        }
        
        for(j = n - c - 2; j >= c; j--)
        {
            if(k > b)
                break;
            mas[m - c - 1][j] = k++;
        }
        
        for(i = m - c - 2; i > c; i--)
        {
            if(k > b)
                break;
            mas[i][c] = k++;
        }
        
        c++;
    }
    while(k < m * n);
    
    ofstream file2 ("/Users/AlexVashurov/Desktop/Test 4/out.txt");
    
    
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n-1; j++)
            
            file2 << mas[i][j]<< "\t";
        file2 << mas[i][n - 1] << "\n";
        
    }
    system("pause");
    return 0;
}