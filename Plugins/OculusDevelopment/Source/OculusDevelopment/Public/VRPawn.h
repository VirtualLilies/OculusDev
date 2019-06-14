// Copyright C 2019 Virtual Lilies

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "GameFramework/PlayerController.h"
#include "VRPawn.generated.h"

class UMotionControllerComponent;
class UCameraComponent;
class UInputComponent;
class USceneComponent;

UCLASS(config=Game)
class OCULUSDEVELOPMENT_API AVRPawn : public APawn
{
	GENERATED_BODY()

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components", meta = (AllowPrivateAccess = "true"))
	USceneComponent* Root;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components", meta = (AllowPrivateAccess = "true"))
	UMotionControllerComponent* LeftMotionController;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components", meta = (AllowPrivateAccess = "true"))
	UMotionControllerComponent* RightMotionController;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Camera", meta = (AllowPrivateAccess = "true"))
	UCameraComponent* Camera;

public:
	// Sets default values for this pawn's properties
	AVRPawn();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
