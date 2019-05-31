/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:20:13 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MiroAutoEditDelegate;
@class Project, MiroMemory, MiroBlueprint, MiroAutoEditLogger;

@interface MiroAutoEdit_TrimController : NSObject {

	BOOL _useNonSpecialDurations;
	BOOL _allowMoreThanMaxVideo;
	int _duration;
	id<MiroAutoEditDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<MiroAutoEditDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) Project * project; 
@property (nonatomic,readonly) MiroMemory * memory; 
@property (nonatomic,readonly) MiroBlueprint * blueprint; 
@property (assign,nonatomic) int duration;                                          //@synthesize duration=_duration - In the implementation block
@property (nonatomic,readonly) MiroAutoEditLogger * logger; 
@property (assign,nonatomic) BOOL useNonSpecialDurations;                           //@synthesize useNonSpecialDurations=_useNonSpecialDurations - In the implementation block
@property (assign,nonatomic) BOOL allowMoreThanMaxVideo;                            //@synthesize allowMoreThanMaxVideo=_allowMoreThanMaxVideo - In the implementation block
-(id<MiroAutoEditDelegate>)delegate;
-(void)setDelegate:(id<MiroAutoEditDelegate>)arg1 ;
-(int)duration;
-(void)setDuration:(int)arg1 ;
-(id)initWithDelegate:(id)arg1 ;
-(MiroMemory *)memory;
-(MiroBlueprint *)blueprint;
-(Project *)project;
-(MiroAutoEditLogger *)logger;
-(BOOL)clipIsTitleCard:(id)arg1 ;
-(void)setDuration:(int)arg1 andStartTimeForClip:(id)arg2 ;
-(int)durationOfUserTrimForClip:(id)arg1 ;
-(int)lastClipInPoint;
-(void)_fitToDuration;
-(void)_saveFreezeBits;
-(void)_clipClip:(id)arg1 ;
-(id)_rangesForClipIncorporatingUserTrim:(id)arg1 ;
-(BOOL)useNonSpecialDurations;
-(int)minimumBlueprintDurationForClip:(id)arg1 ;
-(int)maximumBlueprintDurationForClip:(id)arg1 ;
-(BOOL)allowMoreThanMaxVideo;
-(int)shrinkAndStretchClips:(id)arg1 ;
-(void)setAllowMoreThanMaxVideo:(BOOL)arg1 ;
-(void)layoutProject;
-(void)setUseNonSpecialDurations:(BOOL)arg1 ;
@end

