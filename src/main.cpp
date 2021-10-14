#include <SFML/Graphics.hpp>

int main(){

  sf::RenderWindow window(sf::VideoMode(800, 800), "Snake de wish !");

  sf::Sprite shape;
  sf::Texture shapeTexture;
  sf::CircleShape cercle(100.f);
  cercle.setFillColor(sf::Color::Green);

  while (window.isOpen())
    {
      sf::Event event;
      while (window.pollEvent(event))
	{
	  if(event.type == sf::Event::Closed)
	    window.close();
	}
      window.clear();
      window.draw(cercle);
      window.display();
    }

  return 0;
}