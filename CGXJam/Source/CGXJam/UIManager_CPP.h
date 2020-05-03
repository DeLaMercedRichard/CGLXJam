// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "UIManager_CPP.generated.h"

UCLASS()
class CGXJAM_API AUIManager_CPP : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AUIManager_CPP();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	
	//Timer Functionallity
		UPROPERTY(VisibleAnywhere, Category = "Stage Timer")
			bool b_isTimerActive; //is true, the timer will progress down towards true

		UFUNCTION(BlueprintCallable, Category = "Stage Timer")
			void SetTimer(float f_stageTimer_);//Sets the timer for the stage

		UFUNCTION(BlueprintCallable, Category = "Stage Timer")
			float GetTimer(); //Gets the stage timer

		void ProgressTime(float DeltaTime);
	
	//Stage Weight Tracking
		UFUNCTION(BlueprintCallable, Category = "Stage Properties")
			void SetStageBuildLimit(int stageLimit_); //set the max value of stage props that the player can place

		UFUNCTION(BlueprintCallable, Category = "Stage Properties")
			bool TryAddToStageBudget(int itemValue_); //increase the stages used budget based on the passed itme value

		UFUNCTION(BlueprintCallable, Category = "Stage Properties")
			void SubtractFromStageBudget(int itemValue_); //Decrease the stages used budget based on the passed itme value
		
		UFUNCTION(Blueprintpure, Category = "Stage Properties")
			int GetUsedBudget(); //get the used budget for the stage

		UFUNCTION(Blueprintpure, Category = "Stage Properties")
			int GetBuildLimit(); //get the max budget of the stage

	//Build Menu Properties
		UFUNCTION(BlueprintCallable, Category = "Build Menu")
			void SetMenuHidden(); //set if the build menu is hidden or not

		UFUNCTION(Blueprintpure, Category = "Build Menu")
			bool GetMenuHidden(); //call if the menu should be hidden for the UI
private:
	//Timer Functionallity
	UPROPERTY(VisibleAnywhere, Category = "Stage Timer")
	float f_timer; //The time the player has to complete the stage

	//Stage Weight Tracking
	UPROPERTY(VisibleAnywhere, Category = "Stage Properties")
		int i_buildLimit; //Max value of buildable obejects per stage

	UPROPERTY(VisibleAnywhere, Category = "Stage Properties")
		int i_usedBudget;//the amount of budget the player has used on the stage;

	//Build Menu Properties
	UPROPERTY(VisibleAnywhere, Category = "Build Menu")
	bool isHidden; //is the build menu showing?



	//debug functions
	void SetDefaults();

};
