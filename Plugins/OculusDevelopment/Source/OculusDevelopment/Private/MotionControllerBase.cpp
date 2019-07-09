// Copyright C 2019 Virtual Lilies


#include "MotionControllerBase.h"
#include "Components/InputComponent.h"

// Sets default values
AMotionControllerBase::AMotionControllerBase()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	// Set to automatically receive input for the first player
	AutoReceiveInput = EAutoReceiveInput::Player0;
}

// Called when the game starts or when spawned
void AMotionControllerBase::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMotionControllerBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

