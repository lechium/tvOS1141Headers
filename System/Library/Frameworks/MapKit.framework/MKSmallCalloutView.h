/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:16:16 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapKit/MapKit-Structs.h>
#import <UIKit/UIView.h>
#import <libobjc.A.dylib/CalloutViewControllerProtocol.h>

@protocol _MKCalloutAccessoryView;
@class _MKUILabel, UIView, _MKSmallCalloutPassthroughButton, MKCalloutBackgroundView, UIMotionEffectGroup, NSLayoutConstraint, NSArray, UILayoutGuide, NSString;

@interface MKSmallCalloutView : UIView <CalloutViewControllerProtocol> {

	_MKUILabel* _titleLabel;
	_MKUILabel* _subtitleLabel;
	UIView*<_MKCalloutAccessoryView> _leftView;
	UIView*<_MKCalloutAccessoryView> _rightView;
	UIView*<_MKCalloutAccessoryView> _externalLeftView;
	UIView*<_MKCalloutAccessoryView> _externalRightView;
	UIView*<_MKCalloutAccessoryView> _detailView;
	CGSize _preferredContentSize;
	BOOL _shouldPositionTitleForMapsTransitionMovingSideways;
	_MKSmallCalloutPassthroughButton* _maskedContainerView;
	UIView* _unmaskedContainerView;
	MKCalloutBackgroundView* _calloutBackgroundView;
	SCD_Struct_MK15 _mapDisplayStyle;
	BOOL _needsPreferredContentSizeUpdate;
	BOOL _mapFocused;
	BOOL _parallaxEnabled;
	UIMotionEffectGroup* _titleMotionEffects;
	UIMotionEffectGroup* _detailViewMotionEffects;
	NSLayoutConstraint* _minWidthConstraint;
	NSLayoutConstraint* _maxWidthConstraint;
	NSLayoutConstraint* _unmaskedContainerLeadingConstraint;
	NSLayoutConstraint* _unmaskedContainerTrailingConstraint;
	NSArray* _titleLabelConstraints;
	NSLayoutConstraint* _titleBaselineFromTopMinimumConstraint;
	NSLayoutConstraint* _titleBaselineFromTopConstraint;
	NSLayoutConstraint* _titleMinimumBaselineToBottomConstraint;
	UILayoutGuide* _centerContentLeadingGuide;
	UILayoutGuide* _centerContentTrailingGuide;
	NSLayoutConstraint* _leftViewMinCalloutWidthConstraint;
	NSLayoutConstraint* _leftViewHorizontalPositionConstraint;
	NSLayoutConstraint* _leftViewTopSpacerBottomConstraint;
	NSLayoutConstraint* _leftViewCenterContentMarginConstraint;
	UILayoutGuide* _leftViewTopSpacer;
	UILayoutGuide* _leftViewLeftSpacer;
	NSLayoutConstraint* _rightViewMinCalloutWidthConstraint;
	NSLayoutConstraint* _rightViewHorizontalPositionConstraint;
	NSLayoutConstraint* _rightViewTopSpacerBottomConstraint;
	NSLayoutConstraint* _rightViewCenterContentMarginConstraint;
	UILayoutGuide* _rightViewTopSpacer;
	UILayoutGuide* _rightViewRightSpacer;
	NSLayoutConstraint* _detailViewMinTopConstraint;
	NSLayoutConstraint* _detailViewBottomConstraint;
	NSLayoutConstraint* _detailViewTrailingConstraint;

}

@property (nonatomic,retain) MKCalloutBackgroundView * calloutBackgroundView;              //@synthesize calloutBackgroundView=_calloutBackgroundView - In the implementation block
@property (assign,getter=isMapFocused,nonatomic) BOOL mapFocused;                          //@synthesize mapFocused=_mapFocused - In the implementation block
@property (assign,getter=isParallaxEnabled,nonatomic) BOOL parallaxEnabled;                //@synthesize parallaxEnabled=_parallaxEnabled - In the implementation block
@property (nonatomic,copy) NSString * calloutTitle; 
@property (nonatomic,copy) NSString * calloutSubtitle; 
@property (nonatomic,retain) UIView * leftView; 
@property (nonatomic,retain) UIView * rightView; 
@property (nonatomic,retain) UIView * detailView; 
@property (nonatomic,readonly) CGSize preferredContentSize;                                //@synthesize preferredContentSize=_preferredContentSize - In the implementation block
@property (assign,nonatomic) SCD_Struct_MK15 mapDisplayStyle;                              //@synthesize mapDisplayStyle=_mapDisplayStyle - In the implementation block
@property (assign,nonatomic) double minimumWidth; 
@property (assign,nonatomic) double maximumWidth; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)calloutTitle;
-(void)setCalloutTitle:(NSString *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)reset;
-(void)setMinimumWidth:(double)arg1 ;
-(void)setMaximumWidth:(double)arg1 ;
-(double)minimumWidth;
-(double)maximumWidth;
-(CGSize)preferredContentSize;
-(void)setLeftView:(id)arg1 animated:(BOOL)arg2 ;
-(void)setRightView:(id)arg1 animated:(BOOL)arg2 ;
-(void)setLeftView:(UIView *)arg1 ;
-(void)setRightView:(UIView *)arg1 ;
-(UIView *)leftView;
-(UIView *)rightView;
-(void)_updatePreferredContentSize;
-(SCD_Struct_MK15)mapDisplayStyle;
-(void)setMapDisplayStyle:(SCD_Struct_MK15)arg1 ;
-(BOOL)isMapFocused;
-(void)setMapFocused:(BOOL)arg1 ;
-(void)setParallaxEnabled:(BOOL)arg1 ;
-(void)_contentSizeCategoryDidChange:(id)arg1 ;
-(void)setCalloutSubtitle:(id)arg1 animated:(BOOL)arg2 ;
-(void)setDetailView:(id)arg1 animated:(BOOL)arg2 ;
-(BOOL)canDisplayCompleteTitleWhenExpanded;
-(void)beginMapsTransitionMovingSideways;
-(NSString *)calloutSubtitle;
-(void)setCalloutSubtitle:(NSString *)arg1 ;
-(UIView *)detailView;
-(void)setDetailView:(UIView *)arg1 ;
-(BOOL)isParallaxEnabled;
-(MKCalloutBackgroundView *)calloutBackgroundView;
-(void)setCalloutBackgroundView:(MKCalloutBackgroundView *)arg1 ;
-(id)_maskedContainerView;
-(void)_setNeedsUpdatePreferredContentSize;
-(void)_updatePreferredContentSizeIfNeeded;
-(void)_updateAccessoryViewStyles;
@end

