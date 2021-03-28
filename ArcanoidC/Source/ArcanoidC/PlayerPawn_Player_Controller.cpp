// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerPawn_Player_Controller.h"

#include "Kismet/GameplayStatics.h"
#include "Camera/CameraActor.h"

#include "PlayerPawn.h"
//#include "Ball.h"

APlayerPawn_Player_Controller::APlayerPawn_Player_Controller()
{
	TArray<AActor*> CameraActors;
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), ACameraActor::StaticClass(), CameraActors);
	FViewTargetTransitionParams Params;
	if(CameraActors.IsValidIndex(0))
		SetViewTarget(CameraActors[0], Params);
}

void APlayerPawn_Player_Controller::BeginPlay()
{
}

void APlayerPawn_Player_Controller::SetupInputComponent()
{
}

void APlayerPawn_Player_Controller::MoveHorizontal(float AxisValue)
{
}
