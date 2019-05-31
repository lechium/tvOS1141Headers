/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:21:12 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/SiriTVUI.framework/SiriTVUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SiriTVUI/SiriTVUI-Structs.h>
#import <SiriTVUI/SiriTVUITabularDataCellItem.h>

@class NSDictionary;

@interface SiriTVUITabularDataTextCellItem : SiriTVUITabularDataCellItem {

	BOOL _highlighted;
	NSDictionary* _attributedTexts;
	NSDictionary* _images;
	CGSize _imageSize;

}

@property (nonatomic,copy) NSDictionary * attributedTexts;                       //@synthesize attributedTexts=_attributedTexts - In the implementation block
@property (nonatomic,copy) NSDictionary * images;                                //@synthesize images=_images - In the implementation block
@property (assign,nonatomic) CGSize imageSize;                                   //@synthesize imageSize=_imageSize - In the implementation block
@property (assign,getter=isHighlighted,nonatomic) BOOL highlighted;              //@synthesize highlighted=_highlighted - In the implementation block
-(id)init;
-(void)setHighlighted:(BOOL)arg1 ;
-(BOOL)isHighlighted;
-(NSDictionary *)images;
-(void)setImages:(NSDictionary *)arg1 ;
-(CGSize)imageSize;
-(NSDictionary *)attributedTexts;
-(void)setAttributedTexts:(NSDictionary *)arg1 ;
-(void)setImageSize:(CGSize)arg1 ;
-(id)initWithAttributedTexts:(id)arg1 ;
-(id)initWithAttributedTexts:(id)arg1 images:(id)arg2 imageSize:(CGSize)arg3 highlighted:(BOOL)arg4 ;
-(id)initWithAttributedTexts:(id)arg1 images:(id)arg2 imageSize:(CGSize)arg3 ;
@end

