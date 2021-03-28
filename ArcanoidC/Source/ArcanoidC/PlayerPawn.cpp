// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerPawn.h"

#include "GameFramework/FloatingPawnMovement.h"
#include "Components/StaticMeshComponent.h"

// Sets default values
APlayerPawn::APlayerPawn()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	SM_PlayerPawn = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("SM PlayerPawn"));
	RootComponent = SM_PlayerPawn;

	SM_PlayerPawn->SetEnableGravity(false);
	SM_PlayerPawn->SetConstraintMode(EDOFMode::XYPlane);
	SM_PlayerPawn->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
	SM_PlayerPawn->SetCollisionProfileName(TEXT("PhysicsActor"));

	FloatingMovement = CreateDefaultSubobject<UFloatingPawnMovement>(TEXT("Floating Pawn Movement"));

}

// Called when the game starts or when spawned
void APlayerPawn::BeginPlay()
{

}

// Called every frame
void APlayerPawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void APlayerPawn::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

void APlayerPawn::MoveHorizontal(float AxisValue)
{
	AddMovementInput(FVector(AxisValue, 0.0f, 0.0f), 1.0f, false);
}

