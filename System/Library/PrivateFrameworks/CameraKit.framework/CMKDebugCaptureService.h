/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:15:03 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/CameraKit.framework/CameraKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CameraKit/CMKCaptureService.h>

@interface CMKDebugCaptureService : CMKCaptureService {

	BOOL _debugLoggingEnabled;
	double __enqueueTime;

}

@property (nonatomic,readonly) double _enqueueTime;                                              //@synthesize _enqueueTime=__enqueueTime - In the implementation block
@property (assign,getter=isDebugLoggingEnabled,nonatomic) BOOL debugLoggingEnabled;              //@synthesize debugLoggingEnabled=_debugLoggingEnabled - In the implementation block
-(void)requestWasEnqueued:(id)arg1 ;
-(void)responseWasGenerated:(id)arg1 error:(id)arg2 ;
-(void)responseWasCompleted:(id)arg1 error:(id)arg2 ;
-(void)willCaptureStillImageForRequest:(id)arg1 ;
-(void)didCaptureStillImageForRequest:(id)arg1 ;
-(void)receivedStillImageForRequest:(id)arg1 ;
-(BOOL)isDebugLoggingEnabled;
-(void)setDebugLoggingEnabled:(BOOL)arg1 ;
-(double)_enqueueTime;
@end

