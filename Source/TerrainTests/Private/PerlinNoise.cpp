// Fill out your copyright notice in the Description page of Project Settings.


#include "PerlinNoise.h"

// Sets default values
APerlinNoise::APerlinNoise()
{
}

FVector2D APerlinNoise::GenerateNoiseMap(float mapWidth, float mapHeight, float scale)
{
	FVector2D noiseMap = { mapWidth, mapHeight };

	//clamp scale to minimum in case scale = 0
	if (scale <= 0)
	{
		scale = 0.0001;
	}

	for (int y = 0; y < mapHeight; y++)
	{
		for (int x = 0; x < mapWidth; x++)
		{
			float sampleX = x / scale;
			float sampleY = y / scale;
			FVector2D sampleVector = { sampleX,  sampleY };

			float perlinValue = FMath::PerlinNoise2D(sampleVector);
			noiseMap.X = perlinValue;
			noiseMap.Y = perlinValue;
		}
	}

	return noiseMap;
}

