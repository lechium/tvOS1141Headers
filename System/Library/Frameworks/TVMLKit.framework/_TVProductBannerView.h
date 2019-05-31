/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:20:50 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/TVMLKit.framework/TVMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVMLKit/TVMLKit-Structs.h>
#import <TVMLKit/_TVFocusRedirectView.h>
#import <TVMLKit/TVAppTemplateImpressionable.h>

@class UIView, NSString;

@interface _TVProductBannerView : _TVFocusRedirectView <TVAppTemplateImpressionable> {

	double _height;
	UIView* _backgroundView;
	UIView* _infoListView;
	UIView* _stackView;
	UIView* _heroImageView;

}

@property (nonatomic,retain) UIView * infoListView;                 //@synthesize infoListView=_infoListView - In the implementation block
@property (nonatomic,retain) UIView * stackView;                    //@synthesize stackView=_stackView - In the implementation block
@property (nonatomic,retain) UIView * heroImageView;                //@synthesize heroImageView=_heroImageView - In the implementation block
@property (nonatomic,retain) UIView * backgroundView;               //@synthesize backgroundView=_backgroundView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)productBannerViewWithElement:(id)arg1 existingView:(id)arg2 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id)preferredFocusEnvironments;
-(void)setBackgroundView:(UIView *)arg1 ;
-(UIView *)backgroundView;
-(UIView *)stackView;
-(void)setStackView:(UIView *)arg1 ;
-(id)impressionableElementsContainedInDocument:(id)arg1 ;
-(UIView *)infoListView;
-(void)setInfoListView:(UIView *)arg1 ;
-(UIView *)heroImageView;
-(void)setHeroImageView:(UIView *)arg1 ;
@end

