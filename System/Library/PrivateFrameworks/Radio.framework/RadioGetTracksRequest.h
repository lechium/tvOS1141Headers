/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:17:37 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/Radio.framework/Radio
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Radio/RadioRequest.h>

@class SSURLConnectionRequest, NSString, NSNumber, NSDictionary, NSData, SSVPlaybackLease, RadioPlayEventCollection, NSArray, RadioPlaybackContext, RadioStationMatchContext;

@interface RadioGetTracksRequest : RadioRequest {

	unsigned long long _globalVersion;
	BOOL _hasSetWillContinuePlayback;
	BOOL _includeCleanTracksOnly;
	unsigned long long _numberOfTracks;
	SSURLConnectionRequest* _request;
	BOOL _shouldIncludeStationInResponse;
	NSString* _stationHash;
	long long _stationID;
	NSString* _stationStringID;
	BOOL _shouldIncludeAsset;
	BOOL _skipPromptForSeamlessPlayback;
	BOOL _willContinuePlayback;
	NSNumber* _accountUniqueIdentifier;
	NSDictionary* _additionalRequestParameters;
	NSData* _heartbeatTokenData;
	SSVPlaybackLease* _playbackLease;
	RadioPlayEventCollection* _playEventCollection;
	NSArray* _playActivityEvents;
	RadioPlaybackContext* _playbackContext;
	long long _reasonType;
	RadioStationMatchContext* _stationMatchContext;
	RadioStationMatchContext* _nowPlayingMatchContext;

}

@property (nonatomic,copy,readonly) NSNumber * accountUniqueIdentifier;                      //@synthesize accountUniqueIdentifier=_accountUniqueIdentifier - In the implementation block
@property (nonatomic,copy) NSDictionary * additionalRequestParameters;                       //@synthesize additionalRequestParameters=_additionalRequestParameters - In the implementation block
@property (assign,nonatomic) unsigned long long numberOfTracks;                              //@synthesize numberOfTracks=_numberOfTracks - In the implementation block
@property (nonatomic,copy) NSData * heartbeatTokenData;                                      //@synthesize heartbeatTokenData=_heartbeatTokenData - In the implementation block
@property (assign,nonatomic) BOOL includeCleanTracksOnly;                                    //@synthesize includeCleanTracksOnly=_includeCleanTracksOnly - In the implementation block
@property (nonatomic,retain) SSVPlaybackLease * playbackLease;                               //@synthesize playbackLease=_playbackLease - In the implementation block
@property (nonatomic,copy) RadioPlayEventCollection * playEventCollection;                   //@synthesize playEventCollection=_playEventCollection - In the implementation block
@property (nonatomic,copy) NSArray * playActivityEvents;                                     //@synthesize playActivityEvents=_playActivityEvents - In the implementation block
@property (nonatomic,copy) RadioPlaybackContext * playbackContext;                           //@synthesize playbackContext=_playbackContext - In the implementation block
@property (assign,nonatomic) long long reasonType;                                           //@synthesize reasonType=_reasonType - In the implementation block
@property (assign,nonatomic) BOOL shouldIncludeAsset;                                        //@synthesize shouldIncludeAsset=_shouldIncludeAsset - In the implementation block
@property (assign,nonatomic) BOOL shouldIncludeStationInResponse;                            //@synthesize shouldIncludeStationInResponse=_shouldIncludeStationInResponse - In the implementation block
@property (assign,nonatomic) BOOL skipPromptForSeamlessPlayback;                             //@synthesize skipPromptForSeamlessPlayback=_skipPromptForSeamlessPlayback - In the implementation block
@property (nonatomic,retain) RadioStationMatchContext * stationMatchContext;                 //@synthesize stationMatchContext=_stationMatchContext - In the implementation block
@property (nonatomic,retain) RadioStationMatchContext * nowPlayingMatchContext;              //@synthesize nowPlayingMatchContext=_nowPlayingMatchContext - In the implementation block
@property (assign,nonatomic) BOOL willContinuePlayback;                                      //@synthesize willContinuePlayback=_willContinuePlayback - In the implementation block
-(id)init;
-(void)cancel;
-(NSNumber *)accountUniqueIdentifier;
-(NSArray *)playActivityEvents;
-(void)setPlayActivityEvents:(NSArray *)arg1 ;
-(NSDictionary *)additionalRequestParameters;
-(void)setIncludeCleanTracksOnly:(BOOL)arg1 ;
-(id)initWithGlobalVersion:(unsigned long long)arg1 ;
-(BOOL)includeCleanTracksOnly;
-(id)_playbackContextForStation:(id)arg1 ;
-(BOOL)skipPromptForSeamlessPlayback;
-(id)initWithStation:(id)arg1 globalVersion:(unsigned long long)arg2 ;
-(id)initWithStationStringID:(id)arg1 globalVersion:(unsigned long long)arg2 ;
-(void)setWillContinuePlayback:(BOOL)arg1 ;
-(unsigned long long)numberOfTracks;
-(void)setNumberOfTracks:(unsigned long long)arg1 ;
-(NSData *)heartbeatTokenData;
-(void)setHeartbeatTokenData:(NSData *)arg1 ;
-(SSVPlaybackLease *)playbackLease;
-(void)setPlaybackLease:(SSVPlaybackLease *)arg1 ;
-(RadioPlayEventCollection *)playEventCollection;
-(void)setPlayEventCollection:(RadioPlayEventCollection *)arg1 ;
-(BOOL)shouldIncludeAsset;
-(void)setShouldIncludeAsset:(BOOL)arg1 ;
-(BOOL)shouldIncludeStationInResponse;
-(void)setShouldIncludeStationInResponse:(BOOL)arg1 ;
-(void)setSkipPromptForSeamlessPlayback:(BOOL)arg1 ;
-(RadioStationMatchContext *)nowPlayingMatchContext;
-(void)setNowPlayingMatchContext:(RadioStationMatchContext *)arg1 ;
-(BOOL)willContinuePlayback;
-(RadioPlaybackContext *)playbackContext;
-(RadioStationMatchContext *)stationMatchContext;
-(void)setStationMatchContext:(RadioStationMatchContext *)arg1 ;
-(long long)reasonType;
-(void)setAdditionalRequestParameters:(NSDictionary *)arg1 ;
-(void)setReasonType:(long long)arg1 ;
-(void)setPlaybackContext:(RadioPlaybackContext *)arg1 ;
-(void)startWithCompletionHandler:(/*^block*/id)arg1 ;
@end

