/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:21:12 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/SiriTVUI.framework/SiriTVUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SiriTVUI/SiriTVUI-Structs.h>
#import <SiriTVUI/SiriTVUIVibrantEffectView.h>
#import <SiriTVUI/SiriTVUITemplateItemView.h>

@class UILabel, NSDictionary, NSString;

@interface SiriTVUIVibrantLabel : SiriTVUIVibrantEffectView <SiriTVUITemplateItemView> {

	UILabel* _label;
	BOOL hasPriorityLayout;
	NSDictionary* _attributedTexts;

}

@property (nonatomic,copy) NSDictionary * attributedTexts;              //@synthesize attributedTexts=_attributedTexts - In the implementation block
@property (assign,nonatomic) long long numberOfLines; 
@property (assign,nonatomic) long long lineBreakMode; 
@property (assign,nonatomic) BOOL marqueeEnabled; 
@property (assign,nonatomic) BOOL marqueeRunning; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) BOOL hasPriorityLayout; 
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setNumberOfLines:(long long)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)setLineBreakMode:(long long)arg1 ;
-(long long)lineBreakMode;
-(long long)numberOfLines;
-(void)setMarqueeRunning:(BOOL)arg1 ;
-(BOOL)marqueeRunning;
-(void)setMarqueeEnabled:(BOOL)arg1 ;
-(BOOL)marqueeEnabled;
-(BOOL)hasPriorityLayout;
-(void)setHasPriorityLayout:(BOOL)arg1 ;
-(NSDictionary *)attributedTexts;
-(void)setAttributedTexts:(NSDictionary *)arg1 ;
-(void)_updateAttributedText;
-(BOOL)shouldFitWithinContentMargins;
@end

