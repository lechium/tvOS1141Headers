//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "_TVInterfaceCreatingPrivate.h"

@class NSString;

@interface TVSettingsInterfaceFactory : NSObject <_TVInterfaceCreatingPrivate>
{
}

+ (id)sharedInterfaceFactory;	// IMP=0x00000001000b8df8
+ (void)initialize;	// IMP=0x00000001000b8d88
- (id)_styleSheetURLForTemplate:(id)arg1;	// IMP=0x00000001000b8ec8
- (void)setup;	// IMP=0x00000001000b8e78

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

