/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:17:26 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <SceneKit/SceneKit-Structs.h>
@interface SCNCommonProfileProgramGenerator : NSObject {

	os_unfair_lock_s _programMutex;
	CFDictionaryRef _shaders;
	CFDictionaryRef _trackedResourcesToHashcode;

}

@property (nonatomic,readonly) int profile; 
+(id)generatorWithProfile:(int)arg1 ;
+(id)deferredGeneratorWithProfile:(int)arg1 ;
-(id)init;
-(void)dealloc;
-(C3DFXProgramRef)programWithHashCode:(C3DRendererElementProgramHashCodeRef)arg1 engineContext:(C3DEngineContextRef)arg2 trackedResource:(id)arg3 introspectionDataPtr:(void*)arg4 ;
-(void)emptyShaderCache;
-(void)releaseProgramForResource:(id)arg1 ;
-(int)profile;
@end
