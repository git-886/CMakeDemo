#ifndef __NN_API_H__
#define __NN_API_H__

#ifdef __cplusplus
extern "C" {
#endif

    /**
     * @brief 初始化网络参数
     * @param which 网络类型
     * @return 初始化网络状态
     */
    _declspec(dllexport) int __stdcall InitNetwork(const char* which);

    /**
     * @brief 销毁网络参数
     * @return 销毁网络状态
     */
    _declspec(dllexport) int __stdcall FiniNetwork();

    /**
     * @brief 进行网络训练
     * @param data 训练数据
     * @return 训练状态
     */
    _declspec(dllexport) int __stdcall TrainNetwork(const char* data, size_t size);

    /**
     * @brief 进行网络推理
     * @param model 推理模型
     * @return 初始化网络状态
     */
    _declspec(dllexport) int __stdcall InferNetwork(const char* model, size_t size);

#ifdef __cplusplus
}
#endif

#endif
