/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:19:22 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSMutableArray;

@interface OKMediaCluster : NSObject {

	NSString* _title;
	NSMutableArray* _items;
	BOOL _isUnknown;

}

@property (nonatomic,copy) NSString * title;                               //@synthesize title=_title - In the implementation block
@property (nonatomic,retain,readonly) NSMutableArray * items;              //@synthesize items=_items - In the implementation block
@property (assign,nonatomic) BOOL isUnknown;                               //@synthesize isUnknown=_isUnknown - In the implementation block
-(id)init;
-(void)dealloc;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(NSMutableArray *)items;
-(BOOL)isUnknown;
-(id)uniqueURLs;
-(void)setIsUnknown:(BOOL)arg1 ;
@end

