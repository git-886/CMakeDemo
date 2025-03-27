#include "nn/nn.h"

#include "nn/factory.h"
#include "nn_api.h"

#include <iostream>

int main()
{
    int ret = 0;

    ret = InitNetwork("dnn");
    std::cout << "Initialize network status: " << ret << std::endl;

    const char* data_from_somewhere = "A B C D";
    ret = TrainNetwork(data_from_somewhere, strlen(data_from_somewhere));
    if (0 != ret)
        std::cout << "failed to train the model." << std::endl;

    const char* model_from_somewhere = "k=10;b=200";
    ret = InferNetwork(model_from_somewhere, strlen(model_from_somewhere));
    if (0 != ret)
        std::cout << "failed to forward the model." << std::endl;

    return FiniNetwork();
}
