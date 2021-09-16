package com.example.version_checker

class VersionChecker {
    private var pointer: Long = 0
    external fun delete()
    protected fun finalize() = delete()

    external fun getOpenCvVersion(): String
    external fun getEigenVersion(): String
}