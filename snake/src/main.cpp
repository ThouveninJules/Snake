
#ifndef FONCTION_MAIN
#define FONCTION_MAIN

#include <SFML/Graphics.hpp>
#include <cstdlib>
#include "../include/action.hpp"

int var = 1;
int size = 3;//taille du snake

int main() {
  
  sf::RenderWindow window(sf::VideoMode(500,500),"SFML rks");
  sf::RectangleShape snake(sf::Vector2f(20,20));
  snake.setFillColor(sf::Color::Green);
  sf::RectangleShape fruit(sf::Vector2f(20,20));
  fruit.setFillColor(sf::Color::Red);
  fruit.setPosition(300,100);
  sf::Clock timer;
  
  while(window.isOpen())
    {
      
      sf::Event event;
      while(window.pollEvent(event))
	{
	  if (event.type ==sf::Event::Closed)
	    {
	      window.close();
	    }
	}
      
      if(timer.getElapsedTime().asMilliseconds()>200)
        {
          Action(size,var);
          timer.restart();
        }
      
      if(sf::Keyboard::isKeyPressed(sf::Keyboard::Up)){var = 0;}
      if(sf::Keyboard::isKeyPressed(sf::Keyboard::Right)){var = 1;}
      if(sf::Keyboard::isKeyPressed(sf::Keyboard::Down)){var = 2;}
      if(sf::Keyboard::isKeyPressed(sf::Keyboard::Left)){ var = 3;}
      
      if(s[0].x == f.x && s[0].y == f.y )
	{
	  srand(time(NULL));
	  size++;
	  int RandomX = rand()%490 + 10;
	  int RandomY = rand()%490 + 10;
	  fruit.move(RandomX,RandomY);
	}
      
      window.clear();
      window.draw(fruit);
      for (int i = 0 ; i < size ; i++)
	{
	  snake.setPosition(s[i].x*30 , s[i].y*30);
	  window.draw(snake);
	}
      window.display();
    }
return 0;
}
 
#endif
