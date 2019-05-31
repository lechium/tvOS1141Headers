/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:21:21 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/TVKit.framework/TVKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVKit/TVKit-Structs.h>
#import <UIKit/UIView.h>

@class TVItemTitleView, TVItemSummaryView, UILabel, UIView, TVImageView, TVImageProxy;

@interface TVMetadataView : UIView {

	TVItemTitleView* _titleView;
	TVItemSummaryView* _summaryView;
	UILabel* _footnoteLabel;
	double _maxImageWidth;
	UIView* _upperMetadataView;
	TVImageView* _imageView;
	UIEdgeInsets _padding;

}

@property (nonatomic,retain) TVImageView * imageView;                        //@synthesize imageView=_imageView - In the implementation block
@property (assign,nonatomic) UIEdgeInsets padding;                           //@synthesize padding=_padding - In the implementation block
@property (nonatomic,retain) TVImageProxy * imageProxy; 
@property (nonatomic,readonly) TVItemTitleView * titleView;                  //@synthesize titleView=_titleView - In the implementation block
@property (nonatomic,readonly) TVItemSummaryView * summaryView;              //@synthesize summaryView=_summaryView - In the implementation block
@property (nonatomic,readonly) UILabel * footnoteLabel;                      //@synthesize footnoteLabel=_footnoteLabel - In the implementation block
@property (assign,nonatomic) double maxImageWidth;                           //@synthesize maxImageWidth=_maxImageWidth - In the implementation block
@property (nonatomic,retain) UIView * upperMetadataView;                     //@synthesize upperMetadataView=_upperMetadataView - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)traitCollectionDidChange:(id)arg1 ;
-(TVItemTitleView *)titleView;
-(void)setPadding:(UIEdgeInsets)arg1 ;
-(UIEdgeInsets)padding;
-(TVImageView *)imageView;
-(void)setImageView:(TVImageView *)arg1 ;
-(void)_updateColors;
-(UILabel *)footnoteLabel;
-(Class)_titleViewClass;
-(Class)_summaryViewClass;
-(id)_footnoteLabel;
-(CGSize)_maximumArtworkSize;
-(BOOL)_shouldLeftAlignArtwork;
-(void)setUpperMetadataView:(UIView *)arg1 ;
-(TVItemSummaryView *)summaryView;
-(double)maxImageWidth;
-(void)setMaxImageWidth:(double)arg1 ;
-(UIView *)upperMetadataView;
-(TVImageProxy *)imageProxy;
-(void)setImageProxy:(TVImageProxy *)arg1 ;
@end

