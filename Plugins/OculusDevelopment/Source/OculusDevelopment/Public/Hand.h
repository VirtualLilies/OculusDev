// Copyright C 2019 Virtual Lilies

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Hand.generated.h"

UCLASS(config=Game, Blueprintable)
class OCULUSDEVELOPMENT_API AHand : public AActor
{
	GENERATED_BODY()


private:

	UPROPERTY(VisibleAnywhere, Category = "Components", meta = (AllowPrivateAccess = "true"))
		class USceneComponent* VRRoot;

	UPROPERTY(VisibleAnywhere, Category = "Components", meta = (AllowPrivateAccess = "true"))
		class USkeletalMeshComponent* HandMesh;

	UPROPERTY(VisibleAnywhere, Category = "Components", meta = (AllowPrivateAccess = "true"))
		class USceneComponent* GrabRoot;

	UPROPERTY(VisibleAnywhere, Category = "Components", meta = (AllowPrivateAccess = "true"))
		class UCapsuleComponent* GrabTrigger;

	UPROPERTY(VisibleAnywhere, Category = "Components", meta = (AllowPrivateAccess = "true"))
		class UStaticMeshComponent* LaserMesh;

	UPROPERTY(VisibleAnywhere, Category = "Components", meta = (AllowPrivateAccess = "true"))
		class UStaticMeshComponent* TeleportMarker;

	UPROPERTY(VisibleAnywhere, Category = "Components", meta = (AllowPrivateAccess = "true"))
		class USplineMeshComponent* TeleportSplineMesh;

	UPROPERTY(VisibleAnywhere, Category = "Components", meta = (AllowPrivateAccess = "true"))
		class UPhysicsHandleComponent* PhysicsHandle;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Sets default values for this actor's properties
	AHand();

	void ActivateHand();

	void DeactivateHand();

	// Hand anim finger variables
	float ThumbFingerAxis;
	float IndexFingerAxis;
	float MiddleFingerAxis;
	float RingFingerAxis;
	float PinkyFingerAxis;

	

};
