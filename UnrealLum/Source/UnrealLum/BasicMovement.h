// Fill out your copyright notice in the Description page of Project Settings.

#pragma once


#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "BasicMovement.generated.h"
//#include "GameFramework/Actor.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class UNREALLUM_API UBasicMovement : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UBasicMovement();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	UPROPERTY(EditAnywhere, Category="Basic")
		float TimeToLoc1 = 10;
	UPROPERTY(EditAnywhere, Category = "Basic")
		float TimeToLoc2 = 10;

	UPROPERTY(EditAnywhere, Category = "Basic")
		FVector Location1;
	UPROPERTY(EditAnywhere, Category = "Basic")
		FVector Location2;
	UPROPERTY(EditAnywhere, Category = "Basic")
		AActor* ParentActor = nullptr;
	UPROPERTY(EditAnywhere, Category = "Basic")
		FString NameOfObject = "NULL";

	UStaticMeshComponent* object = nullptr;
};
