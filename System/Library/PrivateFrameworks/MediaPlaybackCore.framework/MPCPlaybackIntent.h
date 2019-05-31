/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:17:40 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MPCPlaybackIntentDataSource, NSSecureCoding;
@class NSString, NSData;

@interface MPCPlaybackIntent : NSObject {

	id<MPCPlaybackIntentDataSource> _resolvedTracklistDataSource;
	BOOL _preventAutomaticPlayback;
	NSString* _localizedTitle;
	long long _tracklistSource;
	id<NSSecureCoding> _tracklistToken;
	long long _shuffleMode;
	NSString* _playActivityFeatureName;
	NSData* _playActivityRecommendationData;

}

@property (nonatomic,readonly) id<MPCPlaybackIntentDataSource> tracklistDataSource; 
@property (nonatomic,copy) NSString * localizedTitle;                                            //@synthesize localizedTitle=_localizedTitle - In the implementation block
@property (assign,nonatomic) long long tracklistSource;                                          //@synthesize tracklistSource=_tracklistSource - In the implementation block
@property (nonatomic,retain) id<NSSecureCoding> tracklistToken;                                  //@synthesize tracklistToken=_tracklistToken - In the implementation block
@property (assign,nonatomic) long long shuffleMode;                                              //@synthesize shuffleMode=_shuffleMode - In the implementation block
@property (nonatomic,copy) NSString * playActivityFeatureName;                                   //@synthesize playActivityFeatureName=_playActivityFeatureName - In the implementation block
@property (nonatomic,copy) NSData * playActivityRecommendationData;                              //@synthesize playActivityRecommendationData=_playActivityRecommendationData - In the implementation block
@property (assign,nonatomic) BOOL preventAutomaticPlayback;                                      //@synthesize preventAutomaticPlayback=_preventAutomaticPlayback - In the implementation block
+(id)intentFromQueueDescriptor:(id)arg1 ;
+(id)radioPlaybackIntentWithStationURL:(id)arg1 ;
+(id)tracklistDataSourceForSource:(long long)arg1 ;
+(id)radioPlaybackIntentFromAlbum:(id)arg1 ;
+(id)radioPlaybackIntentFromArtist:(id)arg1 ;
+(id)radioPlaybackIntentFromSong:(id)arg1 ;
+(id)radioPlaybackIntentWithStation:(id)arg1 ;
+(id)radioPlaybackIntentWithStationStringID:(id)arg1 ;
-(id)description;
-(NSString *)localizedTitle;
-(void)setLocalizedTitle:(NSString *)arg1 ;
-(NSString *)playActivityFeatureName;
-(void)setPlayActivityFeatureName:(NSString *)arg1 ;
-(NSData *)playActivityRecommendationData;
-(void)setPlayActivityRecommendationData:(NSData *)arg1 ;
-(void)setShuffleMode:(long long)arg1 ;
-(long long)shuffleMode;
-(void)getPlaybackContextWithCompletion:(/*^block*/id)arg1 ;
-(id<MPCPlaybackIntentDataSource>)tracklistDataSource;
-(BOOL)preventAutomaticPlayback;
-(void)getRemotePlaybackQueueRepresentationWithPlayerPath:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setTracklistToken:(id<NSSecureCoding>)arg1 ;
-(void)setTracklistSource:(long long)arg1 ;
-(long long)tracklistSource;
-(id<NSSecureCoding>)tracklistToken;
-(void)setPreventAutomaticPlayback:(BOOL)arg1 ;
@end

