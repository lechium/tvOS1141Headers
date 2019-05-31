/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:18:24 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/CallHistory.framework/CallHistory
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CHSynchronizableProtocol.h>
#import <libobjc.A.dylib/CHLoggerProtocol.h>

@class CHLogger, CHSynchronizable;

@interface CHSynchronizedLoggable : NSObject <CHSynchronizableProtocol, CHLoggerProtocol> {

	CHLogger* _logger;
	CHSynchronizable* _synchronizable;

}
-(void)executeSync:(/*^block*/id)arg1 ;
-(id)initWithName:(const char*)arg1 ;
-(id)queue;
-(void)execute:(/*^block*/id)arg1 ;
-(id)logHandle;
-(id)executeSyncWithResult:(/*^block*/id)arg1 ;
-(BOOL)executeSyncWithBOOL:(/*^block*/id)arg1 ;
-(id)initWithName:(const char*)arg1 queue:(id)arg2 ;
@end

