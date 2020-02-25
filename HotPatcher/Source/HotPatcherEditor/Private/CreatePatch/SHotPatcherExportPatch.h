// Copyright 1998-2016 Epic Games, Inc. All Rights Reserved.

#pragma once
#include "Interfaces/ITargetPlatformManagerModule.h"
#include "Interfaces/ITargetPlatform.h"
#include "Model/FHotPatcherCreatePatchModel.h"
#include "ExportPatchSettings.h"
#include "SHotPatcherInformations.h"

// engine header
#include "Templates/SharedPointer.h"
#include "IDetailsView.h"
#include "PropertyEditorModule.h"
#include "Widgets/Text/SMultiLineEditableText.h"
/**
 * Implements the cooked platforms panel.
 */
class SHotPatcherExportPatch
	: public SCompoundWidget
{
public:

	SLATE_BEGIN_ARGS(SHotPatcherExportPatch) { }
	SLATE_END_ARGS()

public:

	/**
	 * Constructs the widget.
	 *
	 * @param InArgs The Slate argument list.
	 */
	void Construct(	const FArguments& InArgs,TSharedPtr<FHotPatcherCreatePatchModel> InCreateModel);

protected:
	void CreateExportFilterListView();
	bool CanExportPatch()const;
	FReply DoExportPatch();

	FReply DoDiff()const;
	bool CanDiff()const;
	FReply DoClearDiff()const;
	EVisibility VisibilityDiffButtons()const;

	bool InformationContentIsVisibility()const;
	void SetInformationContent(const FString& InContent)const;
	void SetInfomationContentVisibility(EVisibility InVisibility)const;
private:

	TSharedPtr<FHotPatcherCreatePatchModel> mCreatePatchModel;

	/** Settings view ui element ptr */
	TSharedPtr<IDetailsView> SettingsView;

	UExportPatchSettings* ExportPatchSetting;

	TSharedPtr<SHotPatcherInformations> DiffWidget;
};

