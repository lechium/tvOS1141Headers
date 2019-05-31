/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:20:16 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class BurstClip;

@interface BurstClipStyle : NSObject {

	BurstClip* _burstClip;

}

@property (assign,nonatomic,__weak) BurstClip * burstClip;               //@synthesize burstClip=_burstClip - In the implementation block
@property (nonatomic,readonly) double minimumPhotoDuration; 
@property (nonatomic,readonly) double idealPhotoDuration; 
@property (nonatomic,readonly) double maximumPhotoDuration; 
@property (nonatomic,readonly) double minimumVideoDuration; 
@property (nonatomic,readonly) double idealVideoDuration; 
-(int)duration;
-(double)maximumDuration;
-(BOOL)isSupported;
-(int)projectFrameRate;
-(double)idealDuration;
-(double)minimumDuration;
-(id)containedClipsWithInTransition:(id)arg1 outTransition:(id)arg2 ;
-(BurstClip *)burstClip;
-(void)turnOffKenBurnsForClips:(id)arg1 ;
-(id)containedClipsWithoutTransitions;
-(void)adjustDurationsOfClips:(id)arg1 withInTransition:(id)arg2 outTransition:(id)arg3 ;
-(double)minimumPhotoDuration;
-(double)idealPhotoDuration;
-(double)maximumPhotoDuration;
-(id)sourceClips;
-(double)minimumVideoDuration;
-(double)idealVideoDuration;
-(double)projectAspectRatio;
-(void)setBurstClip:(BurstClip *)arg1 ;
@end

