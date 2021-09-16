//
// Created by myama on 2021/09/16.
//

#ifndef ANDROID_NDK_TEMPLATE_VERSIONCHECKER_H
#define ANDROID_NDK_TEMPLATE_VERSIONCHECKER_H

#include <string>
#include <opencv2/opencv.hpp>

using std::string;

class VersionChecker {
public:
    string GetOpenCvVersion();
    string GetEigenVersion();
};


#endif //ANDROID_NDK_TEMPLATE_VERSIONCHECKER_H
