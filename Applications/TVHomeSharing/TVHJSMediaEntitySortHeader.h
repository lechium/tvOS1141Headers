//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IKJSObject.h"

#import "TVHJSMediaEntitySortHeader.h"

@class NSString, TVHKMediaEntitySortHeader;

@interface TVHJSMediaEntitySortHeader : IKJSObject <TVHJSMediaEntitySortHeader>
{
    TVHKMediaEntitySortHeader *_wrappedSortHeader;	// 8 = 0x8
}

@property(retain, nonatomic) TVHKMediaEntitySortHeader *wrappedSortHeader; // @synthesize wrappedSortHeader=_wrappedSortHeader;
- (void).cxx_destruct;	// IMP=0x000000010000d604
@property(readonly, nonatomic) unsigned long long count;
@property(readonly, nonatomic) unsigned long long startIndex;
@property(readonly, copy, nonatomic) NSString *title;
@property(readonly, copy) NSString *description;
- (id)initWithMediaEntitySortHeader:(id)arg1 appContext:(id)arg2;	// IMP=0x000000010000d2f4
- (id)initWithAppContext:(id)arg1;	// IMP=0x000000010000d26c
- (id)init;	// IMP=0x000000010000d1e4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

