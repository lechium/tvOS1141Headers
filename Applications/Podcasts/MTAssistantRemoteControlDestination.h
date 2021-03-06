//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSMutableCopying.h"

@class NSArray, NSString;

@interface MTAssistantRemoteControlDestination : NSObject <NSMutableCopying>
{
    NSString *_appBundleID;	// 8 = 0x8
    NSString *_playerID;	// 16 = 0x10
    void *_origin;	// 24 = 0x18
    NSArray *_outputDeviceUIDs;	// 32 = 0x20
    void *_outputGroup;	// 40 = 0x28
}

+ (id)watchRadioApplicationDestination;	// IMP=0x00000001000d3b5c
+ (id)systemPodcastsApplicationDestination;	// IMP=0x00000001000d3b10
+ (id)systemMediaApplicationDestination;	// IMP=0x00000001000d3ac4
@property(readonly, nonatomic) void *outputGroup; // @synthesize outputGroup=_outputGroup;
@property(readonly, nonatomic) NSArray *outputDeviceUIDs; // @synthesize outputDeviceUIDs=_outputDeviceUIDs;
@property(readonly, nonatomic) void *origin; // @synthesize origin=_origin;
@property(readonly, nonatomic) NSString *playerID; // @synthesize playerID=_playerID;
@property(readonly, nonatomic) NSString *appBundleID; // @synthesize appBundleID=_appBundleID;
- (void).cxx_destruct;	// IMP=0x00000001000d4010
- (id)_copyWithZone:(struct _NSZone *)arg1 usingConcreteClass:(Class)arg2;	// IMP=0x00000001000d3eec
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000001000d3ea4
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000001000d3e64
- (void *)createPlayerPath;	// IMP=0x00000001000d3de0
- (id)description;	// IMP=0x00000001000d3d14
- (void)dealloc;	// IMP=0x00000001000d3cc0
- (id)init;	// IMP=0x00000001000d3ca8
- (id)initWithAppBundleID:(id)arg1;	// IMP=0x00000001000d3c94
- (id)initWithAppBundleID:(id)arg1 playerID:(id)arg2 origin:(void *)arg3;	// IMP=0x00000001000d3b98

@end

