#pragma once

// project header
#include "FPakVersion.h"
// engine header
#include "CoreMinimal.h"
#include "FPakFileInfo.generated.h"

USTRUCT(BlueprintType)
struct FPakFileInfo
{
	GENERATED_USTRUCT_BODY()
public:

	UPROPERTY(EditAnywhere,BlueprintReadWrite, Category = "PakFileInfo")
	FString FileName;
	UPROPERTY(EditAnywhere,BlueprintReadWrite, Category = "PakFileInfo")
	FString Hash;
	UPROPERTY(EditAnywhere,BlueprintReadWrite, Category = "PakFileInfo")
	int32 FileSize;
	UPROPERTY(EditAnywhere,BlueprintReadWrite, Category = "PakFileInfo")
	FPakVersion PakVersion;
};