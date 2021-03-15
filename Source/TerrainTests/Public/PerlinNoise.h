// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Math/UnrealMathUtility.h"
#include "PerlinNoise.generated.h"

UCLASS()
class TERRAINTESTS_API APerlinNoise : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	APerlinNoise();
	static FVector2D GenerateNoiseMap(float mapWidth, float mapHeight, float scale);
};
