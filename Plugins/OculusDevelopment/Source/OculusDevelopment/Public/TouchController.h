// Copyright C 2019 Virtual Lilies

#pragma once

#include "CoreMinimal.h"
#include "MotionControllerBase.h"
#include "TouchController.generated.h"

/**
 * 
 */
UCLASS(config = Game, Blueprintable)
class OCULUSDEVELOPMENT_API ATouchController : public AMotionControllerBase
{
	GENERATED_BODY()


	// Sets default values for this actor's properties
	ATouchController();

	UFUNCTION(BlueprintCallable, Category = "Updates")
	void UpdateAnimationValues(float ThumbstickX, float ThumbstickY, float TriggerAxis, float GripAxis);

	UFUNCTION(BlueprintCallable, Category = "Updates")
	void UpdateTeleportRotation();
		
public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Variables for input/animation management
	bool bInputFocus;
	float ThumbstickX;
	float ThumbstickY;
	float TriggerAxis;
	float GripAxis;

};
