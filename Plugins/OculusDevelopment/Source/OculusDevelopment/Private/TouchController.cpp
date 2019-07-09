// Copyright C 2019 Virtual Lilies


#include "TouchController.h"
#include "OculusFunctionLibrary.h"



// Sets default values
ATouchController::ATouchController()
{

	bool bInputFocus = false;
	float ThumbstickX = 0.0f;
	float ThumbstickY = 0.0f;
	float TriggerAxis = 0.0f;
	float GripAxis = 0.0f;

	
}

void ATouchController::Tick(float DeltaTime)
{
	
	if (bInputFocus != UOculusFunctionLibrary::HasInputFocus())
	{
		bInputFocus = UOculusFunctionLibrary::HasInputFocus();
		if (bInputFocus)
		{
			Hand->ActivateHand();
		}
		else
		
		SetActorHiddenInGame(true);
		Hand->DeactivateHand();

	}
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




