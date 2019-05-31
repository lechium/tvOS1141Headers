/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:20:57 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/ATVLegacyContentKit.framework/ATVLegacyContentKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ATVLegacyContentKit/TVLElement.h>

@class NSString, TVLImageElement, TVLTableElement;

@interface TVLStandingsItemElement : TVLElement {

	NSString* _title;
	TVLImageElement* _backgroundImage;
	TVLTableElement* _table;

}

@property (nonatomic,copy) NSString * title;                                 //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) TVLImageElement * backgroundImage;              //@synthesize backgroundImage=_backgroundImage - In the implementation block
@property (nonatomic,retain) TVLTableElement * table;                        //@synthesize table=_table - In the implementation block
-(void)setTitle:(NSString *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(NSString *)title;
-(TVLImageElement *)backgroundImage;
-(void)setBackgroundImage:(TVLImageElement *)arg1 ;
-(TVLTableElement *)table;
-(void)setTable:(TVLTableElement *)arg1 ;
-(id)initWithXMLElement:(id)arg1 parentFeedElement:(id)arg2 ;
@end

