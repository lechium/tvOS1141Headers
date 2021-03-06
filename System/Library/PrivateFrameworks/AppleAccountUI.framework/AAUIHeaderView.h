/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:17:50 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/AppleAccountUI.framework/AppleAccountUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppleAccountUI/AppleAccountUI-Structs.h>
#import <AppleAccountUI/AAUIBuddyView.h>

@class UIStackView, UILabel;

@interface AAUIHeaderView : AAUIBuddyView {

	UIStackView* _stackView;
	UILabel* _titleLabel;
	UILabel* _messageLabel;

}

@property (nonatomic,readonly) UILabel * titleLabel;                //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,readonly) UILabel * messageLabel;              //@synthesize messageLabel=_messageLabel - In the implementation block
+(BOOL)requiresConstraintBasedLayout;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(UILabel *)titleLabel;
-(id)viewForLastBaselineLayout;
-(id)viewForFirstBaselineLayout;
-(void)_updateLabelFonts;
-(UILabel *)messageLabel;
-(void)_updateStackViewSpacing;
@end

