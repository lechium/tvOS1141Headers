/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:21:24 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/TVPlayback.framework/TVPlayback
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewCell.h>

@class UIImage, TVImageProxy, UIColor;

@interface TVPTableViewCell : UITableViewCell {

	UIImage* _backingImage;
	BOOL _rendersImageAsTemplates;
	BOOL _allowsFocus;
	UIImage* _placeholderImage;
	TVImageProxy* _imageProxy;
	UIColor* __imageTintColor;
	double __imageViewWidth;

}

@property (setter=_setImageTintColor:,nonatomic,retain) UIColor * _imageTintColor;              //@synthesize _imageTintColor=__imageTintColor - In the implementation block
@property (assign,setter=_setImageViewWidth:,nonatomic) double _imageViewWidth;                 //@synthesize _imageViewWidth=__imageViewWidth - In the implementation block
@property (assign,nonatomic) BOOL rendersImageAsTemplates;                                      //@synthesize rendersImageAsTemplates=_rendersImageAsTemplates - In the implementation block
@property (nonatomic,retain) UIImage * placeholderImage;                                        //@synthesize placeholderImage=_placeholderImage - In the implementation block
@property (nonatomic,retain) TVImageProxy * imageProxy;                                         //@synthesize imageProxy=_imageProxy - In the implementation block
@property (assign,nonatomic) BOOL allowsFocus;                                                  //@synthesize allowsFocus=_allowsFocus - In the implementation block
-(void)dealloc;
-(void)layoutSubviews;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(BOOL)canBecomeFocused;
-(void)_setImageTintColor:(id)arg1 ;
-(void)prepareForReuse;
-(void)setPlaceholderImage:(UIImage *)arg1 ;
-(UIImage *)placeholderImage;
-(UIColor *)_imageTintColor;
-(void)setAllowsFocus:(BOOL)arg1 ;
-(BOOL)allowsFocus;
-(id)labelForMarquee;
-(void)_updateImage;
-(void)setImageProxy:(id)arg1 completion:(/*^block*/id)arg2 ;
-(TVImageProxy *)imageProxy;
-(double)_imageViewWidth;
-(double)_textLabelWidthWithXPosition:(double)arg1 currentWidth:(double)arg2 ;
-(void)setImageProxy:(TVImageProxy *)arg1 ;
-(BOOL)rendersImageAsTemplates;
-(void)setRendersImageAsTemplates:(BOOL)arg1 ;
-(void)_setImageViewWidth:(double)arg1 ;
@end

