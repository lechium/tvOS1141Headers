/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:12:46 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CAAnimationDelegate.h>

@class UIImageView, UIImage, NSArray, CIContext, NSString;

@interface _UIImageViewExtendedStorage : NSObject <CAAnimationDelegate> {

	UIImageView* _imageView;
	BOOL _highlighted;
	UIImage* _image;
	UIImage* _highlightedImage;
	NSArray* _animationImages;
	NSArray* _highlightedAnimationImages;
	double _animationDuration;
	long long _animationRepeatCount;
	int _drawMode;
	long long _defaultRenderingMode;
	BOOL _masksTemplateImages;
	unsigned long long _templateImageRenderingEffects;
	UIImage* _displayedImage;
	UIImage* _displayedHighlightedImage;
	CIContext* _CIContext;
	BOOL _adjustsImageSizeForAccessibilityContentSizeCategory;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)animationDidStop:(id)arg1 finished:(BOOL)arg2 ;
-(id)initForImageView:(id)arg1 ;
@end

