#pragma once

#include "core.h"

class Engine
{
    // Objects to load
    Core* core;

public:

    Engine();
    ~Engine();

    void free();
    bool load();

    void events();
    void states();

    void loop();
};
