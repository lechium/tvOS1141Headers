//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSNumber, NSString, TVViewElement;

@interface TVASBuyButtonInfo : NSObject <NSCopying>
{
    _Bool _requiresGameController;	// 8 = 0x8
    _Bool _containsInAppPurchases;	// 9 = 0x9
    _Bool _isPreorder;	// 10 = 0xa
    _Bool _updateableOverride;	// 11 = 0xb
    TVViewElement *_viewElement;	// 16 = 0x10
    NSNumber *_adamID;	// 24 = 0x18
    NSString *_artistName;	// 32 = 0x20
    NSString *_bundleId;	// 40 = 0x28
    NSString *_buyParams;	// 48 = 0x30
    NSString *_redownloadParams;	// 56 = 0x38
    NSString *_updateParams;	// 64 = 0x40
    NSString *_contentRating;	// 72 = 0x48
    NSString *_appTitle;	// 80 = 0x50
    NSString *_pricingText;	// 88 = 0x58
    NSString *_actionTitle;	// 96 = 0x60
}

@property(nonatomic) _Bool updateableOverride; // @synthesize updateableOverride=_updateableOverride;
@property(readonly, nonatomic) _Bool isPreorder; // @synthesize isPreorder=_isPreorder;
@property(readonly, nonatomic) _Bool containsInAppPurchases; // @synthesize containsInAppPurchases=_containsInAppPurchases;
@property(readonly, nonatomic) _Bool requiresGameController; // @synthesize requiresGameController=_requiresGameController;
@property(readonly, copy, nonatomic) NSString *actionTitle; // @synthesize actionTitle=_actionTitle;
@property(readonly, copy, nonatomic) NSString *pricingText; // @synthesize pricingText=_pricingText;
@property(readonly, nonatomic) NSString *appTitle; // @synthesize appTitle=_appTitle;
@property(readonly, nonatomic) NSString *contentRating; // @synthesize contentRating=_contentRating;
@property(readonly, nonatomic) NSString *updateParams; // @synthesize updateParams=_updateParams;
@property(readonly, nonatomic) NSString *redownloadParams; // @synthesize redownloadParams=_redownloadParams;
@property(readonly, nonatomic) NSString *buyParams; // @synthesize buyParams=_buyParams;
@property(readonly, nonatomic) NSString *bundleId; // @synthesize bundleId=_bundleId;
@property(readonly, nonatomic) NSString *artistName; // @synthesize artistName=_artistName;
@property(readonly, nonatomic) NSNumber *adamID; // @synthesize adamID=_adamID;
@property(readonly, nonatomic) TVViewElement *viewElement; // @synthesize viewElement=_viewElement;
- (void).cxx_destruct;	// IMP=0x000000010000ce98
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000010000cccc
- (id)copyAfterAppUpdate;	// IMP=0x000000010000cc90
@property(readonly, nonatomic) _Bool isRedownloadable;
@property(readonly, nonatomic) _Bool isUpdatable;
@property(readonly, nonatomic) _Bool isPurchasable;
- (id)initWithViewElement:(id)arg1 pricingText:(id)arg2 actionTitle:(id)arg3;	// IMP=0x000000010000c444

@end

