//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSString;

@interface IMPodcastFeed : NSObject
{
    _Bool _preferredCategoryFound;	// 8 = 0x8
    _Bool _isExplicit;	// 9 = 0x9
    NSString *_feedDescription;	// 16 = 0x10
    NSString *_author;	// 24 = 0x18
    NSString *_category;	// 32 = 0x20
    NSString *_imageURL;	// 40 = 0x28
    NSString *_globalImageURL;	// 48 = 0x30
    NSMutableArray *_items;	// 56 = 0x38
    NSString *_provider;	// 64 = 0x40
    NSString *_updatedFeedURL;	// 72 = 0x48
    NSString *_title;	// 80 = 0x50
    NSString *_showType;	// 88 = 0x58
    NSString *_webpageURL;	// 96 = 0x60
}

@property(retain, nonatomic) NSString *webpageURL; // @synthesize webpageURL=_webpageURL;
@property(retain, nonatomic) NSString *showType; // @synthesize showType=_showType;
@property(nonatomic) _Bool isExplicit; // @synthesize isExplicit=_isExplicit;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSString *updatedFeedURL; // @synthesize updatedFeedURL=_updatedFeedURL;
@property(retain, nonatomic) NSString *provider; // @synthesize provider=_provider;
@property(retain, nonatomic) NSMutableArray *items; // @synthesize items=_items;
@property(retain, nonatomic) NSString *globalImageURL; // @synthesize globalImageURL=_globalImageURL;
@property(retain, nonatomic) NSString *imageURL; // @synthesize imageURL=_imageURL;
@property(retain, nonatomic) NSString *category; // @synthesize category=_category;
@property(retain, nonatomic) NSString *author; // @synthesize author=_author;
@property(retain, nonatomic) NSString *feedDescription; // @synthesize feedDescription=_feedDescription;
@property(nonatomic) _Bool preferredCategoryFound; // @synthesize preferredCategoryFound=_preferredCategoryFound;
- (void).cxx_destruct;	// IMP=0x00000001001e44a0
- (id)init;	// IMP=0x00000001001e424c

@end
