/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:18:22 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSDate, NSNumber;

@interface WLKPlaybackSummary : NSObject <NSSecureCoding> {

	BOOL _isAlwaysLive;
	NSString* _bundleID;
	NSDate* _timestamp;
	NSDate* _currentPlaybackDate;
	NSNumber* _duration;
	NSNumber* _elapsedTime;
	NSString* _accountID;
	NSString* _externalProfileID;
	NSString* _contentID;
	NSString* _serviceID;
	long long _playbackState;
	NSNumber* _playbackRate;
	long long _completionState;
	long long _playbackType;

}

@property (nonatomic,readonly) NSString * bundleID;                       //@synthesize bundleID=_bundleID - In the implementation block
@property (nonatomic,readonly) NSDate * timestamp;                        //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) NSDate * currentPlaybackDate;              //@synthesize currentPlaybackDate=_currentPlaybackDate - In the implementation block
@property (nonatomic,readonly) NSNumber * duration;                       //@synthesize duration=_duration - In the implementation block
@property (nonatomic,readonly) NSNumber * elapsedTime;                    //@synthesize elapsedTime=_elapsedTime - In the implementation block
@property (nonatomic,readonly) NSString * accountID;                      //@synthesize accountID=_accountID - In the implementation block
@property (nonatomic,readonly) NSString * externalProfileID;              //@synthesize externalProfileID=_externalProfileID - In the implementation block
@property (nonatomic,readonly) NSString * contentID;                      //@synthesize contentID=_contentID - In the implementation block
@property (nonatomic,readonly) NSString * serviceID;                      //@synthesize serviceID=_serviceID - In the implementation block
@property (nonatomic,readonly) long long playbackState;                   //@synthesize playbackState=_playbackState - In the implementation block
@property (nonatomic,readonly) NSNumber * playbackRate;                   //@synthesize playbackRate=_playbackRate - In the implementation block
@property (nonatomic,readonly) long long completionState;                 //@synthesize completionState=_completionState - In the implementation block
@property (nonatomic,readonly) BOOL isAlwaysLive;                         //@synthesize isAlwaysLive=_isAlwaysLive - In the implementation block
@property (nonatomic,readonly) long long playbackType;                    //@synthesize playbackType=_playbackType - In the implementation block
+(BOOL)supportsSecureCoding;
+(long long)completionStateForDuration:(double)arg1 elapsedTime:(double)arg2 ;
+(id)debugStringForCompletionState:(long long)arg1 ;
+(double)playedThresholdTimeForDuration:(double)arg1 ;
-(long long)playbackType;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSDate *)timestamp;
-(NSNumber *)duration;
-(id)dictionaryRepresentation;
-(NSString *)bundleID;
-(NSNumber *)elapsedTime;
-(NSDate *)currentPlaybackDate;
-(BOOL)_isValid;
-(BOOL)isAlwaysLive;
-(NSNumber *)playbackRate;
-(NSString *)accountID;
-(NSString *)contentID;
-(id)initWithBundleId:(id)arg1 timestamp:(id)arg2 duration:(id)arg3 elapsedTime:(id)arg4 externalProfileID:(id)arg5 contentID:(id)arg6 accountID:(id)arg7 playbackState:(long long)arg8 playbackRate:(id)arg9 completionState:(long long)arg10 isAlwaysLive:(BOOL)arg11 serviceID:(id)arg12 currentPlaybackDate:(id)arg13 playbackType:(long long)arg14 ;
-(BOOL)isEqualToSummary:(id)arg1 ;
-(long long)completionState;
-(BOOL)_compareOptional:(id)arg1 with:(id)arg2 ;
-(NSString *)externalProfileID;
-(BOOL)_validate:(id)arg1 identifier:(id)arg2 expectedClass:(Class)arg3 ;
-(id)initWithMediaRemoteDictionary:(id)arg1 bundleID:(id)arg2 accountID:(id)arg3 ;
-(BOOL)isEqualToSummaryExcludingCursor:(id)arg1 ;
-(BOOL)isEqualToSummaryExcludingTimestamp:(id)arg1 ;
-(BOOL)isSameContent:(id)arg1 ;
-(BOOL)isLiveType;
-(long long)playbackState;
-(NSString *)serviceID;
-(id)JSONRepresentation;
@end

