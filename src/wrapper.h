//
// Created by ZuoZiqi_QYun_SoarTeam on 2021/5/17.
//

#include "filesystem_utils.h"

#ifndef WAIFU2X_NCNN_VULKAN_WRAPPER_H
#define WAIFU2X_NCNN_VULKAN_WRAPPER_H

#endif //WAIFU2X_NCNN_VULKAN_WRAPPER_H
//class _declspec(dllexport) Waifu2xWrapper
class Waifu2xWrapper
{
public:
    ~Waifu2xWrapper();
    Waifu2xWrapper();
    void setInput(path_t input);
    void setOutput(path_t output);
    void setNoise(int p_noise);
    void setScale(int p_scale);
    void setTileSize(std::vector<int> size);
    void setModel(path_t p_model);
    void setGpu(std::vector<int> gpu);
    void setJobsLoad(int load);
    void setJobProc(std::vector<int> proc);
    void setJobSave(int save);
    void setTtaMode(int mode);
    void setFormat(path_t p_format);
    int execute();

private:
    path_t inputpath;
    path_t outputpath;
    int noise;
    int scale;
    std::vector<int> tilesize;
    path_t model;
    std::vector<int> gpuid;
    int jobs_load;
    std::vector<int> jobs_proc;
    int jobs_save;
    int verbose;
    int tta_mode;
    path_t format;
};