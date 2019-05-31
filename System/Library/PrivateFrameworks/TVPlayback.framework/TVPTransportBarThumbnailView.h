/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:21:26 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/TVPlayback.framework/TVPlayback
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVPlayback/TVPlayback-Structs.h>
#import <UIKit/UIView.h>
#import <TVPlayback/TVPTransportBarThumbnailScrubbing.h>

@protocol TVPTransportBarThumbnailViewDelegate;
@class TVPVideoView, NSString, UIFont, UIImageView, UIImage, UILabel, TVPGradientView, NSLayoutConstraint;

@interface TVPTransportBarThumbnailView : UIView <TVPTransportBarThumbnailScrubbing> {

	BOOL _shouldDisplayLabel;
	id<TVPTransportBarThumbnailViewDelegate> _delegate;
	NSString* _labelString;
	UIFont* _labelFont;
	TVPVideoView* _mainContentCloneVideoView;
	TVPVideoView* _scrubVideoView;
	UIImageView* _scrubImageView;
	UIImage* _scrubImage;
	UILabel* _previewTimeLabel;
	TVPGradientView* _gradientView;
	NSLayoutConstraint* _labelOffsetConstraint;
	long long _scrubPreviewMode;
	CGSize _scrubImageSize;

}

@property (nonatomic,retain) TVPVideoView * mainContentCloneVideoView;                              //@synthesize mainContentCloneVideoView=_mainContentCloneVideoView - In the implementation block
@property (nonatomic,retain) TVPVideoView * scrubVideoView;                                         //@synthesize scrubVideoView=_scrubVideoView - In the implementation block
@property (nonatomic,retain) UIImageView * scrubImageView;                                          //@synthesize scrubImageView=_scrubImageView - In the implementation block
@property (nonatomic,retain) UIImage * scrubImage;                                                  //@synthesize scrubImage=_scrubImage - In the implementation block
@property (nonatomic,retain) UILabel * previewTimeLabel;                                            //@synthesize previewTimeLabel=_previewTimeLabel - In the implementation block
@property (nonatomic,retain) TVPGradientView * gradientView;                                        //@synthesize gradientView=_gradientView - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * labelOffsetConstraint;                            //@synthesize labelOffsetConstraint=_labelOffsetConstraint - In the implementation block
@property (assign,nonatomic) long long scrubPreviewMode;                                            //@synthesize scrubPreviewMode=_scrubPreviewMode - In the implementation block
@property (assign,nonatomic) CGSize scrubImageSize;                                                 //@synthesize scrubImageSize=_scrubImageSize - In the implementation block
@property (assign,nonatomic,__weak) id<TVPTransportBarThumbnailViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (getter=isEmpty,nonatomic,readonly) BOOL empty; 
@property (nonatomic,copy) NSString * labelString;                                                  //@synthesize labelString=_labelString - In the implementation block
@property (nonatomic,retain) UIFont * labelFont;                                                    //@synthesize labelFont=_labelFont - In the implementation block
@property (assign,nonatomic) BOOL shouldDisplayLabel;                                               //@synthesize shouldDisplayLabel=_shouldDisplayLabel - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)labelString;
-(id)initWithFrame:(CGRect)arg1 ;
-(id<TVPTransportBarThumbnailViewDelegate>)delegate;
-(id)initWithCoder:(id)arg1 ;
-(void)setDelegate:(id<TVPTransportBarThumbnailViewDelegate>)arg1 ;
-(CGSize)intrinsicContentSize;
-(BOOL)isEmpty;
-(id)initWithPlayer:(id)arg1 ;
-(UIFont *)labelFont;
-(TVPGradientView *)gradientView;
-(void)setGradientView:(TVPGradientView *)arg1 ;
-(void)preserveVideoViewForReuse;
-(TVPVideoView *)scrubVideoView;
-(void)setScrubPreviewMode:(long long)arg1 animated:(BOOL)arg2 ;
-(void)setScrubImage:(UIImage *)arg1 ;
-(void)setScrubVideoPlayer:(id)arg1 ;
-(void)setLabelFont:(UIFont *)arg1 ;
-(void)setLabelString:(NSString *)arg1 ;
-(long long)scrubPreviewMode;
-(void)setShouldDisplayLabel:(BOOL)arg1 ;
-(void)_placeBorder;
-(void)_updateScrubImageSizeWithSize:(CGSize)arg1 ;
-(void)_removeBorder;
-(void)_didShow;
-(void)_didHideFromTextMode:(BOOL)arg1 ;
-(void)_willShow;
-(void)_willHide;
-(NSLayoutConstraint *)labelOffsetConstraint;
-(BOOL)shouldDisplayLabel;
-(TVPVideoView *)mainContentCloneVideoView;
-(void)setMainContentCloneVideoView:(TVPVideoView *)arg1 ;
-(void)setScrubVideoView:(TVPVideoView *)arg1 ;
-(UIImageView *)scrubImageView;
-(void)setScrubImageView:(UIImageView *)arg1 ;
-(UIImage *)scrubImage;
-(UILabel *)previewTimeLabel;
-(void)setPreviewTimeLabel:(UILabel *)arg1 ;
-(void)setLabelOffsetConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setScrubPreviewMode:(long long)arg1 ;
-(CGSize)scrubImageSize;
-(void)setScrubImageSize:(CGSize)arg1 ;
@end

