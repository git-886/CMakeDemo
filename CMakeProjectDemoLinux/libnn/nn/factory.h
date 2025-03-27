#ifndef __FACTORY_H__
#define __FACTORY_H__

class nn_i;
class factory_i
{
public:
    virtual ~factory_i() = default;
    virtual nn_i* create_nn(const char* name) = 0;
};

#endif