// Fill out your copyright notice in the Description page of Project Settings.


#include "FPSProjectGameMode.h"

void AFPSProjectGameMode::StartPlay()
{
	Super::StartPlay();
	
	check(GEngine != nullptr);

	//print to screen
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Yellow, TEXT("Welcome to the FPS Project!"));

	//print to output
	UE_LOG(LogTemp, Warning, TEXT("Welcome to the FPS Project!"));

	//printing values
	int TestNumber = 42;
	bool TestBoolean = true;
	UE_LOG(LogTemp, Warning, TEXT("TestNumber: %i"), TestNumber);
	UE_LOG(LogTemp, Warning, TEXT("TestBool: %i"), TestBoolean);

	//pointers
	int* TestPointer = &TestNumber;
	UE_LOG(LogTemp, Warning, TEXT("TestPointer: %p"), TestPointer);
	UE_LOG(LogTemp, Warning, TEXT("TestPointer: %i"), TestPointer);
	UE_LOG(LogTemp, Warning, TEXT("TestPointer DeRef: %i"), *TestPointer);

	FString TestString = TEXT("Hello World");
	UE_LOG(LogTemp, Warning, TEXT("TestString: %s"), *TestString);

	//Modern Way
	UE_LOGFMT(LogTemp, Warning, "TestNumber: {0}, TestBool: {1}, TestString: {2}", TestNumber, TestBoolean, "TestString");
}