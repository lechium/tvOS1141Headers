/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:13:01 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIControl.h>

@class UITableViewCell, UIImageView, _UITableViewCellEditControlMinusView;

@interface UITableViewCellEditControl : UIControl {

	UITableViewCell* _cell;
	UIImageView* _imageView;
	_UITableViewCellEditControlMinusView* _minusView;
	UIImageView* _shadowView;
	double _focalY;
	double _focalHeight;
	unsigned _style : 2;
	unsigned _rotated : 1;
	unsigned _rotating : 1;
	unsigned _reserved : 27;

}

@property (assign,getter=isRotated,nonatomic) BOOL rotated; 
@property (nonatomic,readonly) BOOL wantsMaskingWhileAnimatingDisabled; 
@property (nonatomic,readonly) BOOL wantsImageShadow; 
-(void)setFrame:(CGRect)arg1 ;
-(CGSize)defaultSize;
-(void)layoutSubviews;
-(id)_imageView;
-(void)setHighlighted:(BOOL)arg1 ;
-(BOOL)isRotating;
-(void)_multiselectColorChanged;
-(void)setSelected:(BOOL)arg1 ;
-(unsigned long long)_controlEventsForActionTriggered;
-(id)_shadowImage;
-(id)_currentImage;
-(void)_toggleRotateAnimationDidStop:(id)arg1 finished:(BOOL)arg2 ;
-(BOOL)isRotated;
-(void)setRotated:(BOOL)arg1 ;
-(void)setRotated:(BOOL)arg1 animated:(BOOL)arg2 ;
-(id)initWithTableViewCell:(id)arg1 editingStyle:(long long)arg2 ;
-(BOOL)wantsMaskingWhileAnimatingDisabled;
-(void)_updateImageView;
-(id)_minusView;
-(CGRect)_minusRect;
-(void)_toggleRotate;
-(id)_deleteImageBackground:(double)arg1 ;
-(id)_deleteImage:(double)arg1 ;
-(id)_insertImage:(double)arg1 ;
-(id)_multiSelectNotSelectedImage;
-(id)_multiSelectSelectedImage;
-(id)_multiSelectHighlightedImage;
-(BOOL)wantsImageShadow;
-(void)adjustLayoutForFocalRect:(CGRect)arg1 ;
@end

