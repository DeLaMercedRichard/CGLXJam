// Fill out your copyright notice in the Description page of Project Settings.


#include "UIManager_CPP.h"

// Sets default values
AUIManager_CPP::AUIManager_CPP()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	SetDefaults();
	


}

// Called when the game starts or when spawned
void AUIManager_CPP::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AUIManager_CPP::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (b_isTimerActive) //if the timer is active, progress time in the stage
		ProgressTime(DeltaTime);
}

//stage Timer Properties
void AUIManager_CPP::ProgressTime(float DeltaTime)
{
	f_timer -= DeltaTime; //count down the stage timer

	if (f_timer <= 0)
	{
		f_timer = 0; //set timer to equal 0
		b_isTimerActive = false; //disable the stage timer if time runs out
	}
}

void AUIManager_CPP::SetTimer(float f_stageTimer_)
{
	f_timer = f_stageTimer_; //set the stage timer
}

float AUIManager_CPP::GetTimer()
{
	return f_timer; //return the stage timer to the UI display
}

void AUIManager_CPP::SetStageBuildLimit(int stageLimit_)
{

}
bool AUIManager_CPP::TryAddToStageBudget(int itemValue_)
{
	i_usedBudget += itemValue_;
	if (i_usedBudget <= i_buildLimit)//debug only, player class will check against the item usage /cap
	{
		if (i_usedBudget <= i_buildLimit)
		{
			return true;
		}
		else
		{
			i_usedBudget -= itemValue_;
			return false;
		}

	}
	else
	{
		i_usedBudget -= itemValue_;
		return false;
	}
}
void AUIManager_CPP::SubtractFromStageBudget(int itemValue_)
{
	if (i_usedBudget != 0)
	i_usedBudget -= itemValue_;//debug only, player class will check against the item usage /cap
	
}
int AUIManager_CPP::GetUsedBudget()
{
	return i_usedBudget;
}
int AUIManager_CPP::GetBuildLimit()
{
	return i_buildLimit;
}


void AUIManager_CPP::SetMenuHidden()
{
	//if true, menu is hidden and must be shown
	//if false, menu is showing and must be hidden
	switch (isHidden)
	{
	case true: //menu will become visible
		isHidden = false;
		break;
	case false: //menu will become hidden
		isHidden = true;
		break;
	
	}
	
}

bool AUIManager_CPP::GetMenuHidden()
{
	return isHidden;
}

void AUIManager_CPP::SetDefaults() //default throwaway values
{
		f_timer = 300.0f;
		b_isTimerActive = true;
		i_buildLimit = 10;
		i_usedBudget = 0;
		isHidden = true;
}

