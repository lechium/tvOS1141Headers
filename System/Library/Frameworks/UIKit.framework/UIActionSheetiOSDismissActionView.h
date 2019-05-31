/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:13:33 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/UIActionSheetPresentationControllerDismissActionView.h>

@class NSString, UIButton;

@interface UIActionSheetiOSDismissActionView : UIView <UIActionSheetPresentationControllerDismissActionView> {

	BOOL _usesShortCompactVerticalLayout;
	UIButton* _dismissButton;

}

@property (nonatomic,retain) UIButton * dismissButton;                         //@synthesize dismissButton=_dismissButton - In the implementation block
@property (assign,nonatomic) BOOL usesShortCompactVerticalLayout;              //@synthesize usesShortCompactVerticalLayout=_usesShortCompactVerticalLayout - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSString * title; 
-(id)init;
-(void)setTitle:(NSString *)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(NSString *)title;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)setUsesShortCompactVerticalLayout:(BOOL)arg1 ;
-(BOOL)usesShortCompactVerticalLayout;
-(id)initWithContinuousCornerRadius:(double)arg1 ;
-(void)_setupDismissButton;
-(void)_applyContinuousCornerRadius:(double)arg1 ;
-(void)setDismissButton:(UIButton *)arg1 ;
-(UIButton *)dismissButton;
-(double)_heightForTraitCollection:(id)arg1 ;
@end

