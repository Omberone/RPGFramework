// Copyright 1998-2013 Epic Games, Inc. All Rights Reserved.

#pragma once
#include "../../Powers/RPGPowerBase.h"
#include "RPG.h"
#include "Slate.h"
/**
 * 
 */
//UCLASS()
class SFloatingCombatTextWidget : public SCompoundWidget
{
public:
	SLATE_BEGIN_ARGS(SFloatingCombatTextWidget) //this is really important it must be declared
	{}

	/* Owning HUD for getting Game World */
	SLATE_ARGUMENT(TWeakObjectPtr<class ARPGHUD>, OwnerHUD) //that too
	SLATE_DEFAULT_SLOT(FArguments, Content) //and this, but to be honest I'm not sure what it does at this point
	SLATE_END_ARGS() //this is obviously end
	void Construct(const FArguments& InArgs); //i assume here we will build body of widget that will be drawed on screen
	void Tick( const FGeometry& AllottedGeometry, const double InCurrentTime, const float InDeltaTime ) OVERRIDE;
protected:
	FSlateColor	GetTextColor() const;
	/* onwer of our hud */
	TWeakObjectPtr<class ARPGHUD> OwnerHUD;
	FString GetTargetsHealth() const;
	float tick;
	float val;
};
