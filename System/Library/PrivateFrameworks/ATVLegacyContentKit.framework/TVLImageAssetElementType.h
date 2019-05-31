/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:20:55 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/ATVLegacyContentKit.framework/ATVLegacyContentKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ATVLegacyContentKit/TVLElement.h>

@class NSString;

@interface TVLImageAssetElementType : TVLElement {

	float _width;
	float _height;
	NSString* _name;
	NSString* _src;

}

@property (nonatomic,retain) NSString * name;              //@synthesize name=_name - In the implementation block
@property (assign,nonatomic) float width;                  //@synthesize width=_width - In the implementation block
@property (assign,nonatomic) float height;                 //@synthesize height=_height - In the implementation block
@property (nonatomic,retain) NSString * src;               //@synthesize src=_src - In the implementation block
-(NSString *)src;
-(void)setSrc:(NSString *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(float)height;
-(float)width;
-(void)setWidth:(float)arg1 ;
-(void)setHeight:(float)arg1 ;
-(id)initWithXMLElement:(id)arg1 parentFeedElement:(id)arg2 ;
@end
