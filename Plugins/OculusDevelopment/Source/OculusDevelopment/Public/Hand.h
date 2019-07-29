// Copyright C 2019 Virtual Lilies

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "VRPawn.h"
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

	//Save pawn reference
	AVRPawn* MyPawn;

	// Teleport functions and variables
	float Yaw;

	void ActivateHand();

	void DeactivateHand();

	void AddTeleportRotation(float InYaw);

	bool bTeleportActive;

	// Exposed helper function for further use cases
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Teleport")
	bool IsTeleportActive();

	void ActivateTeleport();
	void DeactivateTeleport();

	/*Hand stuff*/

	// Hand actions functions

	void ThumbAction();
	void ThumbActionEnd();
	void IndexAction();
	void IndexActionEnd();
	void FireFingerActions();
	void StopFingerActions();

	// Hand animation fingers variables
	float ThumbFingerAxis;
	float IndexFingerAxis;
	float MiddleFingerAxis;
	float RingFingerAxis;
	float PinkyFingerAxis;

	UFUNCTION(BlueprintCallable, Category = "Updates", meta = (AllowPrivateAccess = "true"))
	void UpdateHandAnimation(float Thumb, float Index, float Middle, float Ring, float Pinky);

};
