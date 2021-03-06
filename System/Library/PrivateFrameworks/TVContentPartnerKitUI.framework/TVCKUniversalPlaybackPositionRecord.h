/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:21:16 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/TVContentPartnerKitUI.framework/TVContentPartnerKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SBKUniversalPlaybackPositionMediaItem.h>

@class NSString, TVCKDataType, NSNumber, NSDate, NSURL, TVCKPodcastGUID;

@interface TVCKUniversalPlaybackPositionRecord : NSObject <SBKUniversalPlaybackPositionMediaItem> {

	NSString* _itemIdentifier;
	TVCKDataType* _mediaType;
	NSNumber* _bookmarkTime;
	NSNumber* _hasBeenPlayed;
	NSNumber* _playCount;
	NSDate* _timestamp;
	NSURL* _podcastURL;
	TVCKPodcastGUID* _podcastGUID;

}

@property (nonatomic,copy) NSString * itemIdentifier;                    //@synthesize itemIdentifier=_itemIdentifier - In the implementation block
@property (nonatomic,retain) TVCKDataType * mediaType;                   //@synthesize mediaType=_mediaType - In the implementation block
@property (nonatomic,retain) NSNumber * bookmarkTime;                    //@synthesize bookmarkTime=_bookmarkTime - In the implementation block
@property (nonatomic,retain) NSNumber * hasBeenPlayed;                   //@synthesize hasBeenPlayed=_hasBeenPlayed - In the implementation block
@property (nonatomic,retain) NSNumber * playCount;                       //@synthesize playCount=_playCount - In the implementation block
@property (nonatomic,retain) NSDate * timestamp;                         //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,retain) NSURL * podcastURL;                         //@synthesize podcastURL=_podcastURL - In the implementation block
@property (nonatomic,retain) TVCKPodcastGUID * podcastGUID;              //@synthesize podcastGUID=_podcastGUID - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)description;
-(NSDate *)timestamp;
-(void)setTimestamp:(NSDate *)arg1 ;
-(NSString *)itemIdentifier;
-(void)setPlayCount:(NSNumber *)arg1 ;
-(void)setItemIdentifier:(NSString *)arg1 ;
-(void)setMediaType:(TVCKDataType *)arg1 ;
-(NSNumber *)bookmarkTime;
-(NSURL *)podcastURL;
-(void)setBookmarkTime:(NSNumber *)arg1 ;
-(void)setHasBeenPlayed:(NSNumber *)arg1 ;
-(void)enumerateValuesForProperties:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(NSNumber *)hasBeenPlayed;
-(TVCKDataType *)mediaType;
-(NSNumber *)playCount;
-(void)setPodcastGUID:(TVCKPodcastGUID *)arg1 ;
-(void)setPodcastURL:(NSURL *)arg1 ;
-(TVCKPodcastGUID *)podcastGUID;
-(id)_uppDictionary;
-(void)markAsWatched;
-(void)markAsUnwatched;
@end

