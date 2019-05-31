/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:16:36 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <MediaPlayer/MPMusicPlayerQueueDescriptor.h>

@class NSArray, MPMusicPlayerPlayParameters;

@interface MPMusicPlayerPlayParametersQueueDescriptor : MPMusicPlayerQueueDescriptor {

	NSArray* _playParametersQueue;
	MPMusicPlayerPlayParameters* _startItemPlayParameters;

}

@property (nonatomic,copy) NSArray * playParametersQueue;                                        //@synthesize playParametersQueue=_playParametersQueue - In the implementation block
@property (nonatomic,retain) MPMusicPlayerPlayParameters * startItemPlayParameters;              //@synthesize startItemPlayParameters=_startItemPlayParameters - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithPlayParametersQueue:(id)arg1 ;
-(void)setStartTime:(double)arg1 forItemWithPlayParameters:(id)arg2 ;
-(void)setEndTime:(double)arg1 forItemWithPlayParameters:(id)arg2 ;
-(NSArray *)playParametersQueue;
-(void)setPlayParametersQueue:(NSArray *)arg1 ;
-(MPMusicPlayerPlayParameters *)startItemPlayParameters;
-(void)setStartItemPlayParameters:(MPMusicPlayerPlayParameters *)arg1 ;
@end

