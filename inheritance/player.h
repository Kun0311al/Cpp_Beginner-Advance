#ifndef PLAYER_H
#define PLAYER_H

#include<string>
#include<iostream>
#include"person.h"

class player : public person{
    friend std::ostream& operator<<(std::ostream& out,const person& player);

    public:
        player();
        player(std::string& game_param);
        ~player();
    private:
        std::string game {"none"};
};

#endif