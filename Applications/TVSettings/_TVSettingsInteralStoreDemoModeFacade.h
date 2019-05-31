//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface _TVSettingsInteralStoreDemoModeFacade : NSObject
{
    _Bool _videoPlaybackRestricted;	// 8 = 0x8
    _Bool _hasCustomScreenSaverConfigurationURLString;	// 9 = 0x9
    NSString *_screenSaverConfigurationURLString;	// 16 = 0x10
    double _videoPlaybackRestrictionTimeout;	// 24 = 0x18
    NSString *_modeType;	// 32 = 0x20
}

@property(nonatomic) _Bool hasCustomScreenSaverConfigurationURLString; // @synthesize hasCustomScreenSaverConfigurationURLString=_hasCustomScreenSaverConfigurationURLString;
@property(copy, nonatomic) NSString *modeType; // @synthesize modeType=_modeType;
@property(nonatomic) double videoPlaybackRestrictionTimeout; // @synthesize videoPlaybackRestrictionTimeout=_videoPlaybackRestrictionTimeout;
@property(nonatomic) _Bool videoPlaybackRestricted; // @synthesize videoPlaybackRestricted=_videoPlaybackRestricted;
- (void).cxx_destruct;	// IMP=0x000000010003cb9c
@property(copy, nonatomic) NSString *screenSaverConfigurationURLString; // @synthesize screenSaverConfigurationURLString=_screenSaverConfigurationURLString;
- (_Bool)applyChanges;	// IMP=0x000000010003c6f4
@property(readonly, getter=isDirty) _Bool dirty;
- (unsigned long long)modeTypeEnum;	// IMP=0x000000010003c420
- (unsigned long long)modeTypeIndexToEnum:(long long)arg1;	// IMP=0x000000010003c40c
- (id)availableModeTypes;	// IMP=0x000000010003c38c
- (void)restoreDefaults;	// IMP=0x000000010003c1e4
- (id)init;	// IMP=0x000000010003c18c

@end

