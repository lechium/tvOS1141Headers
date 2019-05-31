/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:20:55 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/ATVLegacyContentKit.framework/ATVLegacyContentKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ATVLegacyContentKit/TVLElement.h>

@class NSString, NSArray;

@interface TVLPhotoBatchElement : TVLElement {

	NSString* _title;
	NSString* _boldTitle;
	NSString* _dimmedTitle;
	NSArray* _items;

}

@property (nonatomic,retain) NSString * title;                    //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) NSString * boldTitle;                //@synthesize boldTitle=_boldTitle - In the implementation block
@property (nonatomic,retain) NSString * dimmedTitle;              //@synthesize dimmedTitle=_dimmedTitle - In the implementation block
@property (nonatomic,retain) NSArray * items;                     //@synthesize items=_items - In the implementation block
-(void)setTitle:(NSString *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)title;
-(NSArray *)items;
-(void)setItems:(NSArray *)arg1 ;
-(id)initWithXMLElement:(id)arg1 parentFeedElement:(id)arg2 ;
-(void)setBoldTitle:(NSString *)arg1 ;
-(void)setDimmedTitle:(NSString *)arg1 ;
-(NSString *)boldTitle;
-(NSString *)dimmedTitle;
@end
