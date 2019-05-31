/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:20:55 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/ATVLegacyContentKit.framework/ATVLegacyContentKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIView.h>

@class TVImageView, UILabel;

@interface TVLBasketballPlayerView : UIView {

	TVImageView* _backgroundImageView;
	TVImageView* _playerImageView;
	UILabel* _numberLabel;
	UILabel* _nameLabel;

}

@property (nonatomic,retain) TVImageView * backgroundImageView;              //@synthesize backgroundImageView=_backgroundImageView - In the implementation block
@property (nonatomic,retain) TVImageView * playerImageView;                  //@synthesize playerImageView=_playerImageView - In the implementation block
@property (nonatomic,retain) UILabel * numberLabel;                          //@synthesize numberLabel=_numberLabel - In the implementation block
@property (nonatomic,retain) UILabel * nameLabel;                            //@synthesize nameLabel=_nameLabel - In the implementation block
-(void)layoutSubviews;
-(id)initWithDictionary:(id)arg1 ;
-(void)commonInit;
-(TVImageView *)backgroundImageView;
-(UILabel *)nameLabel;
-(void)setNameLabel:(UILabel *)arg1 ;
-(void)setBackgroundImageView:(TVImageView *)arg1 ;
-(TVImageView *)playerImageView;
-(void)setPlayerImageView:(TVImageView *)arg1 ;
-(UILabel *)numberLabel;
-(void)setNumberLabel:(UILabel *)arg1 ;
@end

