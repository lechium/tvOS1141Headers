//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface MTAddPodcastParams : NSObject
{
    _Bool _userInitiated;	// 8 = 0x8
    NSString *_url;	// 16 = 0x10
    NSString *_location;	// 24 = 0x18
    long long _storeCollectionId;	// 32 = 0x20
    CDUnknownBlockType _completion;	// 40 = 0x28
}

@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(nonatomic) _Bool userInitiated; // @synthesize userInitiated=_userInitiated;
@property(nonatomic) long long storeCollectionId; // @synthesize storeCollectionId=_storeCollectionId;
@property(retain, nonatomic) NSString *location; // @synthesize location=_location;
@property(retain, nonatomic) NSString *url; // @synthesize url=_url;
- (void).cxx_destruct;	// IMP=0x00000001001889cc
- (id)init;	// IMP=0x0000000100188638

@end

