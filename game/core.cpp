#include "core.h"
#include <stdio.h>

Core::Core( unsigned width, unsigned height )
{
    state = 0;
    this->width = width;
    this->height = height;
    window = NULL;
}

Core::~Core()
{
    free();
}


void Core::free()
{
    if( window != NULL )
    {
        window->close();
        delete window;
        window = NULL;

        state = 0;
        width = 0;
        height = 0;
    }
}

bool Core::load( string title )
{
    bool success = true;

    free();

    window = new Window( VideoMode( width, height ), title );
    if( window == NULL )
    {
        printf( "Not created window!\n" );
        success = false;
    }


    return success;
}


bool Core::isOpen()
{
    return window->isOpen();
}

Event Core::getEvent()
{
    return event;
}

Window* Core::getWindow()
{
    return window;
}


void Core::setState( int state )
{
    this->state = state;
}

int Core::getState()
{
    return state;
}


unsigned Core::getWidth()
{
    return width;
}

unsigned Core::getHeight()
{
    return height;
}

