/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:11:34 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, BWFormatRequirements;

@interface BWNodeInputMediaConfiguration : NSObject {

	NSString* _associatedAttachedMediaKey;
	BWFormatRequirements* _formatRequirements;
	int _passthroughMode;
	int _retainedBufferCount;
	int _delayedBufferCount;
	int _indefinitelyHeldBufferCount;

}

@property (nonatomic,retain) BWFormatRequirements * formatRequirements;              //@synthesize formatRequirements=_formatRequirements - In the implementation block
@property (assign,nonatomic) int passthroughMode;                                    //@synthesize passthroughMode=_passthroughMode - In the implementation block
@property (assign,nonatomic) int retainedBufferCount;                                //@synthesize retainedBufferCount=_retainedBufferCount - In the implementation block
@property (assign,nonatomic) int delayedBufferCount;                                 //@synthesize delayedBufferCount=_delayedBufferCount - In the implementation block
@property (assign,nonatomic) int indefinitelyHeldBufferCount;                        //@synthesize indefinitelyHeldBufferCount=_indefinitelyHeldBufferCount - In the implementation block
-(void)setFormatRequirements:(BWFormatRequirements *)arg1 ;
-(void)setPassthroughMode:(int)arg1 ;
-(BWFormatRequirements *)formatRequirements;
-(void)_setAssociatedAttachedMediaKey:(id)arg1 ;
-(int)passthroughMode;
-(int)retainedBufferCount;
-(int)delayedBufferCount;
-(void)setDelayedBufferCount:(int)arg1 ;
-(int)indefinitelyHeldBufferCount;
-(void)setIndefinitelyHeldBufferCount:(int)arg1 ;
-(void)setRetainedBufferCount:(int)arg1 ;
-(id)init;
-(void)dealloc;
@end

