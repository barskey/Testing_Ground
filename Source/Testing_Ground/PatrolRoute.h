// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Components/ActorComponent.h"
#include "PatrolRoute.generated.h"

/**
 *  A Route Component to help assign patrol points
 */
UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class TESTING_GROUND_API UPatrolRoute : public UActorComponent
{
	GENERATED_BODY()

public:
    TArray<AActor*> GetPatrolPoints() const;
    
private:
    UPROPERTY(EditInstanceOnly, Category="Patrol Route")
    TArray<AActor*> PatrolPoints;
    
};
