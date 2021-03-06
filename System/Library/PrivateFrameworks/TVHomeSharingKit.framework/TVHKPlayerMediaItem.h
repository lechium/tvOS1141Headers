/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:21:17 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/TVHomeSharingKit.framework/TVHomeSharingKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVPlayback/TVPBaseMediaItem.h>
#import <TVHomeSharingKit/TVPMediaItemReportingDelegate.h>

@class TVHKMediaItem, NSURL, NSString;

@interface TVHKPlayerMediaItem : TVPBaseMediaItem <TVPMediaItemReportingDelegate> {

	TVHKMediaItem* _mediaItem;
	NSURL* _URL;
	unsigned long long _loadingContext;

}

@property (nonatomic,retain) TVHKMediaItem * mediaItem;                      //@synthesize mediaItem=_mediaItem - In the implementation block
@property (nonatomic,copy) NSURL * URL;                                      //@synthesize URL=_URL - In the implementation block
@property (assign,nonatomic) unsigned long long loadingContext;              //@synthesize loadingContext=_loadingContext - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)_isRental;
-(id)init;
-(NSString *)description;
-(NSURL *)URL;
-(void)setURL:(NSURL *)arg1 ;
-(TVHKMediaItem *)mediaItem;
-(id)initWithMediaItem:(id)arg1 ;
-(void)setMediaItem:(TVHKMediaItem *)arg1 ;
-(id)_subtitle;
-(unsigned long long)loadingContext;
-(void)setLoadingContext:(unsigned long long)arg1 ;
-(id)_serviceIdentifier;
-(id)_keybagPathURL;
-(id)_imageProxy;
-(id)_mediaType;
-(id)_contentRatingLabel;
-(id)_contentRatingRank;
-(id)_contentRatingIsExplicitMusic;
-(id)_contentRatingDomain;
-(id)_contentRatingSystem;
-(id)_soundCheckMediaKind;
-(id)mediaItemURL;
-(BOOL)isEqualToMediaItem:(id)arg1 ;
-(BOOL)hasTrait:(id)arg1 ;
-(id)mediaItemMetadataForProperty:(id)arg1 ;
-(id)reportingDelegate;
-(void)updateBookmarkWithSuggestedTime:(double)arg1 forElapsedTime:(double)arg2 duration:(double)arg3 playbackOfMediaItemIsEnding:(BOOL)arg4 ;
-(void)updatePlayCountForElapsedTime:(double)arg1 duration:(double)arg2 ;
-(void)prepareForLoadingWithCompletion:(/*^block*/id)arg1 ;
-(void)prepareForPlaybackInitiationWithCompletion:(/*^block*/id)arg1 ;
-(void)cleanUpMediaItem;
-(void)mediaItemPlayerItemStatusDidBecomeReadyToPlay:(id)arg1 timeTakenForOperation:(double)arg2 player:(id)arg3 ;
@end

