#include <SFML/Graphics.hpp>


class TerrainBlock
{
public:
	bool isPassable;
	sf::Vector2f pos;
	sf::Texture texture;
	sf::Sprite sprite;
	terrainBlock(std::string, float, float, bool);
	bool setUpSprite(std::string);
};