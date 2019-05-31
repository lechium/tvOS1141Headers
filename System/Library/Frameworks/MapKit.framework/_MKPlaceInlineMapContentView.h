/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:16:13 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapKit/MapKit-Structs.h>
#import <MapKit/_MKUIViewControllerClickableRootView.h>

@class MKViewWithHairline, NSLayoutConstraint, UIImageView, _MKUILabel, UIImage;

@interface _MKPlaceInlineMapContentView : _MKUIViewControllerClickableRootView {

	MKViewWithHairline* _hairlineView;
	NSLayoutConstraint* _topToTitleConstraint;
	NSLayoutConstraint* _titleToBottomConstraint;
	UIImageView* _mapView;
	_MKUILabel* _titleLabel;

}

@property (nonatomic,retain) UIImage * map; 
@property (assign,getter=isBottomHairlineHidden,nonatomic) BOOL bottomHairlineHidden; 
-(UIImage *)map;
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)intrinsicContentSize;
-(BOOL)hasTitle;
-(void)infoCardThemeChanged:(id)arg1 ;
-(void)_contentSizeDidChange;
-(void)setBottomHairlineHidden:(BOOL)arg1 ;
-(BOOL)isBottomHairlineHidden;
-(void)setMap:(UIImage *)arg1 ;
-(double)mapViewHeight;
-(double)titleHeight;
@end

