/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:21:12 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/SiriTVUI.framework/SiriTVUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SiriTVUI/SiriTVUI-Structs.h>
#import <UIKit/UIView.h>

@class NSString, UIView;

@interface SiriTVUIVibrantEffectView : UIView {

	NSString* _vibrancyFilterType;
	BOOL _sizesContentSubviewToBounds;
	UIView* _contentSubview;
	unsigned long long _vibrancyOverride;

}

@property (nonatomic,retain) UIView * contentSubview;                          //@synthesize contentSubview=_contentSubview - In the implementation block
@property (assign,nonatomic) BOOL sizesContentSubviewToBounds;                 //@synthesize sizesContentSubviewToBounds=_sizesContentSubviewToBounds - In the implementation block
@property (assign,nonatomic) unsigned long long vibrancyOverride;              //@synthesize vibrancyOverride=_vibrancyOverride - In the implementation block
-(id)init;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)_updateVibrancyFilterTypeForTraitCollection:(id)arg1 ;
-(void)setSizesContentSubviewToBounds:(BOOL)arg1 ;
-(void)setVibrancyOverride:(unsigned long long)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)_transitionToVibrancyFilterType:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)setContentSubview:(UIView *)arg1 ;
-(void)setVibrancyOverride:(unsigned long long)arg1 ;
-(UIView *)contentSubview;
-(BOOL)sizesContentSubviewToBounds;
-(unsigned long long)vibrancyOverride;
@end

