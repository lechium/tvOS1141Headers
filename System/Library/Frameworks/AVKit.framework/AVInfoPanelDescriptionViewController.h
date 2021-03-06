/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:17:00 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/AVKit.framework/AVKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>

@class UIImageView, UIStackView, AVDarkModeCompatibleLabel, AVTomatoRatingView, AVInfoPanelExpandingSummaryView, NSLayoutConstraint, NSDateFormatter, NSURLSessionDataTask, NSArray, NSDate, AVPlayerController;

@interface AVInfoPanelDescriptionViewController : UIViewController {

	UIImageView* _posterView;
	UIStackView* _nextToPosterStackView;
	AVDarkModeCompatibleLabel* _titleLabel;
	AVDarkModeCompatibleLabel* _subtitleLabel;
	AVDarkModeCompatibleLabel* _seasonEpisodeLabel;
	AVDarkModeCompatibleLabel* _durationLabel;
	AVDarkModeCompatibleLabel* _genreLabel;
	AVDarkModeCompatibleLabel* _dateLabel;
	AVDarkModeCompatibleLabel* _mediaContentRatingLabel;
	UIImageView* _mediaContentRatingImageView;
	UIImageView* _closedCaptionBadge;
	UIImageView* _videoResolutionBadge;
	UIImageView* _colorDepthBadge;
	AVTomatoRatingView* _tomatoRatingView;
	AVInfoPanelExpandingSummaryView* _summaryView;
	NSLayoutConstraint* _posterViewWidthConstraint;
	NSLayoutConstraint* _posterViewHeightConstraint;
	NSDateFormatter* _yearFormatter;
	NSDateFormatter* _monthDayYearFormatter;
	NSURLSessionDataTask* _posterFetchingTask;
	BOOL _closedCaptioned;
	NSArray* _metadata;
	NSDate* _creationDate;
	double _duration;
	long long _videoResolution;
	long long _videoRange;
	AVPlayerController* _playerController;

}

@property (nonatomic,copy) NSArray * metadata;                                           //@synthesize metadata=_metadata - In the implementation block
@property (nonatomic,copy) NSDate * creationDate;                                        //@synthesize creationDate=_creationDate - In the implementation block
@property (assign,nonatomic) double duration;                                            //@synthesize duration=_duration - In the implementation block
@property (assign,getter=isClosedCaptioned,nonatomic) BOOL closedCaptioned;              //@synthesize closedCaptioned=_closedCaptioned - In the implementation block
@property (assign,nonatomic) long long videoResolution;                                  //@synthesize videoResolution=_videoResolution - In the implementation block
@property (assign,nonatomic) long long videoRange;                                       //@synthesize videoRange=_videoRange - In the implementation block
@property (nonatomic,readonly) BOOL hasContent; 
@property (assign,nonatomic,__weak) AVPlayerController * playerController;               //@synthesize playerController=_playerController - In the implementation block
-(NSArray *)metadata;
-(void)setCreationDate:(NSDate *)arg1 ;
-(NSDate *)creationDate;
-(void)setMetadata:(NSArray *)arg1 ;
-(double)duration;
-(void)setDuration:(double)arg1 ;
-(void)loadView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(BOOL)hasContent;
-(void)setPlayerController:(AVPlayerController *)arg1 ;
-(AVPlayerController *)playerController;
-(void)setVideoRange:(long long)arg1 ;
-(void)_updateVideoResolutionBadge;
-(void)_updateDynamicRangeBadge;
-(id)_metadataItemForIdentifiers:(id)arg1 ;
-(void)_updateViewsWithNewMetadata;
-(void)_updatePosterViewWithImage:(id)arg1 ;
-(void)_loadPosterFromMetadataItem:(id)arg1 ;
-(void)_loadPosterFromURL:(id)arg1 ;
-(id)_releaseDateString;
-(id)_durationString;
-(void)_presentFullScreenDescription;
-(BOOL)isClosedCaptioned;
-(void)setClosedCaptioned:(BOOL)arg1 ;
-(long long)videoRange;
-(long long)videoResolution;
-(void)setVideoResolution:(long long)arg1 ;
@end

