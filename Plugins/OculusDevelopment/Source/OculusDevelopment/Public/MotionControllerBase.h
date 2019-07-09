// Copyright C 2019 Virtual Lilies

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Hand.h"

#include "MotionControllerBase.generated.h"

UCLASS()
class OCULUSDEVELOPMENT_API AMotionControllerBase : public AActor
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Setup", meta = (AllowPrivateAccess = "true"))
	EControllerHand ControllerHandEnum;

	
public:	
	// Sets default values for this actor's properties
	AMotionControllerBase();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Setup", meta = (AllowPrivateAccess = "true"))
	AHand* Hand;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
