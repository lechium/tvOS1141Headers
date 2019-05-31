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

@class NSArray, UIView, NSString;

@interface _TVRowView : _TVFocusRedirectView <TVAppTemplateImpressionable> {

	NSArray* _components;
	UIView* _preferredFocusedComponent;
	long long _contentVerticalAlignment;
	NSArray* _leftComponents;
	NSArray* _centerComponents;
	NSArray* _rightComponents;
	NSArray* _allComponents;
	UIView* _lastFocusedView;

}

@property (nonatomic,copy,readonly) NSArray * leftComponents;                        //@synthesize leftComponents=_leftComponents - In the implementation block
@property (nonatomic,copy,readonly) NSArray * centerComponents;                      //@synthesize centerComponents=_centerComponents - In the implementation block
@property (nonatomic,copy,readonly) NSArray * rightComponents;                       //@synthesize rightComponents=_rightComponents - In the implementation block
@property (nonatomic,copy,readonly) NSArray * allComponents;                         //@synthesize allComponents=_allComponents - In the implementation block
@property (nonatomic,__weak,readonly) UIView * lastFocusedView;                      //@synthesize lastFocusedView=_lastFocusedView - In the implementation block
@property (nonatomic,copy) NSArray * components;                                     //@synthesize components=_components - In the implementation block
@property (assign,nonatomic,__weak) UIView * preferredFocusedComponent;              //@synthesize preferredFocusedComponent=_preferredFocusedComponent - In the implementation block
@property (assign,nonatomic) long long contentVerticalAlignment;                     //@synthesize contentVerticalAlignment=_contentVerticalAlignment - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(CGRect)_leftAlignedFrameForComponent:(id)arg1 previousComponent:(id)arg2 interitemSpacing:(double)arg3 ;
+(void)_alignComponents:(id)arg1 withLineSize:(CGSize)arg2 boundingRect:(CGRect)arg3 originYBump:(double)arg4 verticalAlignment:(long long)arg5 horizontalAlignment:(long long)arg6 ;
+(CGRect)_boundingRectForComponents:(id)arg1 interitemSpacing:(double)arg2 boundingSize:(CGSize)arg3 horizontalAlignment:(long long)arg4 allowsOverflow:(BOOL)arg5 ;
-(void)setComponents:(NSArray *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setContentVerticalAlignment:(long long)arg1 ;
-(BOOL)canBecomeFocused;
-(void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(id)preferredFocusEnvironments;
-(void)setSelected:(BOOL)arg1 animated:(BOOL)arg2 ;
-(long long)contentVerticalAlignment;
-(NSArray *)components;
-(UIView *)lastFocusedView;
-(void)setPreferredFocusedComponent:(UIView *)arg1 ;
-(id)impressionableElementsContainedInDocument:(id)arg1 ;
-(long long)_alignmentFromView:(id)arg1 ;
-(NSArray *)leftComponents;
-(NSArray *)centerComponents;
-(NSArray *)rightComponents;
-(void)_resetSubviews;
-(CGSize)_sizeThatFitsComponents:(id)arg1 boundingSize:(CGSize)arg2 ;
-(void)_addSubview:(id)arg1 maxViewWidth:(double)arg2 ;
-(void)_lineUpComponents:(id)arg1 alignment:(long long)arg2 attribute:(long long)arg3 ;
-(UIView *)preferredFocusedComponent;
-(NSArray *)allComponents;
@end

