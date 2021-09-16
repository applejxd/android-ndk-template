package com.example.android_ndk_template

import androidx.appcompat.app.AppCompatActivity
import android.os.Bundle
import com.example.android_ndk_template.databinding.ActivityMainBinding
import com.example.version_checker.VersionChecker

class MainActivity : AppCompatActivity() {
    companion object {
        init {
            System.loadLibrary("version_checker")
        }
    }

    private lateinit var mBinding: ActivityMainBinding
    private lateinit var mVersionChecker: VersionChecker

    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)

        mBinding = ActivityMainBinding.inflate(layoutInflater)
        setContentView(mBinding.root)

        // Example of a call to a native method
        mVersionChecker = VersionChecker()
        mBinding.sampleText.text = mVersionChecker.getOpenCvVersion()
    }
}