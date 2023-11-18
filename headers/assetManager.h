#pragma once
#include"SFML/Graphics.hpp"
#include <vector>

enum
{
	PLAYER=0 , BACKGROUND , ROCK , ROCK1 , ROCK2 ,ROCK3 ,ROCK4 , TRAFFICLIGHT , TREE1 , TREE2 , RIVER , ROAD , MAIN_FONT, FONT2 ,GRASS, CAR, CAR2, CAR3, CAR4, CAR5, CANO, CANO2
};
class assetManager
{
private:
	std::vector <sf::Texture> _textures;
	sf::Font* _fonts = new sf::Font[100];
	
protected:
	sf::Texture _backgroundTexture;

public:
	assetManager();
	~assetManager();
	void addTexture(int id, std::string filePath);
	void addFont(int id, std::string filePath);
	sf::Texture& getTexture(int id);
	sf::Font& getFont(int id);

	void setBackgroundTexture(const sf::Texture& texture);
	sf::Texture getBackgroundTexture();
};


