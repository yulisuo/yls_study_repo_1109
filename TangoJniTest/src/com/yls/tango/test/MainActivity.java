package com.yls.tango.test;

import android.app.Activity;
import android.os.Bundle;
import android.util.Log;

public class MainActivity extends Activity
{
    /** Called when the activity is first created. */

    private static final String TAG = "tangojnitest";
    @Override
    public void onCreate(Bundle savedInstanceState)
    {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.main);
        int ret = nativeAdd(2,3);
        Log.i(TAG,"ret = "+ret);
    }

    static{
    	System.loadLibrary("tangojnitest");
    }

    private native int nativeAdd(int a,int b);
}
