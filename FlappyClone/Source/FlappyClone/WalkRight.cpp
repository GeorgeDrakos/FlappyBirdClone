// Fill out your copyright notice in the Description page of Project Settings.

#include "WalkRight.h"
#include "GameFramework/Actor.h"


// Sets default values for this component's properties
UWalkRight::UWalkRight()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UWalkRight::BeginPlay()
{
	Super::BeginPlay();
	// ...
	
}


// Called every frame
void UWalkRight::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
	AActor* Owner = GetOwner();
	FVector BirdLocation = Owner -> GetActorLocation();
	Owner->SetActorLocation(BirdLocation + 10);
	// ...
}

