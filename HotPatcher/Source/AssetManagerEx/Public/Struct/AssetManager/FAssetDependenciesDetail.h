#pragma once

//project header
#include "AssetManager/FAssetDetail.h"

//engine header
#include "CoreMinimal.h"
#include "FAssetDependenciesDetail.generated.h"

USTRUCT(BlueprintType)
struct ASSETMANAGEREX_API FAssetDependenciesDetail
{
	GENERATED_USTRUCT_BODY()

	FAssetDependenciesDetail() = default;
	FAssetDependenciesDetail(const FAssetDependenciesDetail&) = default;
	FAssetDependenciesDetail& operator=(const FAssetDependenciesDetail&) = default;
	FORCEINLINE FAssetDependenciesDetail(const FString& InModuleCategory, const TMap<FString, FAssetDetail>& InDependAssetDetails)
		: mModuleCategory(InModuleCategory), mDependAssetDetails(InDependAssetDetails)
	{}

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AssetDependenciesDetail")
		FString mModuleCategory;
	//UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AssetDependenciesDetail")
	//	TArray<FString> mDependAsset;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AssetDependenciesDetail")
		TMap<FString,FAssetDetail> mDependAssetDetails;
};
