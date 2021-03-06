//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface TVMusicAgeGateInfo : NSObject
{
    _Bool _isAgeGateEnabled;	// 8 = 0x8
    long long _ratingThreshold;	// 16 = 0x10
    NSString *_dialogTitle;	// 24 = 0x18
    NSString *_dialogMessage;	// 32 = 0x20
}

+ (id)ageGateInfoFromURLBag;	// IMP=0x0000000100043f98
@property(retain, nonatomic) NSString *dialogMessage; // @synthesize dialogMessage=_dialogMessage;
@property(retain, nonatomic) NSString *dialogTitle; // @synthesize dialogTitle=_dialogTitle;
@property(nonatomic) long long ratingThreshold; // @synthesize ratingThreshold=_ratingThreshold;
@property(nonatomic) _Bool isAgeGateEnabled; // @synthesize isAgeGateEnabled=_isAgeGateEnabled;
- (void).cxx_destruct;	// IMP=0x00000001000443e8
- (id)initWithRatingThreshold:(long long)arg1 dialogTitle:(id)arg2 dialogMessage:(id)arg3;	// IMP=0x000000010004428c
- (id)initFromURLBag;	// IMP=0x000000010004404c
- (id)init;	// IMP=0x0000000100044018

@end

