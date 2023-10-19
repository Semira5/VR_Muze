// Fill out your copyright notice in the Description page of Project Settings.


#include "OSY_PropWidget.h"
#include "Components/Button.h"
#include "KJS_TestSpawnActor.h"

void UOSY_PropWidget::NativeConstruct()
{
	btn_BoxSpawn->OnClicked.AddDynamic(this, &UOSY_PropWidget::SpawnBox);


}

void UOSY_PropWidget::SpawnBox()
{
	UWorld* World = GetWorld();
	if (World)
	{
		//버튼 클릭하면
		//스폰
		//어디에?
		//맵의 지정된 위치에

		FActorSpawnParameters param;
		FVector spawnLoc = FVector(0,0,0);
		FRotator spawnRot = FRotator(0,0,0);
		param.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;
		//AKJS_TestSpawnActor* Cube = World->SpawnActor<AKJS_TestSpawnActor>(AKJS_TestSpawnActor::StaticClass(), spawnLoc, spawnRot, param);
		
	}
}
