package com.example.android_ndk_template

import androidx.appcompat.app.AppCompatActivity
import android.os.Bundle
import android.widget.TextView
import com.example.android_ndk_template.databinding.ActivityMainBinding
import com.example.version_checker.VersionChecker

class MainActivity : AppCompatActivity() {

    private lateinit var binding: ActivityMainBinding
    private lateinit var version_checker: VersionChecker

    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)

        binding = ActivityMainBinding.inflate(layoutInflater)
        setContentView(binding.root)

        // Example of a call to a native method
        version_checker = VersionChecker()
        binding.sampleText.text = version_checker.getOpenCvVersion()
    }

    /**
     * A native method that is implemented by the 'android_ndk_template' native library,
     * which is packaged with this application.
     */
    external fun stringFromJNI(): String

    companion object {
        // Used to load the 'android_ndk_template' library on application startup.
        init {
            System.loadLibrary("android_ndk_template")
        }
    }
}