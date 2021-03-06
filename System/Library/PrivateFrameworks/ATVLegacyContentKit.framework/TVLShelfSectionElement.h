/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:20:57 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/ATVLegacyContentKit.framework/ATVLegacyContentKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ATVLegacyContentKit/TVLElement.h>

@class NSString, NSArray;

@interface TVLShelfSectionElement : TVLElement {

	NSString* _title;
	NSArray* _shelfItems;

}

@property (nonatomic,copy) NSString * title;                    //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) NSArray * shelfItems;              //@synthesize shelfItems=_shelfItems - In the implementation block
-(void)setTitle:(NSString *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(NSString *)title;
-(id)initWithXMLElement:(id)arg1 parentFeedElement:(id)arg2 ;
-(NSArray *)shelfItems;
-(void)setShelfItems:(NSArray *)arg1 ;
@end

