//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSFormatter;

@interface TVSettingsAppleRemoteFacade : NSObject
{
}

+ (id)sharedInstance;	// IMP=0x000000010006e7a0
@property(readonly, nonatomic) NSFormatter *sensitivityFormatter;
- (id)availableSensitivityLabels;	// IMP=0x000000010006e930
@property(readonly, nonatomic) NSArray *availableSensitivityValues;
@property(nonatomic) long long sensitivity;

@end

