//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IKJSObject.h"

#import "TVHJSMediaServerContentsChange.h"

@class NSString, TVHSMediaServerContentsChange;

@interface TVHJSMediaServerContentsChange : IKJSObject <TVHJSMediaServerContentsChange>
{
    TVHSMediaServerContentsChange *_contentsChange;	// 8 = 0x8
}

@property(copy, nonatomic) TVHSMediaServerContentsChange *contentsChange; // @synthesize contentsChange=_contentsChange;
- (void).cxx_destruct;	// IMP=0x000000010003070c
@property(readonly, copy, nonatomic) NSString *photoLibraryState;
@property(readonly, nonatomic) unsigned long long revision;
@property(readonly, copy, nonatomic) NSString *protocol;
- (id)initWithContentsChange:(id)arg1 appContext:(id)arg2;	// IMP=0x000000010003055c
- (id)initWithAppContext:(id)arg1;	// IMP=0x00000001000304d4
- (id)init;	// IMP=0x000000010003044c

@end

