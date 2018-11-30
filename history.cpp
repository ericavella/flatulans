//
//  History.cpp
//  cs32project1
//
//  Created by Erica Vellanoweth on 4/6/18.
//  Copyright © 2018 Erica Vellanoweth. All rights reserved.
//

#include <iostream>
#include "History.h"
#include "globals.h"

using namespace std;

History::History(int nRows, int nCols)
{
    m_cols = nCols;
    m_rows = nRows;
    for (int r = 0; r < m_rows; r++)
    {
        for (int c = 0; c < m_cols; c++)
        {
            fConverted[r][c] = '.';
        }
    }
}

bool History::record(int r, int c)
{
    if (r > m_rows || c > m_cols || c < 1 || r < 1)
    {
        return false;
    }
    else if (fConverted[r-1][c-1] == '.')
    {
        fConverted[r-1][c-1] = 'A';
        return true;
    }
    else
    {
        fConverted[r-1][c-1]++;
        return true;
    }
}

void History::display() const
{
    clearScreen();
    // Position (row,col) in the city coordinate system is represented in
    // the array element grid[row-1][col-1]
    int r, c;
    
    for (r = 0; r < m_rows; r++)
    {
        for (c = 0; c < m_cols; c++)
        {
            cout << fConverted[r][c];
        }
        cout << endl;
    }
    
    cout << endl;
}
