/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:20:17 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSArray, PHAsset;


@protocol MiroClip <MiroClip_Shim,NSObject>
@property (assign,nonatomic) int startTime; 
@property (assign,nonatomic) int duration; 
@property (assign,nonatomic) int maxDuration; 
@property (nonatomic,readonly) float sourceStartTime; 
@property (nonatomic,readonly) float sourceDuration; 
@property (nonatomic,readonly) int rawSourceDuration; 
@property (nonatomic,readonly) NSArray * multiUpContainedClips; 
@property (nonatomic,readonly) PHAsset * asset; 
@property (nonatomic,readonly) CGSize naturalSizeWithTransform; 
@property (nonatomic,readonly) BOOL isSlomo; 
@property (assign,nonatomic) BOOL audioEnabled; 
@required
-(int)duration;
-(void)setDuration:(int)arg1;
-(void)setStartTime:(int)arg1;
-(int)startTime;
-(PHAsset *)asset;
-(void)setAudioEnabled:(BOOL)arg1;
-(int)maxDuration;
-(float)sourceStartTime;
-(float)sourceDuration;
-(id)loadAVAsset;
-(void)loadAVPlayerItemWithCompletionHander:(/*^block*/id)arg1 progressHandler:(/*^block*/id)arg2 networkAccessAllowed:(BOOL)arg3;
-(BOOL)isSlomo;
-(NSArray *)multiUpContainedClips;
-(void)setMaxDuration:(int)arg1;
-(int)rawSourceDuration;
-(BOOL)audioEnabled;
-(CGSize)naturalSizeWithTransform;

@end

