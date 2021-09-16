//
// Created by myama on 2021/09/16.
//

#include "VersionChecker.h"
#include <string>
#include <opencv2/opencv.hpp>
#include <Eigen/Dense>


string VersionChecker::GetOpenCvVersion() {
    string major = std::to_string(CV_VERSION_MAJOR);
    string minor = std::to_string(CV_VERSION_MINOR);
    string revision = std::to_string(CV_VERSION_REVISION);
    return major + "." + minor + "." + revision;
}

string VersionChecker::GetEigenVersion() {
    string world = std::to_string(EIGEN_WORLD_VERSION);
    string major = std::to_string(EIGEN_MAJOR_VERSION);
    string minor = std::to_string(EIGEN_MINOR_VERSION);
    return world + "." + major + "." + minor;
}