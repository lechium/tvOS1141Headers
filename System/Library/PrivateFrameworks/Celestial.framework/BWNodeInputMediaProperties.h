/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:11:34 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, BWNodeInput, BWFormat, BWVideoFormat;

@interface BWNodeInputMediaProperties : NSObject {

	NSString* _associatedAttachedMediaKey;
	BWNodeInput* _owningNodeInput;
	BWFormat* _resolvedFormat;
	BWFormat* _liveFormat;

}

@property (nonatomic,retain) BWFormat * resolvedFormat; 
@property (nonatomic,readonly) BWVideoFormat * resolvedVideoFormat; 
@property (nonatomic,readonly) BWFormat * liveFormat;                            //@synthesize liveFormat=_liveFormat - In the implementation block
@property (nonatomic,readonly) BWVideoFormat * liveVideoFormat; 
-(void)setResolvedFormat:(BWFormat *)arg1 ;
-(void)setLiveFormat:(BWFormat *)arg1 ;
-(BWFormat *)liveFormat;
-(void)_setOwningNodeInput:(id)arg1 associatedAttachedMediaKey:(id)arg2 ;
-(BWFormat *)resolvedFormat;
-(BWVideoFormat *)resolvedVideoFormat;
-(id)liveFormatFormat;
-(BWVideoFormat *)liveVideoFormat;
-(void)dealloc;
@end

