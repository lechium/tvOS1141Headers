//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSNumber, NSString, TVNPRoutingDestination;

@interface TVNPRoute : NSObject
{
    NSString *_title;	// 8 = 0x8
    NSString *_routeUID;	// 16 = 0x10
    unsigned long long _deviceType;	// 24 = 0x18
    _Bool _local;	// 32 = 0x20
    _Bool _canBeGrouped;	// 33 = 0x21
    unsigned long long _selectionState;	// 40 = 0x28
    NSNumber *_volumeLevel;	// 48 = 0x30
    TVNPRoutingDestination *_destination;	// 56 = 0x38
}

@property(retain, nonatomic) TVNPRoutingDestination *destination; // @synthesize destination=_destination;
@property(copy, nonatomic) NSNumber *volumeLevel; // @synthesize volumeLevel=_volumeLevel;
@property(nonatomic) _Bool canBeGrouped; // @synthesize canBeGrouped=_canBeGrouped;
@property(nonatomic) unsigned long long selectionState; // @synthesize selectionState=_selectionState;
@property(nonatomic, getter=isLocal) _Bool local; // @synthesize local=_local;
@property(nonatomic) unsigned long long deviceType; // @synthesize deviceType=_deviceType;
@property(copy, nonatomic) NSString *routeUID; // @synthesize routeUID=_routeUID;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;	// IMP=0x000000010000debc
- (id)_init;	// IMP=0x000000010000dd90
- (id)init;	// IMP=0x000000010000dd78

@end

