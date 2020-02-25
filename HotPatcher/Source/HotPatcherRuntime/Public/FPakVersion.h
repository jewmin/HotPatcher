#pragma once

#include "CoreMinimal.h"
#include "FPakVersion.generated.h"

USTRUCT(BlueprintType)
struct FPakVersion
{
	GENERATED_USTRUCT_BODY()
public:
	UPROPERTY(EditAnywhere,BlueprintReadWrite, Category = "PakVersion")
		FString VersionId;
	UPROPERTY(EditAnywhere,BlueprintReadWrite, Category = "PakVersion")
		FString BaseVersionId;
	UPROPERTY(EditAnywhere,BlueprintReadWrite, Category = "PakVersion")
		FString Date;
	UPROPERTY(EditAnywhere,BlueprintReadWrite, Category = "PakVersion")
		FString CheckCode;
};