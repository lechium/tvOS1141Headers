/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:14:53 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/CalendarDaemon.framework/CalendarDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_source;
@class NSObject;

@interface LocalAttachmentCleanUpSupport : NSObject {

	NSObject*<OS_dispatch_source> _source;

}
-(id)init;
-(void)dealloc;
-(void)interruptNextScheduledCleanup;
-(void)_dispatchCleanupAfterDelay:(long long)arg1 ;
-(void)scheduleNextCleanup;
-(void)_setTimerOnSource:(long long)arg1 ;
-(void)cleanUpOrphanedFiles;
@end

