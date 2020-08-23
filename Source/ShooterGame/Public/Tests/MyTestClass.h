// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "ShooterGame.h"
#include "CoreMinimal.h"
#include "Tests/AutomationCommon.h"
#include "Tests/AutomationEditorCommon.h"
#include "Pickups/ShooterPickup_Ammo.h"

//IMPLEMENT_SIMPLE_AUTOMATION_TEST(FPickupNullTest, "SimpleTest.PickupNullTest", EAutomationTestFlags::EditorContext | EAutomationTestFlags::EngineFilter)
//IMPLEMENT_SIMPLE_AUTOMATION_TEST(FPickupTest, "SimpleTest.FPickupTest", EAutomationTestFlags::EditorContext | EAutomationTestFlags::EngineFilter)
//
//bool FPickupNullTest::RunTest(const FString& Parameters)
//{
//	//TestNotNull("Pickup null", pickup);
//    //AShooterPickup pickup = AShooterPickup();
//	return true;
//}
//
//bool FPickupTest::RunTest(const FString& Parameters)
//{
//    return true;
//}

/**
 *
 */
 //class FMyTestClass : public FAutomationTestBase
 //{
 //public:
 //	FMyTestClass(const FString& InName) : FAutomationTestBase(InName, true) {};
 //	virtual uint32 GetTestFlags() const override { return EAutomationTestFlags::EditorContext | EAutomationTestFlags::EngineFilter; };
 //	virtual bool IsStressTest() const { return true; }
 //	virtual uint32 GetRequiredDeviceNum() const override { return 1; }
 //	virtual FString GetTestSourceFileName() const override { return __FILE__; };
 //	virtual int32 GetTestSourceFileLine() const override { return __LINE__; };
 //
 //protected:
 //	virtual void GetTests(TArray<FString>& OutBeautifiedNames, TArray <FString>& OutTestCommands) const override
 //	{
 //		OutBeautifiedNames.Add("SimpleTest.MadeComplex");
 //		OutTestCommands.Add(FString());
 //	};
 //	virtual bool RunTest(const FString& Parameters) override
 //	{
 //		AShooterPickup* pickup = &AShooterPickup();
 //		TestNotNull("Pickup null", pickup);
 //		return true;
 //	}
 //	virtual FString GetBeautifiedTestName() const override { return "SimpleTest.MadeComplex"; };
 //};
 //namespace
 //{
 //	FMyTestClass FMyTestClassAutomationTestInstance(TEXT("FMyTestClass"));
 //}