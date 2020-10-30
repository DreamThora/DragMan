#include <SFML/Graphics.hpp>
#include <iostream>
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
    shapeSprite.setTextureRect(sf::IntRect(65, 1, 19, 25));
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
    /////Rectangles
        sf::RectangleShape rec1(sf::Vector2f(74.f, 44.f));
        rec1.setPosition(58.f, 139.f);
        rec1.setFillColor(sf::Color::Blue); //ready
        sf::RectangleShape rec2(sf::Vector2f(97.f, 44.f));
        rec2.setPosition(180.f, 139.f);
        rec2.setFillColor(sf::Color::Blue); //ready
        sf::RectangleShape rec3(sf::Vector2f(25.f, 96.f));
        rec3.setPosition(324.f, 86.f);
        rec3.setFillColor(sf::Color::Blue);//ready
        sf::RectangleShape rec4(sf::Vector2f(97.f, 44.f));
        rec4.setPosition(395.f, 139.f);
        rec4.setFillColor(sf::Color::Blue);//ready
        sf::RectangleShape rec5(sf::Vector2f(74.f, 44.f));
        rec5.setPosition(540.f, 139.f);
        rec5.setFillColor(sf::Color::Blue);//ready
        sf::RectangleShape rec6(sf::Vector2f(74.f, 20.f));
        rec6.setPosition(58.f, 234.f);
        rec6.setFillColor(sf::Color::Blue);//ready
        sf::RectangleShape rec7(sf::Vector2f(169.f, 20.f));
        rec7.setPosition(251.f, 234.f);
        rec7.setFillColor(sf::Color::Blue);//ready
        sf::RectangleShape rec8(sf::Vector2f(74.f, 20.f));
        rec8.setPosition(540.f, 234.f);
        rec8.setFillColor(sf::Color::Blue);//ready
        sf::RectangleShape rec11(sf::Vector2f(25.f, 165.f));
        rec11.setPosition(180.f, 234.f);
        rec11.setFillColor(sf::Color::Blue);//ready
        sf::RectangleShape rec13(sf::Vector2f(25.f, 165.f));
        rec13.setPosition(467.f, 234.f);
        rec13.setFillColor(sf::Color::Blue);//ready
        sf::RectangleShape rec9(sf::Vector2f(70.f, 20.f));
        rec9.setPosition(205.f, 306.f);
        rec9.setFillColor(sf::Color::Blue);//ready
        sf::RectangleShape rec10(sf::Vector2f(68.f, 20.f));
        rec10.setPosition(398.f, 306.f);
        rec10.setFillColor(sf::Color::Blue);//ready
        sf::RectangleShape rec12(sf::Vector2f(25.f, 72.f));
        rec12.setPosition(324.f, 254.f);
        rec12.setFillColor(sf::Color::Blue);//ready
        sf::RectangleShape rec14(sf::Vector2f(120.f, 93.f));
        rec14.setPosition(12.f, 306.f);
        rec14.setFillColor(sf::Color::Blue);//ready
        sf::RectangleShape rec15(sf::Vector2f(120.f, 93.f));
        rec15.setPosition(540.f, 306.f);
        rec15.setFillColor(sf::Color::Blue);//ready
        sf::RectangleShape rec16(sf::Vector2f(120.f, 93.f));
        rec16.setPosition(12.f, 449.f);
        rec16.setFillColor(sf::Color::Blue);//ready
        sf::RectangleShape rec21(sf::Vector2f(120.f, 93.f));
        rec21.setPosition(540.f, 449.f);
        rec21.setFillColor(sf::Color::Blue);//ready
        sf::RectangleShape rec17(sf::Vector2f(25.f, 93.f));
        rec17.setPosition(180.f, 449.f);
        rec17.setFillColor(sf::Color::Blue);//ready
        sf::RectangleShape rec20(sf::Vector2f(25.f, 93.f));
        rec20.setPosition(467.f, 449.f);
        rec20.setFillColor(sf::Color::Blue);//ready
        sf::RectangleShape rec18(sf::Vector2f(169.f, 26.f));
        rec18.setPosition(251.f, 516.f);
        rec18.setFillColor(sf::Color::Blue);//ready
        sf::RectangleShape rec19(sf::Vector2f(25.f, 72.f));
        rec19.setPosition(324.f, 542.f);
        rec19.setFillColor(sf::Color::Blue);
        sf::RectangleShape rec22(sf::Vector2f(70.f, 21.f));
        rec22.setPosition(62.f, 593.f);
        rec22.setFillColor(sf::Color::Blue);//ready
        sf::RectangleShape rec24(sf::Vector2f(95.f, 21.f));
        rec24.setPosition(180.f, 593.f);
        rec24.setFillColor(sf::Color::Blue);//ready
        sf::RectangleShape rec25(sf::Vector2f(94.f, 21.f));
        rec25.setPosition(398.f, 593.f);
        rec25.setFillColor(sf::Color::Blue);//ready
        sf::RectangleShape rec27(sf::Vector2f(74.f, 21.f));
        rec27.setPosition(540.f, 593.f);
        rec27.setFillColor(sf::Color::Blue);//ready
        sf::RectangleShape rec23(sf::Vector2f(24.f, 73.f));
        rec23.setPosition(108.f, 614.f);
        rec23.setFillColor(sf::Color::Blue);
        sf::RectangleShape rec26(sf::Vector2f(25.f, 73.f));
        rec26.setPosition(540.f, 614.f);
        rec26.setFillColor(sf::Color::Blue);
        sf::RectangleShape rec28(sf::Vector2f(48.f, 22.f));
        rec28.setPosition(12.f, 665.f);
        rec28.setFillColor(sf::Color::Blue);
        sf::RectangleShape rec35(sf::Vector2f(48.f, 22.f));
        rec35.setPosition(612.f, 665.f);
        rec35.setFillColor(sf::Color::Blue);
        sf::RectangleShape rec31(sf::Vector2f(169.f, 22.f));
        rec31.setPosition(251.f, 665.f);
        rec31.setFillColor(sf::Color::Blue);
        sf::RectangleShape rec32(sf::Vector2f(25.f, 72.f));
        rec32.setPosition(324.f, 686.f);
        rec32.setFillColor(sf::Color::Blue);
        sf::RectangleShape rec30(sf::Vector2f(219.f, 21.f));
        rec30.setPosition(60.f, 737.f);
        rec30.setFillColor(sf::Color::Blue);
        sf::RectangleShape rec34(sf::Vector2f(219.f, 21.f));
        rec34.setPosition(393.f, 737.f);
        rec34.setFillColor(sf::Color::Blue);
        sf::RectangleShape rec29(sf::Vector2f(25.f, 93.f));
        rec29.setPosition(180.f, 665.f);
        rec29.setFillColor(sf::Color::Blue);
        sf::RectangleShape rec33(sf::Vector2f(25.f, 93.f));
        rec33.setPosition(467.f, 665.f);
        rec33.setFillColor(sf::Color::Blue);
    while (window.isOpen())
    {
        sf::Time  time = Clock.getElapsedTime();
        sf::sleep;
        sf::Event event;
        Clock.restart();
        window.draw(rec1); window.draw(rec2); window.draw(rec4); window.draw(rec3); window.draw(rec5); window.draw(rec6); window.draw(rec7); window.draw(rec8); 
        window.draw(rec11); window.draw(rec13); window.draw(rec9); window.draw(rec10); window.draw(rec12); window.draw(rec14); window.draw(rec15); 
        window.draw(rec16); window.draw(rec21); window.draw(rec17); window.draw(rec20); window.draw(rec18); 
        window.draw(rec22);window.draw(rec24); window.draw(rec25); window.draw(rec27); window.draw(rec19); window.draw(rec23); window.draw(rec26); window.draw(rec28); window.draw(rec35); window.draw(rec31);
        window.draw(rec32); window.draw(rec30); window.draw(rec34); window.draw(rec29); window.draw(rec33);
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
            closeleftportal.setPosition(-10.f, 400.f);
            closerightportal.setPosition(630.f, 400.f);
        }
        else
        {
            leftportal.setPosition(0.f, 400.f);
            rightportal.setPosition(630.f, 400.f);
            closeleftportal.setPosition(-100.f, 400.f);
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

            shapeSprite.move(time.asSeconds() * 100.f, 0.f);
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
            if (rec1.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) shapeSprite.move(-shapeSprite.getGlobalBounds().width * 0.01f, 0.f);
            if (rec2.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) shapeSprite.move(-shapeSprite.getGlobalBounds().width * 0.01f, 0.f);
            if (rec3.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) shapeSprite.move(-shapeSprite.getGlobalBounds().width * 0.01f, 0.f);
            if (rec4.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) shapeSprite.move(-shapeSprite.getGlobalBounds().width * 0.01f, 0.f);
            if (rec5.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) shapeSprite.move(-shapeSprite.getGlobalBounds().width * 0.01f, 0.f);
            if (rec6.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) shapeSprite.move(-shapeSprite.getGlobalBounds().width * 0.01f, 0.f);
            if (rec7.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) shapeSprite.move(-shapeSprite.getGlobalBounds().width * 0.01f, 0.f);
            if (rec8.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) shapeSprite.move(-shapeSprite.getGlobalBounds().width * 0.01f, 0.f);
            if (rec9.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) shapeSprite.move(-shapeSprite.getGlobalBounds().width * 0.01f, 0.f);
            if (rec10.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) shapeSprite.move(-shapeSprite.getGlobalBounds().width * 0.01f, 0.f);
            if (rec11.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) shapeSprite.move(-shapeSprite.getGlobalBounds().width * 0.01f, 0.f);
            if (rec12.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) shapeSprite.move(-shapeSprite.getGlobalBounds().width * 0.01f, 0.f);
            if (rec13.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) shapeSprite.move(-shapeSprite.getGlobalBounds().width * 0.01f, 0.f);
            if (rec14.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) shapeSprite.move(-shapeSprite.getGlobalBounds().width * 0.01f, 0.f);
            if (rec15.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) shapeSprite.move(-shapeSprite.getGlobalBounds().width * 0.01f, 0.f);
            if (rec16.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) shapeSprite.move(-shapeSprite.getGlobalBounds().width * 0.01f, 0.f);
            if (rec17.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) shapeSprite.move(-shapeSprite.getGlobalBounds().width * 0.01f, 0.f);
            if (rec18.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) shapeSprite.move(-shapeSprite.getGlobalBounds().width * 0.01f, 0.f);
            if (rec19.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) shapeSprite.move(-shapeSprite.getGlobalBounds().width * 0.01f, 0.f);
            if (rec20.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) shapeSprite.move(-shapeSprite.getGlobalBounds().width * 0.01f, 0.f);
            if (rec21.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) shapeSprite.move(-shapeSprite.getGlobalBounds().width * 0.01f, 0.f);
            if (rec22.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) shapeSprite.move(-shapeSprite.getGlobalBounds().width * 0.01f, 0.f);
            if (rec23.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) shapeSprite.move(-shapeSprite.getGlobalBounds().width * 0.01f, 0.f);
            if (rec24.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) shapeSprite.move(-shapeSprite.getGlobalBounds().width * 0.01f, 0.f);
            if (rec25.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) shapeSprite.move(-shapeSprite.getGlobalBounds().width * 0.01f, 0.f);
            if (rec26.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) shapeSprite.move(-shapeSprite.getGlobalBounds().width * 0.01f, 0.f);
            if (rec27.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) shapeSprite.move(-shapeSprite.getGlobalBounds().width * 0.01f, 0.f);
            if (rec28.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) shapeSprite.move(-shapeSprite.getGlobalBounds().width * 0.01f, 0.f);
            if (rec29.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) shapeSprite.move(-shapeSprite.getGlobalBounds().width * 0.01f, 0.f);
            if (rec30.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) shapeSprite.move(-shapeSprite.getGlobalBounds().width * 0.01f, 0.f);
            if (rec31.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) shapeSprite.move(-shapeSprite.getGlobalBounds().width * 0.01f, 0.f);
            if (rec32.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) shapeSprite.move(-shapeSprite.getGlobalBounds().width * 0.01f, 0.f);
            if (rec33.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) shapeSprite.move(-shapeSprite.getGlobalBounds().width * 0.01f, 0.f);
            if (rec34.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) shapeSprite.move(-shapeSprite.getGlobalBounds().width * 0.01f, 0.f);
            if (rec35.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) shapeSprite.move(-shapeSprite.getGlobalBounds().width * 0.01f, 0.f);
        }
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::A))
        {

            shapeSprite.move(-time.asSeconds() * 100.f, 0.f);
            shapeSprite.setTextureRect(sf::IntRect(65 + (19 * animationFrame), 87, 19, 27));
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
            if (rec1.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) shapeSprite.move(shapeSprite.getGlobalBounds().width * 0.01f, 0.f);
            if (rec2.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) shapeSprite.move(shapeSprite.getGlobalBounds().width * 0.01f, 0.f);
            if (rec3.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) shapeSprite.move(shapeSprite.getGlobalBounds().width * 0.01f, 0.f);
            if (rec4.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) shapeSprite.move(shapeSprite.getGlobalBounds().width * 0.01f, 0.f);
            if (rec5.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) shapeSprite.move(shapeSprite.getGlobalBounds().width * 0.01f, 0.f);
            if (rec6.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) shapeSprite.move(shapeSprite.getGlobalBounds().width * 0.01f, 0.f);
            if (rec7.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) shapeSprite.move(shapeSprite.getGlobalBounds().width * 0.01f, 0.f);
            if (rec8.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) shapeSprite.move(shapeSprite.getGlobalBounds().width * 0.01f, 0.f);
            if (rec9.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) shapeSprite.move(shapeSprite.getGlobalBounds().width * 0.01f, 0.f);
            if (rec10.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) shapeSprite.move(shapeSprite.getGlobalBounds().width * 0.01f, 0.f);
            if (rec11.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) shapeSprite.move(shapeSprite.getGlobalBounds().width * 0.01f, 0.f);
            if (rec12.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) shapeSprite.move(shapeSprite.getGlobalBounds().width * 0.01f, 0.f);
            if (rec13.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) shapeSprite.move(shapeSprite.getGlobalBounds().width * 0.01f, 0.f);
            if (rec14.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) shapeSprite.move(shapeSprite.getGlobalBounds().width * 0.01f, 0.f);
            if (rec15.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) shapeSprite.move(shapeSprite.getGlobalBounds().width * 0.01f, 0.f);
            if (rec16.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) shapeSprite.move(shapeSprite.getGlobalBounds().width * 0.01f, 0.f);
            if (rec17.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) shapeSprite.move(shapeSprite.getGlobalBounds().width * 0.01f, 0.f);
            if (rec18.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) shapeSprite.move(shapeSprite.getGlobalBounds().width * 0.01f, 0.f);
            if (rec19.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) shapeSprite.move(shapeSprite.getGlobalBounds().width * 0.01f, 0.f);
            if (rec20.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) shapeSprite.move(shapeSprite.getGlobalBounds().width * 0.01f, 0.f);
            if (rec21.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) shapeSprite.move(shapeSprite.getGlobalBounds().width * 0.01f, 0.f);
            if (rec22.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) shapeSprite.move(shapeSprite.getGlobalBounds().width * 0.01f, 0.f);
            if (rec23.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) shapeSprite.move(shapeSprite.getGlobalBounds().width * 0.01f, 0.f);
            if (rec24.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) shapeSprite.move(shapeSprite.getGlobalBounds().width * 0.01f, 0.f);
            if (rec25.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) shapeSprite.move(shapeSprite.getGlobalBounds().width * 0.01f, 0.f);
            if (rec26.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) shapeSprite.move(shapeSprite.getGlobalBounds().width * 0.01f, 0.f);
            if (rec27.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) shapeSprite.move(shapeSprite.getGlobalBounds().width * 0.01f, 0.f);
            if (rec28.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) shapeSprite.move(shapeSprite.getGlobalBounds().width * 0.01f, 0.f);
            if (rec29.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) shapeSprite.move(shapeSprite.getGlobalBounds().width * 0.01f, 0.f);
            if (rec30.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) shapeSprite.move(shapeSprite.getGlobalBounds().width * 0.01f, 0.f);
            if (rec31.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) shapeSprite.move(shapeSprite.getGlobalBounds().width * 0.01f, 0.f);
            if (rec32.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) shapeSprite.move(shapeSprite.getGlobalBounds().width * 0.01f, 0.f);
            if (rec33.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) shapeSprite.move(shapeSprite.getGlobalBounds().width * 0.01f, 0.f);
            if (rec34.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) shapeSprite.move(shapeSprite.getGlobalBounds().width * 0.01f, 0.f);
            if (rec35.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) shapeSprite.move(shapeSprite.getGlobalBounds().width * 0.01f, 0.f);
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
                if (rec1.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) shapeSprite.move(0.f, shapeSprite.getGlobalBounds().height * 0.01f);
                if (rec2.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) shapeSprite.move(0.f, shapeSprite.getGlobalBounds().height * 0.01f);
                if (rec3.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) shapeSprite.move(0.f, shapeSprite.getGlobalBounds().height * 0.01f);
                if (rec4.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) shapeSprite.move(0.f, shapeSprite.getGlobalBounds().height * 0.01f);
                if (rec5.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) shapeSprite.move(0.f, shapeSprite.getGlobalBounds().height * 0.01f);
                if (rec6.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) shapeSprite.move(0.f, shapeSprite.getGlobalBounds().height * 0.01f);
                if (rec7.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) shapeSprite.move(0.f, shapeSprite.getGlobalBounds().height * 0.01f);
                if (rec8.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) shapeSprite.move(0.f, shapeSprite.getGlobalBounds().height * 0.01f);
                if (rec9.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) shapeSprite.move(0.f, shapeSprite.getGlobalBounds().height * 0.01f);
                if (rec10.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) shapeSprite.move(0.f, shapeSprite.getGlobalBounds().height * 0.01f);
                if (rec11.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) shapeSprite.move(0.f, shapeSprite.getGlobalBounds().height * 0.01f);
                if (rec12.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) shapeSprite.move(0.f, shapeSprite.getGlobalBounds().height * 0.01f);
                if (rec13.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) shapeSprite.move(0.f, shapeSprite.getGlobalBounds().height * 0.01f);
                if (rec14.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) shapeSprite.move(0.f, shapeSprite.getGlobalBounds().height * 0.01f);
                if (rec15.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) shapeSprite.move(0.f, shapeSprite.getGlobalBounds().height * 0.01f);
                if (rec16.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) shapeSprite.move(0.f, shapeSprite.getGlobalBounds().height * 0.01f);
                if (rec17.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) shapeSprite.move(0.f, shapeSprite.getGlobalBounds().height * 0.01f);
                if (rec18.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) shapeSprite.move(0.f, shapeSprite.getGlobalBounds().height * 0.01f);
                if (rec19.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) shapeSprite.move(0.f, shapeSprite.getGlobalBounds().height * 0.01f);
                if (rec20.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) shapeSprite.move(0.f, shapeSprite.getGlobalBounds().height * 0.01f);
                if (rec21.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) shapeSprite.move(0.f, shapeSprite.getGlobalBounds().height * 0.01f);
                if (rec22.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) shapeSprite.move(0.f, shapeSprite.getGlobalBounds().height * 0.01f);
                if (rec23.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) shapeSprite.move(0.f, shapeSprite.getGlobalBounds().height * 0.01f);
                if (rec24.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) shapeSprite.move(0.f, shapeSprite.getGlobalBounds().height * 0.01f);
                if (rec25.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) shapeSprite.move(0.f, shapeSprite.getGlobalBounds().height * 0.01f);
                if (rec26.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) shapeSprite.move(0.f, shapeSprite.getGlobalBounds().height * 0.01f);
                if (rec27.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) shapeSprite.move(0.f, shapeSprite.getGlobalBounds().height * 0.01f);
                if (rec28.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) shapeSprite.move(0.f, shapeSprite.getGlobalBounds().height * 0.01f);
                if (rec29.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) shapeSprite.move(0.f, shapeSprite.getGlobalBounds().height * 0.01f);
                if (rec30.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) shapeSprite.move(0.f, shapeSprite.getGlobalBounds().height * 0.01f);
                if (rec31.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) shapeSprite.move(0.f, shapeSprite.getGlobalBounds().height * 0.01f);
                if (rec32.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) shapeSprite.move(0.f, shapeSprite.getGlobalBounds().height * 0.01f);
                if (rec33.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) shapeSprite.move(0.f, shapeSprite.getGlobalBounds().height * 0.01f);
                if (rec34.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) shapeSprite.move(0.f, shapeSprite.getGlobalBounds().height * 0.01f);
                if (rec35.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) shapeSprite.move(0.f, shapeSprite.getGlobalBounds().height * 0.01f);
        }
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::S))
        {
            shapeSprite.move(0.f, time.asSeconds() * 100.f);
            shapeSprite.setTextureRect(sf::IntRect(65 + (19 * animationFrame), 2, 19, 27));
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
            if (rec1.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) shapeSprite.move(0.f, -shapeSprite.getGlobalBounds().height * 0.01f);
            if (rec2.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) shapeSprite.move(0.f, -shapeSprite.getGlobalBounds().height * 0.01f);
            if (rec3.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) shapeSprite.move(0.f, -shapeSprite.getGlobalBounds().height * 0.01f);
            if (rec4.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) shapeSprite.move(0.f, -shapeSprite.getGlobalBounds().height * 0.01f);
            if (rec5.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) shapeSprite.move(0.f, -shapeSprite.getGlobalBounds().height * 0.01f);
            if (rec6.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) shapeSprite.move(0.f, -shapeSprite.getGlobalBounds().height * 0.01f);
            if (rec7.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) shapeSprite.move(0.f, -shapeSprite.getGlobalBounds().height * 0.01f);
            if (rec8.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) shapeSprite.move(0.f, -shapeSprite.getGlobalBounds().height * 0.01f);
            if (rec9.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) shapeSprite.move(0.f, -shapeSprite.getGlobalBounds().height * 0.01f);
            if (rec10.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) shapeSprite.move(0.f, -shapeSprite.getGlobalBounds().height * 0.01f);
            if (rec11.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) shapeSprite.move(0.f, -shapeSprite.getGlobalBounds().height * 0.01f);
            if (rec12.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) shapeSprite.move(0.f, -shapeSprite.getGlobalBounds().height * 0.01f);
            if (rec13.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) shapeSprite.move(0.f, -shapeSprite.getGlobalBounds().height * 0.01f);
            if (rec14.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) shapeSprite.move(0.f, -shapeSprite.getGlobalBounds().height * 0.01f);
            if (rec15.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) shapeSprite.move(0.f, -shapeSprite.getGlobalBounds().height * 0.01f);
            if (rec16.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) shapeSprite.move(0.f, -shapeSprite.getGlobalBounds().height * 0.01f);
            if (rec17.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) shapeSprite.move(0.f, -shapeSprite.getGlobalBounds().height * 0.01f);
            if (rec18.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) shapeSprite.move(0.f, -shapeSprite.getGlobalBounds().height * 0.01f);
            if (rec19.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) shapeSprite.move(0.f, -shapeSprite.getGlobalBounds().height * 0.01f);
            if (rec20.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) shapeSprite.move(0.f, -shapeSprite.getGlobalBounds().height * 0.01f);
            if (rec21.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) shapeSprite.move(0.f, -shapeSprite.getGlobalBounds().height * 0.01f);
            if (rec22.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) shapeSprite.move(0.f, -shapeSprite.getGlobalBounds().height * 0.01f);
            if (rec23.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) shapeSprite.move(0.f, -shapeSprite.getGlobalBounds().height * 0.01f);
            if (rec24.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) shapeSprite.move(0.f, -shapeSprite.getGlobalBounds().height * 0.01f);
            if (rec25.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) shapeSprite.move(0.f, -shapeSprite.getGlobalBounds().height * 0.01f);
            if (rec26.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) shapeSprite.move(0.f, -shapeSprite.getGlobalBounds().height * 0.01f);
            if (rec27.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) shapeSprite.move(0.f, -shapeSprite.getGlobalBounds().height * 0.01f);
            if (rec28.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) shapeSprite.move(0.f, -shapeSprite.getGlobalBounds().height * 0.01f);
            if (rec29.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) shapeSprite.move(0.f, -shapeSprite.getGlobalBounds().height * 0.01f);
            if (rec30.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) shapeSprite.move(0.f, -shapeSprite.getGlobalBounds().height * 0.01f);
            if (rec31.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) shapeSprite.move(0.f, -shapeSprite.getGlobalBounds().height * 0.01f);
            if (rec32.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) shapeSprite.move(0.f, -shapeSprite.getGlobalBounds().height * 0.01f);
            if (rec33.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) shapeSprite.move(0.f, -shapeSprite.getGlobalBounds().height * 0.01f);
            if (rec34.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) shapeSprite.move(0.f, -shapeSprite.getGlobalBounds().height * 0.01f);
            if (rec35.getGlobalBounds().intersects(shapeSprite.getGlobalBounds())) shapeSprite.move(0.f, -shapeSprite.getGlobalBounds().height * 0.01f);
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
        /////Rectangle1
        warpcooldown +=time.asSeconds();
        printf("%f %f\n", shapeSprite.getPosition().x, shapeSprite.getPosition().y);
    }
    return 0;
}
