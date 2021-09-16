//
// Created by myama on 2021/09/16.
//

#include "VersionChecker.h"
#include <string>
#include <opencv2/opencv.hpp>


string VersionChecker::GetOpenCvVersion() {
    string version = std::to_string(CV_VERSION_MAJOR);
    return version;
}