#include "factory_impl.h"

#include "nn/network_impl/rnn.h"
#include "nn/network_impl/cnn.h"
#include "nn/network_impl/dnn.h"

#include <string>

factory_impl::factory_impl()
{
}

nn_i* factory_impl::create_nn(const char* name)
{
    if (nullptr == name)
        return nullptr;

    const char* conf_from_somewhere = "Hero=Iron Man";

    auto str_name = std::string(name);
    if (str_name == "dnn")
        return new dnn(conf_from_somewhere);
    else if (str_name == "rnn")
        return new rnn(conf_from_somewhere);
    else if (str_name == "cnn")
        return new cnn(conf_from_somewhere);

    return nullptr;
}
