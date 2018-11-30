//
//  Flatulan.h
//  cs32project1
//
//  Created by Erica Vellanoweth on 4/6/18.
//  Copyright © 2018 Erica Vellanoweth. All rights reserved.
//

#ifndef Flatulan_h
#define Flatulan_h

class City;  // This is needed to let the compiler know that City is a
// type name, since it's mentioned in the Flatulan declaration.

class Flatulan
{
public:
    // Constructor
    Flatulan(City* cp, int r, int c); 
    
    // Accessors
    int  row() const;
    int  col() const;
    
    // Mutators
    void move();
    bool possiblyGetConverted();
    
private:
    City* m_city;
    int   m_row;
    int   m_col;
};

#endif /* Flatulan_h */
