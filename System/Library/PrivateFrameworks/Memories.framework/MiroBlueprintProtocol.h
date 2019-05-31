/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:20:13 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MiroBlueprintProtocol <NSObject>
@property (nonatomic,readonly) double videoMinDuration; 
@property (nonatomic,readonly) double videoIdealDuration; 
@property (nonatomic,readonly) double videoMaxDuration; 
@property (nonatomic,readonly) double photoMinDuration; 
@property (nonatomic,readonly) double photoIdealDuration; 
@property (nonatomic,readonly) double photoMaxDuration; 
@property (nonatomic,readonly) double titleMinDuration; 
@property (nonatomic,readonly) double titleIdealDuration; 
@property (nonatomic,readonly) double irisMinDuration; 
@property (nonatomic,readonly) double irisIdealDuration; 
@property (nonatomic,readonly) double irisMaxDuration; 
@property (nonatomic,readonly) double burstMinDuration; 
@property (nonatomic,readonly) double burstIdealDuration; 
@property (nonatomic,readonly) double sloMoMinDuration; 
@property (nonatomic,readonly) double sloMoIdealDuration; 
@property (nonatomic,readonly) double timelapseMinDuration; 
@property (nonatomic,readonly) double timelapseIdealDuration; 
@property (nonatomic,readonly) double halfBarDuration; 
@property (nonatomic,readonly) unsigned long long toneTreatment; 
@property (nonatomic,readonly) id<MiroBlueprintMusicInfoProtocol> musicInfo; 
@property (nonatomic,readonly) id<MiroBlueprintTitleStyleProtocol> titleStyle; 
@property (nonatomic,readonly) id<MiroBlueprintEditStyleProtocol> editStyle; 
@required
-(double)videoMinDuration;
-(double)videoIdealDuration;
-(double)videoMaxDuration;
-(double)panoMinDurationWithMultiplier:(double)arg1;
-(double)panoMaxDurationWithMultiplier:(double)arg1;
-(double)panoIdealDurationWithMultiplier:(double)arg1;
-(double)photoIdealDuration;
-(double)photoMinDuration;
-(double)photoMaxDuration;
-(double)idealDurationForAsset:(id)arg1;
-(id<MiroBlueprintMusicInfoProtocol>)musicInfo;
-(id<MiroBlueprintEditStyleProtocol>)editStyle;
-(id<MiroBlueprintTitleStyleProtocol>)titleStyle;
-(double)titleMinDuration;
-(double)titleIdealDuration;
-(double)minimumDurationForAsset:(id)arg1;
-(double)maximumDurationForAsset:(id)arg1;
-(double)halfBarDuration;
-(double)sloMoMinDuration;
-(double)sloMoIdealDuration;
-(double)timelapseMinDuration;
-(double)timelapseIdealDuration;
-(double)irisMinDuration;
-(double)irisIdealDuration;
-(double)irisMaxDuration;
-(double)burstMinDuration;
-(double)burstIdealDuration;
-(BOOL)durationIsNearVideoIdeal:(double)arg1;
-(unsigned long long)toneTreatment;

@end

