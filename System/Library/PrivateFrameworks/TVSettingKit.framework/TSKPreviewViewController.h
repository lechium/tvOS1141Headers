/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:21:29 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/TVSettingKit.framework/TVSettingKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>

@class NSArray, UIView, UILabel, UIProgressView, NSString, NSAttributedString;

@interface TSKPreviewViewController : UIViewController {

	NSArray* _contentConstraints;
	BOOL _shouldShowProgress;
	float _progress;
	UIView* _contentView;
	UIView* _contentContainer;
	UIView* _metadataContainer;
	UILabel* _descriptionLabel;
	UILabel* _progressLabel;
	UIProgressView* _progressView;

}

@property (nonatomic,readonly) UIView * contentContainer;                               //@synthesize contentContainer=_contentContainer - In the implementation block
@property (nonatomic,readonly) UIView * metadataContainer;                              //@synthesize metadataContainer=_metadataContainer - In the implementation block
@property (nonatomic,readonly) UIView * contentContainerSnapshot; 
@property (nonatomic,readonly) UILabel * descriptionLabel;                              //@synthesize descriptionLabel=_descriptionLabel - In the implementation block
@property (nonatomic,readonly) UILabel * progressLabel;                                 //@synthesize progressLabel=_progressLabel - In the implementation block
@property (nonatomic,readonly) UIProgressView * progressView;                           //@synthesize progressView=_progressView - In the implementation block
@property (nonatomic,retain) UIView * contentView;                                      //@synthesize contentView=_contentView - In the implementation block
@property (nonatomic,copy) NSString * descriptionText; 
@property (nonatomic,copy) NSAttributedString * attributedDescriptionText; 
@property (assign,nonatomic) BOOL shouldShowProgress;                                   //@synthesize shouldShowProgress=_shouldShowProgress - In the implementation block
@property (assign,nonatomic) float progress;                                            //@synthesize progress=_progress - In the implementation block
-(NSString *)descriptionText;
-(void)setDescriptionText:(NSString *)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(UIView *)contentView;
-(void)setContentView:(UIView *)arg1 ;
-(void)setProgress:(float)arg1 ;
-(void)viewDidLoad;
-(void)setProgress:(float)arg1 animated:(BOOL)arg2 ;
-(float)progress;
-(UILabel *)descriptionLabel;
-(UIProgressView *)progressView;
-(UILabel *)progressLabel;
-(void)setAttributedDescriptionText:(NSAttributedString *)arg1 ;
-(void)setContentView:(id)arg1 animated:(BOOL)arg2 ;
-(UIView *)contentContainerSnapshot;
-(UIView *)contentContainer;
-(UIView *)metadataContainer;
-(NSAttributedString *)attributedDescriptionText;
-(void)setShouldShowProgress:(BOOL)arg1 ;
-(BOOL)shouldShowProgress;
@end

