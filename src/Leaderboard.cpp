#include "Leaderboard.hpp"
#include <fstream>
#include <sstream>
#include <algorithm>

Leaderboard::Leaderboard(data *data) : _data(data)
{
   
}


Leaderboard::~Leaderboard()
{
}

std::vector<Player> loadPlayerData(const std::string& filename) {
    std::vector<Player> players;
    std::ifstream file(filename);
    if (!file.is_open()) {
        std::cerr << "Error opening file: " << filename << std::endl;
        return players;
    }

    std::string line;
    while (std::getline(file, line)) {
        std::istringstream iss(line);
        Player player;

        if (iss >> player.name >> player.highScore) {
            players.push_back(player);
        }
        else {
            std::cerr << "Error parsing line: " << line << std::endl;
        }
    }

    file.close();
    return players;
}

void Leaderboard::init()
{
    backgroundSprite.setTexture(&_data->_assets->getTexture(LEADERBOARD));
    backgroundSprite.setSize(sf::Vector2f(1920, 1080));

    std::vector<Player> players = loadPlayerData(SCORES_PATH);
    if (!players.empty())
    {
        playerNameText.setString("");
        playerScoreText.setString("");
        for (int i = 0; i < players.size(); i++)
        {
           /* playerNameText[i].setString("");
            playerScoreText[i].setString("");
            playerNameText[i].setString(players[i].name);
            playerScoreText[i].setString(std::to_string(players[i].highScore)); playerNameText[i].setFont(_data->_assets->getFont(MAIN_FONT));
            playerNameText[i].setCharacterSize(55);
            playerNameText[i].setFillColor(sf::Color::White);
            playerNameText[i].setOutlineColor(_data->_assets->getThemeColor());
            playerNameText[i].setOutlineThickness(5.f);
            playerNameText[i].setOrigin(playerNameText[i].getGlobalBounds().width / 2.f, playerNameText[i].getGlobalBounds().height / 2.f);

            playerScoreText[i].setFont(_data->_assets->getFont(MAIN_FONT));
            playerScoreText[i].setCharacterSize(55);
            playerScoreText[i].setFillColor(sf::Color::White);
            playerScoreText[i].setOutlineColor(_data->_assets->getThemeColor());
            playerScoreText[i].setOutlineThickness(5.f);
            playerScoreText[i].setOrigin(playerScoreText[i].getGlobalBounds().width / 2.f, playerScoreText[i].getGlobalBounds().height / 2.f);
            playerNameText[i].setPosition(_data->_window->getSize().x / 2.f - 70, _data->_window->getSize().y / 2.f + 170);
            playerScoreText[i].setPosition(_data->_window->getSize().x / 2.f + 175, _data->_window->getSize().y / 2.f + 175);*/
            playerNameText.setString(playerNameText.getString()  + players[i].name + "\n" + "\n");
            playerScoreText.setString(playerScoreText.getString() + std::to_string(players[i].highScore) + "\n" + "\n");
            playerNameText.setFont(_data->_assets->getFont(MAIN_FONT));
            playerNameText.setCharacterSize(55);
            playerNameText.setFillColor(sf::Color::White);
            playerNameText.setOutlineColor(_data->_assets->getThemeColor());
            playerNameText.setOutlineThickness(5.f);
            playerNameText.setOrigin(playerNameText.getGlobalBounds().width / 2.f, playerNameText.getGlobalBounds().height / 2.f);

            playerScoreText.setFont(_data->_assets->getFont(MAIN_FONT));
            playerScoreText.setCharacterSize(55);
            playerScoreText.setFillColor(sf::Color::White);
            playerScoreText.setOutlineColor(_data->_assets->getThemeColor());
            playerScoreText.setOutlineThickness(5.f);
            playerScoreText.setOrigin(playerScoreText.getGlobalBounds().width / 2.f, playerScoreText.getGlobalBounds().height / 2.f);
            playerNameText.setPosition(_data->_window->getSize().x / 2.f - 65, _data->_window->getSize().y / 2.f + 185);
            playerScoreText.setPosition(_data->_window->getSize().x / 2.f + 255, _data->_window->getSize().y / 2.f + 192);
        }
    }
}

void Leaderboard::processInput()
{
    sf::Event event;
    while (_data->_window->pollEvent(event))
    {
        if (event.type == sf::Event::Closed)
            _data->_window->close();
        else if (event.type == sf::Event::KeyPressed)
        {
            switch (event.key.code)
            {
            case sf::Keyboard::Escape:
                _data->_states->removeStateUntilOne();
                break;
            default:
                break;
            }
        }
    }
}

void Leaderboard::update()
{
}



void Leaderboard::draw()
{
    _data->_window->clear();

    _data->_window->draw(backgroundSprite);
    //std::vector<Player> players = loadPlayerData("highScore.txt");
    _data->_window->draw(playerNameText);
    _data->_window->draw(playerScoreText);
   /* for (int i = 0; i < players.size(); i++)
    {
        _data->_window->draw(playerNameText[i]);
        _data->_window->draw(playerScoreText[i]);
    }*/
    //     _data->_window->draw(countdownText);
    // }
    
    _data->_window->display();
}
