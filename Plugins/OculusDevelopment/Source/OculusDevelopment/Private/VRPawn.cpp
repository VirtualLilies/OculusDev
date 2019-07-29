// Copyright C 2019 Virtual Lilies


#include "VRPawn.h"
#include "Camera/CameraComponent.h"
#include "Components/InputComponent.h"
#include "MotionControllerComponent.h"
#include "Components/SceneComponent.h"
#include "ConstructorHelpers.h"

// Sets default values
AVRPawn::AVRPawn()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

	Root = CreateDefaultSubobject<USceneComponent>(TEXT("DefaultSceneRoot"));
	RootComponent = Root;

	Camera = CreateDefaultSubobject<UCameraComponent>(TEXT("VRCamera"));
	Camera->SetupAttachment(RootComponent);

	LeftMotionController = CreateDefaultSubobject<UMotionControllerComponent>(TEXT("LeftMotionController"));
	LeftMotionController->SetupAttachment(RootComponent);

	RightMotionController = CreateDefaultSubobject<UMotionControllerComponent>(TEXT("RightMotionController"));
	RightMotionController->SetupAttachment(RootComponent);
	RightMotionController->SetTrackingSource(EControllerHand::Right);

	bCanMove = true;
}

// Called when the game starts or when spawned
void AVRPawn::BeginPlay()
{
	Super::BeginPlay();
	SetupPawn();
}

// Called every frame
void AVRPawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AVRPawn::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

void AVRPawn::SetupPawn()
{
	

}

