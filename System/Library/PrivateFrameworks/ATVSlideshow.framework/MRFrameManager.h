/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:21:02 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface MRFrameManager : NSObject {

	NSMutableDictionary* mFrameSets;
	NSMutableDictionary* mFramePools;

}
+(void)initialize;
+(id)sharedManager;
-(void)releaseResources;
-(id)init;
-(void)dealloc;
-(void)cleanup;
-(id)frameWithFrameID:(id)arg1 ;
-(void)recycleFrame:(id)arg1 ;
-(id)resourcePathForFrameID:(id)arg1 andResource:(id)arg2 ;
-(id)sizeScriptForFrameID:(id)arg1 ;
@end

