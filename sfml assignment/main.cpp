#include <SFML/Graphics.hpp>
#include <iostream>
using namespace sf;
int main()
{
    sf::Clock Clock;
    float time1=0;
    float warpcooldown = 0;
    sf::RenderWindow window(sf::VideoMode(672, 820), "DragMan");
    ////// Texture
    sf::Texture playerTexture;
    if (!playerTexture.loadFromFile("image/playercharacter.png"))
    {
        std::cout << "Load failed" << std::endl;
    }
    ////// Sprite
    sf::Sprite shapeSprite;
    shapeSprite.setTexture(playerTexture);
    shapeSprite.setTextureRect(sf::IntRect(65, 1, 19, 27));
    shapeSprite.setPosition({ 324.f,764.f });
    shapeSprite.setScale(sf::Vector2f(1.4f, 1.4f));
	int animationFrame = 0;
    ////// Texture Map
    sf::Texture MapTexture;
    if (!MapTexture.loadFromFile("image/bg.png"))
    {
        std::cout << "Load Map Failed" << std::endl;
    }
    ///// Sprite Map
    sf::Sprite MapSprite;
    MapSprite.setTexture(MapTexture);
    MapSprite.setTextureRect(sf::IntRect(0, 0, 224, 256));
    MapSprite.setPosition({ 0.f,50.f });
    MapSprite.setScale(sf::Vector2f(3.f, 3.f));
    ///// LeftprotalTexture 
    sf::Texture leftportaltexture;
    if (!leftportaltexture.loadFromFile("image/warpportalleft.png"))
    {
        std::cout << "Load Portalleft Failed" << std::endl;
    }
    ///// Sprite leftprotal
    sf::Sprite leftportal;
    leftportal.setTexture(leftportaltexture);
    leftportal.setTextureRect(sf::IntRect(10, 10, 348, 348));
    leftportal.setPosition({0.f,400.f});
    leftportal.setScale(sf::Vector2f(.12f, .12f));
    ///// RightprotalTexture 
    sf::Texture rightportaltexture;
    if (!rightportaltexture.loadFromFile("image/warpportalright.jpg"))
    {
        std::cout << "Load PortalRight Failed" << std::endl;
    }
    ///// Sprite rightprotal
    sf::Sprite rightportal;
    rightportal.setTexture(rightportaltexture);
    rightportal.setTextureRect(sf::IntRect(0, 0, 348, 348));
    rightportal.setPosition({ 630.f,400.f });
    rightportal.setScale(sf::Vector2f(.12f, .12f));
    ///// CloseLeftportalTexture
    sf::Texture closeleftportaltexture;
    if (!closeleftportaltexture.loadFromFile("image/lefttportalclose.png"))
    {
        std::cout << "Load ClosePortalleft Failed" << std::endl;
    }
    ///// Sprite closeleftprotal
    sf::Sprite closeleftportal;
    closeleftportal.setTexture(closeleftportaltexture);
    closeleftportal.setTextureRect(sf::IntRect(0, 0, 466, 535));
    closeleftportal.setPosition({ -10.f,400.f });
    closeleftportal.setScale(sf::Vector2f(.09f, .08f));
    ///// CloseRightportalTexture
    sf::Texture closerightportaltexture;
    if (!closerightportaltexture.loadFromFile("image/rightportalclose.png"))
    {
        std::cout << "Load ClosePortalRight Failed" << std::endl;
    }
    ///// Sprite closerightprotal
    sf::Sprite closerightportal;
    closerightportal.setTexture(closeleftportaltexture);
    closerightportal.setTextureRect(sf::IntRect(0, 0, 466, 535));
    closerightportal.setPosition({ 630.f,400.f });
    closerightportal.setScale(sf::Vector2f(.09f, .08f));

    while (window.isOpen())
    {
        sf::Time  time = Clock.getElapsedTime();
        sf::Event event;
        Clock.restart();
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }
        window.draw(MapSprite);
        if (warpcooldown < 5)
        {
            leftportal.setPosition(-100.f, 400.f);
            rightportal.setPosition(800.f, 400.f);
            closeleftportal.setPosition(-10.f,400.f);
            closerightportal.setPosition(630.f, 400.f);
        }
        else
        {
            leftportal.setPosition(0.f,400.f);
            rightportal.setPosition(630.f, 400.f);
            closeleftportal.setPosition(-100.f,400.f);
            closerightportal.setPosition(800.f, 400.f);
        }
        window.draw(leftportal);
        window.draw(rightportal);
        window.draw(closerightportal);
        window.draw(closeleftportal);
        window.draw(shapeSprite);
        window.display();
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::D))
		{
			shapeSprite.move(time.asSeconds()*100.f, 0.f);
			shapeSprite.setTextureRect(sf::IntRect(65 + (19 * animationFrame), 56, 19, 27));
            time1 += 0.001;
            if (time1 > 0.3)
            {
                animationFrame++;
                if (animationFrame >= 2)
                {
                    animationFrame = 0;
                }
                time1 = 0;
            }
		}
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::A))
		{
			shapeSprite.move(-time.asSeconds() * 100.f, 0.f);
			shapeSprite.setTextureRect(sf::IntRect(65 + (19*animationFrame), 87, 19, 27));
            time1 += 0.001;
            if (time1 > 0.3)
            {
                animationFrame++;
                if (animationFrame >= 2)
                {
                    animationFrame = 0;
                }
                time1 = 0;
            }
		}
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::W))
		{
			shapeSprite.move(0.f, -time.asSeconds() * 100.f);
			shapeSprite.setTextureRect(sf::IntRect(65 + (19 * animationFrame), 29, 19, 27));
            time1 += 0.001;
            if (time1 > 0.3)
            {
                animationFrame++;
                if (animationFrame >= 2)
                {
                    animationFrame = 0;
                }
                time1 = 0;
            }
		}
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::S))
		{
			shapeSprite.move(0.f, time.asSeconds() * 100.f);
			shapeSprite.setTextureRect(sf::IntRect(65 + (19 * animationFrame), 2, 19,27));
            time1 += 0.001;
            if (time1 > 0.3)
            {
                animationFrame++;
                if (animationFrame >= 2)
                {
                    animationFrame = 0;
                }
                time1 = 0;
            }
		}
        //LEFT collision
        if (shapeSprite.getPosition().x < 12.f) 
            shapeSprite.setPosition(12.f, shapeSprite.getPosition().y);
        //TOP collision
        if (shapeSprite.getPosition().y < 86.f) 
            shapeSprite.setPosition(shapeSprite.getPosition().x, 86.f);
        //RIGHT collision
        if (shapeSprite.getPosition().x + shapeSprite.getGlobalBounds().width > 660.f) 
            shapeSprite.setPosition(660.f - shapeSprite.getGlobalBounds().width, shapeSprite.getPosition().y);
        //BOTTOM collision
        if (shapeSprite.getPosition().y + shapeSprite.getGlobalBounds().height > 808.f)
            shapeSprite.setPosition(shapeSprite.getPosition().x, 808.f - shapeSprite.getGlobalBounds().height);
        if (leftportal.getGlobalBounds().intersects(shapeSprite.getGlobalBounds()) && warpcooldown>5)
        {
            shapeSprite.setPosition(600.f, 405.f);
            warpcooldown = 0;
        }
        if (rightportal.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())&&warpcooldown>5)
        {
            shapeSprite.setPosition(50.f, 405.f);
            warpcooldown = 0;
        }
        warpcooldown +=time.asSeconds();
        printf("%f %f\n", shapeSprite.getPosition().x, shapeSprite.getPosition().y);
    }
    return 0;
}
