// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

/**
 * 
 */
class FPSGAME_API WeatherInterface
{
public:
	WeatherInterface();
	~WeatherInterface();

	float GetTemperature(float latitude, float longitude);
};
