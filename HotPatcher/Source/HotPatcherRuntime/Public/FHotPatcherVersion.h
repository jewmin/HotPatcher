#pragma once
// project header
#include "AssetManager/FAssetDependenciesInfo.h"
#include "FPatcherSpecifyAsset.h"
// engine header
#include "CoreMinimal.h"
#include "FHotPatcherVersion.generated.h"

USTRUCT(BlueprintType)
struct FHotPatcherVersion
{
	GENERATED_USTRUCT_BODY()

public:

	UPROPERTY(EditAnywhere,BlueprintReadWrite, Category = "HotPatcherVersion")
	FString VersionId;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "HotPatcherVersion")
	FString BaseVersionId;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "HotPatcherVersion")
	FString Date;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "HotPatcherVersion")
	TArray<FString> IncludeFilter;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "HotPatcherVersion")
	TArray<FString> IgnoreFilter;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "HotPatcherVersion")
	bool bIncludeHasRefAssetsOnly;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "HotPatcherVersion")
	TArray<FPatcherSpecifyAsset> IncludeSpecifyAssets;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "HotPatcherVersion")
	FAssetDependenciesInfo AssetInfo;
};