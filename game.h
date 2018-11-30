//
//  Game.h
//  cs32project1
//
//  Created by Erica Vellanoweth on 4/6/18.
//  Copyright © 2018 Erica Vellanoweth. All rights reserved.
//

#ifndef Game_h
#define Game_h

class City;

class Game
{
public:
    // Constructor/destructor
    Game(int rows, int cols, int nFlatulans);
    ~Game();
    
    // Mutators
    void play();
    
private:
    City* m_city;
};

#endif /* Game_h */
