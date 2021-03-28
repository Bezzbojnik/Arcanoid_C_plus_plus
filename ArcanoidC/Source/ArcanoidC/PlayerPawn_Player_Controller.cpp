// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerPawn_Player_Controller.h"

#include "Kismet/GameplayStatics.h"
#include "Camera/CameraActor.h"

#include "PlayerPawn.h"
//#include "Ball.h"

APlayerPawn_Player_Controller::APlayerPawn_Player_Controller()
{

}

void APlayerPawn_Player_Controller::BeginPlay()
{

	TArray<AActor*> CameraActors;
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), ACameraActor::StaticClass(), CameraActors);
	FViewTargetTransitionParams Params;
	SetViewTarget(CameraActors[0], Params);

}

void APlayerPawn_Player_Controller::SetupInputComponent()
{
	Super::SetupInputComponent();

	EnableInput(this);

	InputComponent->BindAxis("MoveHorizontal", this, &APlayerPawn_Player_Controller::MoveHorizontal);
}

void APlayerPawn_Player_Controller::MoveHorizontal(float AxisValue)
{
	auto MyPawn = Cast<APlayerPawn>(GetPawn());

	if (MyPawn) {
		MyPawn->MoveHorizontal(AxisValue);
	}
}
