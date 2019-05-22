// Fill out your copyright notice in the Description page of Project Settings.


#include "BasicMovement.h"

class UStaticMeshComponent;
class AActor;
class Super;

// Sets default values for this component's properties
UBasicMovement::UBasicMovement()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UBasicMovement::BeginPlay()
{
	Super::BeginPlay();

	if (ParentActor) {
		TArray<UStaticMeshComponent*> Components;
		ParentActor->GetComponents<UStaticMeshComponent>(Components);
		for (int32 i = 0; i < Components.Num(); i++)
		{
			if (Components[i]->GetName() == NameOfObject) {



				//Components[i]->
			}
			



			
			//UStaticMeshComponent* StaticMeshComponent = Components[i];
			//UStaticMesh* StaticMesh = StaticMeshComponent->StaticMesh;
		}

	}



	// ...
	
}


// Called every frame
void UBasicMovement::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

