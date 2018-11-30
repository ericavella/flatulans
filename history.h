//
//  History.h
//  cs32project1
//
//  Created by Erica Vellanoweth on 4/6/18.
//  Copyright © 2018 Erica Vellanoweth. All rights reserved.
//

#ifndef History_h
#define History_h
#include "globals.h"

class History{
public:
    History(int nRows, int nCols);
    bool record(int r, int c);
    void display() const;
private:
    int m_rows;
    int m_cols;
    char fConverted[MAXROWS][MAXCOLS];
};

#endif /* History_h */
