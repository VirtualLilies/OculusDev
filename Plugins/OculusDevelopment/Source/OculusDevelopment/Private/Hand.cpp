// Copyright C 2019 Virtual Lilies


#include "Hand.h"
#include "Components/SkeletalMeshComponent.h"
#include "Components/CapsuleComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Components/SplineMeshComponent.h"
#include "PhysicsEngine/PhysicsHandleComponent.h"

// Sets default values
AHand::AHand()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	VRRoot = CreateDefaultSubobject<USceneComponent>(TEXT("VRRoot"));
	RootComponent = VRRoot;

	HandMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("HandSkeletalMesh"));
	HandMesh->SetupAttachment(RootComponent);

	GrabRoot = CreateDefaultSubobject<USceneComponent>(TEXT("GrabSceneRoot"));
	GrabRoot->SetupAttachment(HandMesh);

	GrabTrigger = CreateDefaultSubobject<UCapsuleComponent>(TEXT("GrabTriggerCollisionCapsule"));
	GrabTrigger->SetupAttachment(HandMesh);

	LaserMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("LaserPointerMesh"));
	LaserMesh->SetupAttachment(RootComponent);

	TeleportMarker = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("TeleportMarkerMesh"));
	TeleportMarker->SetupAttachment(RootComponent);

	TeleportSplineMesh = CreateDefaultSubobject<USplineMeshComponent>(TEXT("TeleportSplineMesh"));
	TeleportSplineMesh->SetupAttachment(RootComponent);

	PhysicsHandle = CreateDefaultSubobject<UPhysicsHandleComponent>(TEXT("PhysicsHandle"));

	// Set default value for finger axis vars
	ThumbFingerAxis = 0.8f;
	IndexFingerAxis = 0.8f;
	MiddleFingerAxis = 0.8f;
	RingFingerAxis = 0.8f;
	PinkyFingerAxis = 0.8f;

}

void AHand::ActivateHand()
{
}

void AHand::DeactivateHand()
{
}

// Called when the game starts or when spawned
void AHand::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AHand::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

