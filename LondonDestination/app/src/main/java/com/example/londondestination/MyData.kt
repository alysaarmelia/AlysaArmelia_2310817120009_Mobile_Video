package com.example.londondestination

import android.os.Parcelable
import kotlinx.parcelize.Parcelize

@Parcelize
data class MyData(
    val nama: String,
    val descriptionsingkat: String,
    val year: String,
    val image:String,
): Parcelable
