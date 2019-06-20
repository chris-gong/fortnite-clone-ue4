// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "LobbyGameMode.generated.h"

DECLARE_LOG_CATEGORY_EXTERN(LogMyServerLobby, Log, All);
/**
 * 
 */
UCLASS()
class FORTNITECLONE_API ALobbyGameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	ALobbyGameMode();

	bool GameReady;

	virtual void BeginPlay() override;

	virtual void StartPlay() override;

	virtual void PostLogin(APlayerController* NewPlayer) override;

	virtual void PreLogin(const FString& Options, const FString& Address, const FUniqueNetIdRepl& UniqueId, FString& ErrorMessage) override;

	UFUNCTION(Server, Reliable, WithValidation)
	void ServerStartGame();
};

