// Copyright C 2019 Virtual Lilies


#include "Hand.h"

// Sets default values
AHand::AHand()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

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

