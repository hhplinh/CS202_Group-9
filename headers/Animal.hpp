#include"enemy.hpp"
#include<random>
#include "system.h"
#include <SFML/Graphics.hpp>
#include <iostream>
#include"state.h"
#include<string>
#pragma once
class Animal 
{
  protected :
  data * _data;
  float speed;
  int row , col;
  bool goR;
 std:: string name;
 sf :: Sprite sprite;
  public:
  sf::Sprite getSprite(){return this->sprite;}
   sf::Clock frameTimer; // Timer to control the frame rate
  const sf::Time frameDuration = sf::seconds(1.f / 10);
   virtual ~Animal() {}
  sf::Vector2f getposAnimal(){return this->sprite.getPosition();}
  Animal(data* _data);
  void setposAnimal( sf::Vector2f posblock);
  void init();
  //normal draw without sf drawable using window

  void draw ()
  {
    _data->_window->draw(sprite);
  }
  void AnimalTurn();
  sf::Vector2u size;
  void AnimalRun();
  
};
class cop : public Animal
{ protected: 

  public:
  ~cop() {}
 
  cop(data* _data) ;


};
class tegiac : public Animal
{

};
class lacda : public Animal
{

};
class voi : public Animal
{

};
class gau : public Animal
{
    public:
  ~gau() {}
 
  gau(data* _data) ;
};
