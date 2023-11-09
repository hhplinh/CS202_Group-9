#pragma once
#include "state.h"
#include "system.h"
#include "menu.hpp"

#include <memory>
#include <string>
#include <vector>
#include <SFML/Graphics/Text.hpp>
#include <map>

class endgameMenu : public menu
{
private:
    enum Button
    {
        RESTART,
        MAIN_MENU,
        NUM_BUTTONS
    };

    std::map<Button, std::string> buttonToString = {
        {RESTART, "Restart"},
        {MAIN_MENU, "Main Menu"}};


    sf::Text score;

public:
    endgameMenu(data *data);
    ~endgameMenu();
    void init();
    void processInput();
    void update();
    void draw();
};