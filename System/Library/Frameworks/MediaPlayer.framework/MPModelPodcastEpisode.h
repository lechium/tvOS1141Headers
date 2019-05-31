/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:16:42 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MPModelObject.h>

@class NSString, NSDateComponents, NSDate, NSURL, MPModelFileAsset, MPModelPodcast, MPModelPlaybackPosition, MPModelPodcastAuthor;

@interface MPModelPodcastEpisode : MPModelObject {

	NSString* _commentText;

}

@property (nonatomic,copy) NSString * title; 
@property (nonatomic,copy) NSDateComponents * releaseDateComponents; 
@property (assign,nonatomic) double duration; 
@property (assign,nonatomic) float userRating; 
@property (assign,getter=isExplicitEpisode,nonatomic) BOOL explicitEpisode; 
@property (nonatomic,copy) NSString * descriptionText; 
@property (nonatomic,copy) NSString * commentText;                                       //@synthesize commentText=_commentText - In the implementation block
@property (nonatomic,copy) NSDate * datePlayed; 
@property (nonatomic,copy) NSURL * shareURL; 
@property (nonatomic,retain) MPModelFileAsset * localFileAsset; 
@property (nonatomic,retain) MPModelPodcast * podcast; 
@property (nonatomic,retain) MPModelPlaybackPosition * playbackPosition; 
@property (nonatomic,retain) MPModelPodcastAuthor * author; 
@property (nonatomic,copy) id artworkCatalogBlock; 
@property (nonatomic,readonly) BOOL hasVideo; 
+(id)kindWithVariants:(unsigned long long)arg1 ;
+(id)kindWithVariants:(unsigned long long)arg1 options:(unsigned long long)arg2 ;
+(id)__title_KEY;
+(id)__duration_KEY;
+(id)__hasVideo_KEY;
+(id)__artworkCatalogBlock_KEY;
+(id)__localFileAsset_KEY;
+(id)__userRating_KEY;
+(id)__playbackPosition_KEY;
+(id)__datePlayed_KEY;
+(id)__descriptionText_KEY;
+(id)__shareURL_KEY;
+(id)__author_KEY;
+(id)__podcast_KEY;
+(id)__releaseDateComponents_KEY;
+(id)__explicitEpisode_KEY;
-(void)setCommentText:(NSString *)arg1 ;
-(NSString *)commentText;
-(id)artworkCatalog;
@end

