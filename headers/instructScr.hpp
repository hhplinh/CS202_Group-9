#pragma once
#include "state.h"
#include "system.h"
#include <SFML/Graphics.hpp>

#include <iostream>
#include <string>

class instructScreen : public state
{
private:
    data *_data;
    const std::string INSTRUCT_PATH = "instruction.txt";
    sf::Text instructText;
    sf::RectangleShape backgroundSprite;

public:
    instructScreen(data *data);
    ~instructScreen();

    void init();
    void processInput();
    void update();
    void draw();
};
