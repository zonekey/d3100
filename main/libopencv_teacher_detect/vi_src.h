#pragma once

/** 从 vi 设备中读取一帧图像，或许已经进行预处理了 ... */

#include <opencv2/opencv.hpp>
#include "hi_mat.h"

typedef struct visrc_t visrc_t;

visrc_t *vs_open(const char *fname);
bool vs_next_frame(visrc_t *vs, cv::Mat &frame);
bool vs_next(visrc_t *vs, hiMat &m);
void vs_close(visrc_t *vs);

