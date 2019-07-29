// Copyright C 2019 Virtual Lilies

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "IndexCollider.generated.h"

UCLASS()
class OCULUSDEVELOPMENT_API AIndexCollider : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AIndexCollider();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
