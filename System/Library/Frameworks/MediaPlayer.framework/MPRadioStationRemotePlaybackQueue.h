/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:16:33 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <MediaPlayer/MPRemotePlaybackQueue.h>

@class NSString;

@interface MPRadioStationRemotePlaybackQueue : MPRemotePlaybackQueue {

	long long _stationID;
	NSString* _stationStringID;

}

@property (nonatomic,readonly) long long stationID;                     //@synthesize stationID=_stationID - In the implementation block
@property (nonatomic,readonly) NSString * stationStringID;              //@synthesize stationStringID=_stationStringID - In the implementation block
+(BOOL)supportsSecureCoding;
-(long long)stationID;
-(id)description;
-(NSString *)stationStringID;
-(id)initWithMediaRemotePlaybackQueue:(MRSystemAppPlaybackQueueRef)arg1 ;
-(BOOL)verifyWithError:(id*)arg1 ;
@end

