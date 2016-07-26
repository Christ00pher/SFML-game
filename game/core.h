#pragma once

#include <string>
#include <SFML/Window.hpp>

using namespace sf;
using namespace std;

class Core
{
    int state;  // state of game
    unsigned width;
    unsigned height;

    Event event;
    Window* window;

public:

    Core( unsigned width = 0, unsigned height = 0 );
    ~Core();

    void free();
    bool load( string title = "" );

    bool isOpen();
    Event getEvent();
    Window* getWindow();


    void setState( int state ); // change state, e.g. from intro to menu
    int getState();

    unsigned getWidth();
    unsigned getHeight();
};
