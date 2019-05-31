/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:15:00 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/DCIMServices.framework/DCIMServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DCIMServices/DCIMServices-Structs.h>
#import <DCIMServices/CAMBadgeView.h>

@class NSString, NSDictionary;

@interface CAMBadgeTextView : CAMBadgeView {

	NSString* _contentSizeCategory;
	NSDictionary* __textAttributes;
	NSString* __text;
	UIEdgeInsets __textInsets;

}

@property (setter=_setTextAttributes:,nonatomic,retain) NSDictionary * _textAttributes;              //@synthesize _textAttributes=__textAttributes - In the implementation block
@property (setter=_setText:,nonatomic,copy) NSString * _text;                                        //@synthesize _text=__text - In the implementation block
@property (assign,setter=_setTextInsets:,nonatomic) UIEdgeInsets _textInsets;                        //@synthesize _textInsets=__textInsets - In the implementation block
@property (nonatomic,copy) NSString * contentSizeCategory;                                           //@synthesize contentSizeCategory=_contentSizeCategory - In the implementation block
+(UIEdgeInsets)_defaultTextInsets;
+(id)_textAttributesForContentSize:(id)arg1 ;
+(id)_fontForContentSize:(id)arg1 ;
+(double)_textHeightForContentSize:(id)arg1 ;
+(double)_heightForContentSize:(id)arg1 textInsets:(UIEdgeInsets)arg2 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)intrinsicContentSize;
-(void)_setText:(id)arg1 ;
-(id)_maskImage;
-(NSString *)_text;
-(CGSize)_textSize;
-(void)setContentSizeCategory:(NSString *)arg1 ;
-(NSString *)contentSizeCategory;
-(void)_setTextAttributes:(id)arg1 ;
-(void)_setTextInsets:(UIEdgeInsets)arg1 ;
-(UIEdgeInsets)_textInsets;
-(NSDictionary *)_textAttributes;
@end

