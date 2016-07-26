#include "engine.h"

/*
    WHAT YOU NEED TO DO EVERY TIME

    Step 1. Create object.
    Step 2. Load object.
    Step 3. Control and render object ( events, states )
    Step 4. Free object.
*/

// Here we create all objects
Engine::Engine()
{
    core = new Core( 640, 480 );
}

// Here we delete all objects
void Engine::free()
{
    delete core;
}

bool Engine::load()
{
    bool success = true;

    if( !core->load( "Nazwa gry" ) )
    {
        success = false;
    }

    return success;
}

// All events
void Engine::events()
{

/*
    while(  )
    {

    }
*/

}

void Engine::states()
{
    if( core->getState() == 0 )
    {
        // Render intro etc.
        core->setState( 1 ); // After intro
    }

    // If is necessery, we don't want to see gap screen, don't write else if!
    if( core->getState() == 1 )
    {

    }

    /* etc. */
}





// We don't care about things below.
// They will look the same all time
void Engine::loop()
{
    while( core->isOpen() )
    {
        events();
        states();
        // After timer ...
    }
}

// Delete engine equils delete objects
Engine::~Engine()
{
    free();
}
