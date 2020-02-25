#pragma once

#include "Containers/Map.h"
#include "AssetManager/FAssetDependenciesDetail.h"
#include "CoreMinimal.h"
#include "FAssetDependenciesInfo.generated.h"

USTRUCT(BlueprintType)
struct ASSETMANAGEREX_API FAssetDependenciesInfo
{
	GENERATED_USTRUCT_BODY()
		//UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AssetDependenciesInfo")
		//FString mAssetRef;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AssetDependenciesInfo")
		TMap<FString,FAssetDependenciesDetail> mDependencies;
};
