/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:21:22 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/TVKit.framework/TVKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVKit/TVKit-Structs.h>
#import <UIKit/UIView.h>

@class TVImageView, UILabel, NSString, UIImage, TVImageProxy;

@interface TVHeaderView : UIView {

	TVImageView* _headerImageView;
	long long _horizontalAlignment;
	UILabel* _subtitleLabel;
	UILabel* _titleLabel;
	BOOL _useUberImageLayout;
	UIEdgeInsets _imageInsets;

}

@property (nonatomic,readonly) UILabel * titleLabel; 
@property (nonatomic,readonly) UILabel * subtitleLabel; 
@property (nonatomic,readonly) TVImageView * headerImageView; 
@property (nonatomic,copy) NSString * title; 
@property (nonatomic,copy) NSString * subtitle; 
@property (assign,nonatomic) long long horizontalAlignment;                //@synthesize horizontalAlignment=_horizontalAlignment - In the implementation block
@property (assign,nonatomic) UIEdgeInsets imageInsets;                     //@synthesize imageInsets=_imageInsets - In the implementation block
@property (assign,nonatomic) BOOL useUberImageLayout;                      //@synthesize useUberImageLayout=_useUberImageLayout - In the implementation block
@property (nonatomic,retain) UIImage * headerImage; 
@property (nonatomic,retain) TVImageProxy * headerImageProxy; 
+(id)titleColor;
+(id)titleFont;
+(id)subtitleFont;
+(id)subtitleColor;
-(void)layoutSubviews;
-(void)setTitle:(NSString *)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(NSString *)title;
-(UILabel *)titleLabel;
-(void)setSubtitle:(NSString *)arg1 ;
-(NSString *)subtitle;
-(UIEdgeInsets)imageInsets;
-(void)setImageInsets:(UIEdgeInsets)arg1 ;
-(long long)horizontalAlignment;
-(void)setHorizontalAlignment:(long long)arg1 ;
-(UILabel *)subtitleLabel;
-(UIImage *)headerImage;
-(void)setHeaderImage:(UIImage *)arg1 ;
-(TVImageView *)headerImageView;
-(TVImageProxy *)headerImageProxy;
-(void)setHeaderImageProxy:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setHeaderImageProxy:(TVImageProxy *)arg1 ;
-(void)setUseUberImageLayout:(BOOL)arg1 ;
-(BOOL)useUberImageLayout;
@end

