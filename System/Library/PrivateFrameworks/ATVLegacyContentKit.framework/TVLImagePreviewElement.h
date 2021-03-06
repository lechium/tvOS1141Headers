/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:20:57 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/ATVLegacyContentKit.framework/ATVLegacyContentKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ATVLegacyContentKit/TVLElement.h>

@class TVLImageElement, NSString;

@interface TVLImagePreviewElement : TVLElement {

	TVLImageElement* _image;
	NSString* _label;

}

@property (nonatomic,retain) TVLImageElement * image;              //@synthesize image=_image - In the implementation block
@property (nonatomic,retain) NSString * label;                     //@synthesize label=_label - In the implementation block
-(void)setImage:(TVLImageElement *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(TVLImageElement *)image;
-(NSString *)label;
-(void)setLabel:(NSString *)arg1 ;
-(id)initWithXMLElement:(id)arg1 parentFeedElement:(id)arg2 ;
@end

