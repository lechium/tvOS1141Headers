/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:20:58 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/ATVLegacyContentKit.framework/ATVLegacyContentKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ATVLegacyContentKit/TVLElement.h>

@class NSString, TVLImageElement;

@interface TVLHeaderElement : TVLElement {

	NSString* _title;
	NSString* _subtitle;
	TVLImageElement* _image;
	long long _horizontalAlignment;

}

@property (nonatomic,copy) NSString * title;                             //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * subtitle;                          //@synthesize subtitle=_subtitle - In the implementation block
@property (nonatomic,retain) TVLImageElement * image;                    //@synthesize image=_image - In the implementation block
@property (assign,nonatomic) long long horizontalAlignment;              //@synthesize horizontalAlignment=_horizontalAlignment - In the implementation block
-(void)setImage:(TVLImageElement *)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(NSString *)title;
-(TVLImageElement *)image;
-(void)setSubtitle:(NSString *)arg1 ;
-(NSString *)subtitle;
-(long long)horizontalAlignment;
-(void)setHorizontalAlignment:(long long)arg1 ;
-(id)initWithXMLElement:(id)arg1 parentFeedElement:(id)arg2 ;
@end

