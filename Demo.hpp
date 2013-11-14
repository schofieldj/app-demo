#ifndef __DEMO_HPP__
#define __DEMO_HPP__

#include "Game.hpp"

class Demo : public Game {
public:
    Demo(void);
    virtual ~Demo(void);
    
protected:

private:
    Demo(const Demo& other);
    Demo& operator=(const Demo& other);
};

#endif
