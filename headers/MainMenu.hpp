#pragma once
#include "state.h"
#include "system.h"
#include "map.hpp"
#include "maincharacter.hpp"
#include "menu.hpp"

// #include "endgamemainMenu.hpp"
// #include "mainMenuPause.hpp"

#include <memory>
#include <string>
#include <vector>
#include <SFML/Graphics/Text.hpp>
#include <map>
#include"maincharacter.hpp"
class mainMenu : public menu
{
private:

    enum Button
    {
        PLAY,
        LOAD,
        SETTINGS,
        EXIT,
        NUM_BUTTONS
    };
        // PAUSE,
        // END,

    std::map<Button, std::string> buttonToString = {
        {PLAY, "Play"},
        {LOAD, "Load"},
        {SETTINGS, "Settings"},
        {EXIT, "Exit"},
    };
        // {PAUSE, "Pause"},
        // {END, "End"}

public:

    mainMenu(data *data);
    ~mainMenu();
    void init();
    void processInput();
    void update();
    void draw();
};