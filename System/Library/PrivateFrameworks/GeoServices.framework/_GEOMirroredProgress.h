/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:12:04 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSProgress.h>

@class NSProgress;

@interface _GEOMirroredProgress : NSProgress {

	NSProgress* _originalProgress;

}
-(id)initWithMirroredProgress:(id)arg1 ;
-(id)_initWithMirroredProgressForSubclasses:(id)arg1 ;
-(void)_registerForKVO;
-(void)_unregisterForKVO;
-(void)_replaceObservedProgressWith:(id)arg1 ;
-(void)dealloc;
-(void)_update;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
@end

