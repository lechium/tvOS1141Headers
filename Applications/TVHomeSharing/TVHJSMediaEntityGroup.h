//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IKJSObject.h"

#import "TVHJSMediaEntityGroup.h"

@class NSArray, NSString;

@interface TVHJSMediaEntityGroup : IKJSObject <TVHJSMediaEntityGroup>
{
    NSArray *_mediaEntities;	// 8 = 0x8
    NSString *_title;	// 16 = 0x10
}

@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSArray *mediaEntities; // @synthesize mediaEntities=_mediaEntities;
- (void).cxx_destruct;	// IMP=0x0000000100038bf0
@property(readonly, copy) NSString *description;
- (id)initWithTitle:(id)arg1 mediaEntities:(id)arg2 appContext:(id)arg3;	// IMP=0x0000000100038860

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

