#include <SFML/Graphics.hpp>
#include"player.hpp"
#include"MAINMENU.h"
#include"terrain.hpp"
#define WIDTH 1920
#define HEIGHT 1080
#include<iostream>
#include<ctime>
#include"game.hpp"
using namespace std;

int main() 
{
 srand (static_cast <unsigned>(time(0)));
  game game1;
  while( game1.running())
  { game1.update();
    game1.render();
    game1.pollEvents();

  }


}
//     }