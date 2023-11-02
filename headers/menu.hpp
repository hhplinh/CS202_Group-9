#pragma once
#include "state.h"
#include "system.h"
#include "map.hpp"
#include "maincharacter.hpp"
#include <ScreenMenu.hpp>

#include <memory>
#include <SFML/Graphics/Text.hpp>
class menu : public state
{
private:
    std::unique_ptr<ScreenMenu> CurrentScreen;

    data *_data;
    sf::Sprite backgroundTexture;
    sf::RectangleShape background;
    sf::Text m_gametitle;
    sf::Text m_play;
    sf::Text m_exit;

    bool m_playselected;
    bool m_exitselected;
    bool m_playpressed;
    bool m_exitpressed;
    sf::Text m_loadGame;
    bool m_loadGameSelected;
    bool m_loadGamePressed;

public:
    menu(data *data);
    ~menu();
    void init();
    void processInput();
    void update();
    void draw();

    void run(sf::RenderWindow &window);
};
