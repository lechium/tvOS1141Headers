//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface TVDAStepsFactory : NSObject
{
}

+ (id)makeRegionChangeStepsWithModeSwitch:(id)arg1;	// IMP=0x000000010000f31c
+ (id)makeCableFailureSteps;	// IMP=0x000000010000f05c
+ (id)makeNetworkFailureSteps;	// IMP=0x000000010000ed9c
+ (id)makeCableCheckRevertStepsWithDestinationMode:(id)arg1;	// IMP=0x000000010000ed8c
+ (id)makeCableCheckRevertStepsWithDestinationMode:(id)arg1 noSupportKind:(long long)arg2;	// IMP=0x000000010000e87c
+ (id)makeHDRBuddyRevertSteps;	// IMP=0x000000010000e5bc
+ (id)makePostModeSwitchStepsWithModeSwitch:(id)arg1;	// IMP=0x000000010000dd5c
+ (id)makeRealModeSwitchStepsWithModeSwitch:(id)arg1;	// IMP=0x000000010000dd50
+ (id)makeVirtualModeSwitchStepsWithModeSwitch:(id)arg1;	// IMP=0x000000010000d950
+ (id)makeVerifyModeStepsWithModeSwitch:(id)arg1;	// IMP=0x000000010000cac8
+ (id)makeCableCheckStepsWithModeSwitch:(id)arg1;	// IMP=0x000000010000b87c
+ (id)makeHDRBuddyStepsWithModeSwitch:(id)arg1;	// IMP=0x000000010000ada8

@end

