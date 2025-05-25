package com.example.londondestination

import retrofit2.http.GET

interface DataService {
    @GET("/destination")
    suspend fun getDestination(): List<MyData>
}