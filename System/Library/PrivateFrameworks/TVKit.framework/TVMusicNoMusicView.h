/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:21:22 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/TVKit.framework/TVKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVKit/TVKit-Structs.h>
#import <UIKit/UIView.h>

@class NSString, UIView, UILabel;

@interface TVMusicNoMusicView : UIView {

	NSString* _message;
	UIView* _containerView;
	UILabel* _titleLabel;
	UILabel* _messageLabel;

}

@property (nonatomic,retain) UIView * containerView;              //@synthesize containerView=_containerView - In the implementation block
@property (nonatomic,retain) UILabel * titleLabel;                //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UILabel * messageLabel;              //@synthesize messageLabel=_messageLabel - In the implementation block
@property (nonatomic,retain) NSString * message;                  //@synthesize message=_message - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)traitCollectionDidChange:(id)arg1 ;
-(UIView *)containerView;
-(UILabel *)titleLabel;
-(void)setContainerView:(UIView *)arg1 ;
-(void)setMessage:(NSString *)arg1 ;
-(NSString *)message;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(UILabel *)messageLabel;
-(void)_updateColorsForUserInterfaceStyle:(long long)arg1 ;
-(void)_configureUIControls;
-(void)setMessageLabel:(UILabel *)arg1 ;
@end
