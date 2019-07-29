// Copyright C 2019 Virtual Lilies


#include "TouchController.h"
#include "OculusFunctionLibrary.h"
#include "MotionControllerBase.h"
#include "InputCoreTypes.h"
#include "Hand.h"


// Sets default values
ATouchController::ATouchController()
{
	bInputFocus = false;
	ThumbstickX = 0.0f;
	ThumbstickY = 0.0f;
	TriggerAxis = 0.0f;
	GripAxis = 0.0f;

	
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

	void ATouchController::UpdateAnimationValues(float ThumbstickX, float ThumbstickY, float TriggerAxis, float GripAxis)
{

	switch (ControllerHandEnum)
	{
	case EControllerHand::Left:
		ThumbstickX = GetInputAxisKeyValue(EKeys::MotionController_Left_Thumbstick_X);
		ThumbstickY = GetInputAxisKeyValue(EKeys::MotionController_Left_Thumbstick_Y);
		TriggerAxis = GetInputAxisKeyValue(EKeys::MotionController_Left_TriggerAxis);
		GripAxis = GetInputAxisKeyValue(EKeys::MotionController_Left_Grip1Axis);

		break;

	case EControllerHand::Right:

		ThumbstickX = GetInputAxisKeyValue(EKeys::MotionController_Right_Thumbstick_X);
		ThumbstickY = GetInputAxisKeyValue(EKeys::MotionController_Right_Thumbstick_Y);
		TriggerAxis = GetInputAxisKeyValue(EKeys::MotionController_Right_TriggerAxis);
		GripAxis = GetInputAxisKeyValue(EKeys::MotionController_Right_Grip1Axis);

		break;
	}
}


void ATouchController::UpdateTeleportRotation()
{
}




