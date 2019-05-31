/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:20:16 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface VEiOSCommonDelegate : NSObject
+(id)mainBundle;
+(void)setDelegateSubclass:(Class)arg1 ;
+(BOOL)fullScreenPlaybackOnExternalDisplay;
+(BOOL)allowSaving;
+(BOOL)ignoreReadOnly;
+(id)currentProject;
+(void)nukeCaches;
+(id)activeCoreProjectViewController;
+(BOOL)shouldPlaySlowMoWhenPreviewing;
+(unsigned long long)playbackFrameRateMode;
+(unsigned long long)exportFrameRateMode;
+(float)duckingAmount;
+(BOOL)forceTeardownDisplayOnProjectChange;
+(BOOL)updateProjectAndCachesOnPhotosLibraryChange;
+(long long)playbackPixelCount;
+(void)setCurrentProject:(id)arg1 ;
+(void)notifyCPVCProjectChanged;
+(float)videoScale;
+(void)setVideoScale:(float)arg1 ;
+(BOOL)furtherConstrainVideoScale;
+(void)setFullScreenPlaybackOnExternalDisplay:(BOOL)arg1 ;
@end
