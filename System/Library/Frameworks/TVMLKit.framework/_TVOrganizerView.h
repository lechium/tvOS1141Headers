/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:20:49 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/TVMLKit.framework/TVMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVMLKit/TVMLKit-Structs.h>
#import <TVMLKit/_TVFocusRedirectView.h>
#import <TVMLKit/TVAppTemplateImpressionable.h>

@class UIView, UIColor, NSArray, NSDictionary, NSString;

@interface _TVOrganizerView : _TVFocusRedirectView <TVAppTemplateImpressionable> {

	UIView* _lastFocusedView;
	UIView* _rightColumnDivider;
	UIView* _leftColumnDivider;
	BOOL _columnDividersEnabled;
	BOOL _remembersLastFocusedItem;
	UIView* _backgroundImageView;
	double _columnDividerPadding;
	UIColor* _columnDividerColor;
	NSArray* _components;
	NSDictionary* _divsByPosition;
	NSDictionary* _divSizesByPosition;

}

@property (nonatomic,copy) NSDictionary * divsByPosition;                            //@synthesize divsByPosition=_divsByPosition - In the implementation block
@property (nonatomic,copy) NSDictionary * divSizesByPosition;                        //@synthesize divSizesByPosition=_divSizesByPosition - In the implementation block
@property (nonatomic,retain) UIView * backgroundImageView;                           //@synthesize backgroundImageView=_backgroundImageView - In the implementation block
@property (assign,nonatomic) double cornerRadius; 
@property (assign,nonatomic) double columnDividerPadding;                            //@synthesize columnDividerPadding=_columnDividerPadding - In the implementation block
@property (assign,nonatomic) BOOL columnDividersEnabled;                             //@synthesize columnDividersEnabled=_columnDividersEnabled - In the implementation block
@property (nonatomic,retain) UIColor * columnDividerColor;                           //@synthesize columnDividerColor=_columnDividerColor - In the implementation block
@property (assign,nonatomic) BOOL remembersLastFocusedItem;                          //@synthesize remembersLastFocusedItem=_remembersLastFocusedItem - In the implementation block
@property (nonatomic,copy) NSArray * components;                                     //@synthesize components=_components - In the implementation block
@property (assign,nonatomic,__weak) UIView * preferredFocusedComponent; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setComponents:(NSArray *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(BOOL)canBecomeFocused;
-(void)setCornerRadius:(double)arg1 ;
-(void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(id)preferredFocusEnvironments;
-(double)cornerRadius;
-(void)setSelected:(BOOL)arg1 animated:(BOOL)arg2 ;
-(UIView *)backgroundImageView;
-(NSArray *)components;
-(void)setPreferredFocusedComponent:(UIView *)arg1 ;
-(void)setBackgroundImageView:(UIView *)arg1 ;
-(id)impressionableElementsContainedInDocument:(id)arg1 ;
-(UIEdgeInsets)tv_alignmentInsetsForExpectedWidth:(double)arg1 ;
-(UIView *)preferredFocusedComponent;
-(NSDictionary *)divsByPosition;
-(void)setDivSizesByPosition:(NSDictionary *)arg1 ;
-(void)setComponentsNeedUpdate;
-(long long)_positionFromView:(id)arg1 ;
-(void)setDivsByPosition:(NSDictionary *)arg1 ;
-(NSDictionary *)divSizesByPosition;
-(CGSize)_contentSizeThatFits:(CGSize)arg1 ;
-(void)setRemembersLastFocusedItem:(BOOL)arg1 ;
-(void)setColumnDividerPadding:(double)arg1 ;
-(void)setColumnDividersEnabled:(BOOL)arg1 ;
-(double)columnDividerPadding;
-(BOOL)columnDividersEnabled;
-(UIColor *)columnDividerColor;
-(void)setColumnDividerColor:(UIColor *)arg1 ;
-(BOOL)remembersLastFocusedItem;
@end

