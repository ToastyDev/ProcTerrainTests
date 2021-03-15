// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PerlinNoise.h"

#include "MapGenerator.generated.h"


UCLASS()
class TERRAINTESTS_API AMapGenerator : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMapGenerator();
	UPROPERTY(EditAnywhere)
	float mapWidth;
	UPROPERTY(EditAnywhere)
	float mapHeight;
	UPROPERTY(EditAnywhere)
	float noiseScale;

	void GenerateMap();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
