// Copyright C 2019 Virtual Lilies


#include "TouchController.h"
#include "OculusFunctionLibrary.h"



// Sets default values
ATouchController::ATouchController()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	bool bInputFocus = false;
	float ThumbstickX = 0.0f;
	float ThumbstickY = 0.0f;
	float TriggerAxis = 0.0f;
	float GripAxis = 0.0f;

	
}

void ATouchController::Tick(float DeltaTime)
{

}

void ATouchController::UpdateAnimationValues()
{

}

void ATouchController::UpdateHandAnimations()
{
}

void ATouchController::UpdateTeleportRotation()
{
}




