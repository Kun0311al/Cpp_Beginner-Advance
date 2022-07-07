#include "player.h"
#include "person.h"

player::player(std::string& game_param)
        :game(game_param)
{

};

std::ostream& operator<<(std::ofstream& out,const player& player){
    out<<"[ game : "<<player.game<<" name : "<<player.get_first_name()<<" "<<player.get_last_name()<<"]";
    return out;
}