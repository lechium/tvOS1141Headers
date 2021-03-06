/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:17:42 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlaybackCore/_MPCPlayerItemCommand.h>
#import <libobjc.A.dylib/MPCPlayerSeekCommand.h>

@class NSArray, NSString;

@interface _MPCPlayerSeekCommand : _MPCPlayerItemCommand <MPCPlayerSeekCommand> {

	BOOL _supportsBeginFastForward;
	BOOL _supportsEndFastForward;
	BOOL _supportsBeginRewind;
	BOOL _supportsEndRewind;
	BOOL _supportsSkipForward;
	BOOL _supportsSkipBackward;
	BOOL _prefersNegativeBackwardSkipIntervals;
	BOOL _supportsSeekToPlaybackPosition;
	NSArray* _preferredBackwardJumpIntervals;
	NSArray* _preferredForwardJumpIntervals;

}

@property (assign,nonatomic) BOOL supportsBeginFastForward;                          //@synthesize supportsBeginFastForward=_supportsBeginFastForward - In the implementation block
@property (assign,nonatomic) BOOL supportsEndFastForward;                            //@synthesize supportsEndFastForward=_supportsEndFastForward - In the implementation block
@property (assign,nonatomic) BOOL supportsBeginRewind;                               //@synthesize supportsBeginRewind=_supportsBeginRewind - In the implementation block
@property (assign,nonatomic) BOOL supportsEndRewind;                                 //@synthesize supportsEndRewind=_supportsEndRewind - In the implementation block
@property (assign,nonatomic) BOOL supportsSkipForward;                               //@synthesize supportsSkipForward=_supportsSkipForward - In the implementation block
@property (assign,nonatomic) BOOL supportsSkipBackward;                              //@synthesize supportsSkipBackward=_supportsSkipBackward - In the implementation block
@property (assign,nonatomic) BOOL prefersNegativeBackwardSkipIntervals;              //@synthesize prefersNegativeBackwardSkipIntervals=_prefersNegativeBackwardSkipIntervals - In the implementation block
@property (assign,nonatomic) BOOL supportsSeekToPlaybackPosition;                    //@synthesize supportsSeekToPlaybackPosition=_supportsSeekToPlaybackPosition - In the implementation block
@property (nonatomic,copy) NSArray * preferredBackwardJumpIntervals;                 //@synthesize preferredBackwardJumpIntervals=_preferredBackwardJumpIntervals - In the implementation block
@property (nonatomic,copy) NSArray * preferredForwardJumpIntervals;                  //@synthesize preferredForwardJumpIntervals=_preferredForwardJumpIntervals - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)endSeek;
-(id)changePositionToElapsedInterval:(double)arg1 ;
-(id)beginSeekWithDirection:(long long)arg1 ;
-(void)setSupportsBeginFastForward:(BOOL)arg1 ;
-(void)setSupportsEndFastForward:(BOOL)arg1 ;
-(void)setSupportsBeginRewind:(BOOL)arg1 ;
-(void)setSupportsEndRewind:(BOOL)arg1 ;
-(void)setSupportsSkipForward:(BOOL)arg1 ;
-(void)setSupportsSkipBackward:(BOOL)arg1 ;
-(void)setSupportsSeekToPlaybackPosition:(BOOL)arg1 ;
-(BOOL)supportsSkipForward;
-(void)setPreferredForwardJumpIntervals:(NSArray *)arg1 ;
-(BOOL)supportsSkipBackward;
-(void)setPreferredBackwardJumpIntervals:(NSArray *)arg1 ;
-(NSArray *)preferredBackwardJumpIntervals;
-(void)setPrefersNegativeBackwardSkipIntervals:(BOOL)arg1 ;
-(BOOL)supportsBeginFastForward;
-(id)_seekCommandWithMediaRemoteCommand:(unsigned)arg1 options:(id)arg2 ;
-(BOOL)supportsBeginRewind;
-(BOOL)supportsEndFastForward;
-(BOOL)supportsEndRewind;
-(BOOL)prefersNegativeBackwardSkipIntervals;
-(BOOL)supportsSeekToPlaybackPosition;
-(id)jumpByInterval:(double)arg1 ;
-(NSArray *)preferredForwardJumpIntervals;
@end

