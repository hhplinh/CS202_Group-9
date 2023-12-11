#pragma once

#include "menu.hpp"

#include <map>

class mainMenu0Load : public menu
{
private:
    enum Button
    {
        PLAY,
        INSTRUCTION,
        LEADERBOARD,
        EXIT,
        NUM_BUTTONS
    };

    std::map<Button, std::string> buttonToString = {
        {PLAY, "Play"},
        {LEADERBOARD, "Leaderboard"},
        {INSTRUCTION, "Instruction"},
        {EXIT, "Exit"},
    };

public:
    mainMenu0Load(data *data);
    ~mainMenu0Load();
    void init();
    void processInput();
    void update();
};