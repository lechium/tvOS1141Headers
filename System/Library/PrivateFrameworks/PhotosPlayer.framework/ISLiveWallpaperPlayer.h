/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:18:13 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/PhotosPlayer.framework/PhotosPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosPlayer/PhotosPlayer-Structs.h>
#import <PhotosPlayer/ISBasePlayer.h>

@class ISDisplayLink;

@interface ISLiveWallpaperPlayer : ISBasePlayer {

	SCD_Struct_IS4 _videoDuration;
	double _smoothedVelocity;
	BOOL _touching;
	BOOL __active;
	BOOL __seeking;
	float __playRate;
	double _force;
	ISDisplayLink* __displayLink;

}

@property (assign,setter=_setActive:,nonatomic) BOOL _active;                                   //@synthesize _active=__active - In the implementation block
@property (assign,setter=_setDisplayLink:,nonatomic) ISDisplayLink * _displayLink;              //@synthesize _displayLink=__displayLink - In the implementation block
@property (assign,setter=_setSeeking:,getter=_isSeeking,nonatomic) BOOL _seeking;               //@synthesize _seeking=__seeking - In the implementation block
@property (assign,setter=_setPlayRate:,nonatomic) float _playRate;                              //@synthesize _playRate=__playRate - In the implementation block
@property (assign,getter=isTouching,nonatomic) BOOL touching;                                   //@synthesize touching=_touching - In the implementation block
@property (assign,nonatomic) double force;                                                      //@synthesize force=_force - In the implementation block
@property (getter=isPlaying,nonatomic,readonly) BOOL playing; 
-(void)setForce:(double)arg1 ;
-(double)force;
-(void)_update;
-(void)setPlayerItem:(id)arg1 ;
-(BOOL)isPlaying;
-(void)didPerformChanges;
-(ISDisplayLink *)_displayLink;
-(void)_setDisplayLink:(id)arg1 ;
-(void)_setActive:(BOOL)arg1 ;
-(BOOL)_isSeeking;
-(void)statusDidChange;
-(float)_playRate;
-(void)setTouching:(BOOL)arg1 ;
-(BOOL)isTouching;
-(BOOL)_active;
-(void)_setPlayRate:(float)arg1 ;
-(void)_updatePlayer;
-(void)_seekVideoToBeginning;
-(void)_seekVideoToEnd;
-(void)_setSeeking:(BOOL)arg1 ;
-(void)_handleDidFinishSeeking:(BOOL)arg1 ;
@end

