/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:15:38 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/GEOMotionContextProvider.h>

@protocol GEOMotionContextProviderDelegate;
@class CMActivityManager, MNTraceRecorder, NSString;

@interface MNCoreMotionContextProvider : NSObject <GEOMotionContextProvider> {

	CMActivityManager* _activityManager;
	id<GEOMotionContextProviderDelegate> _delegate;
	MNTraceRecorder* _traceRecorder;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<GEOMotionContextProviderDelegate> motionDelegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)stopMotionUpdates;
-(void)startMotionUpdates;
-(void)setMotionDelegate:(id<GEOMotionContextProviderDelegate>)arg1 ;
-(void)dealloc;
-(id<GEOMotionContextProviderDelegate>)motionDelegate;
-(id)initWithTraceRecorder:(id)arg1 ;
@end
