/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:14:58 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSOperation.h>

@protocol OS_dispatch_queue;
@class EKAvailabilityCache, NSDate, NSString, NSArray, NSObject, NSError;

@interface EKRequestAvailabilityOperation : NSOperation {

	BOOL _isFinished;
	BOOL _isExecuting;
	EKAvailabilityCache* _availabilityCache;
	NSDate* _startDate;
	NSDate* _endDate;
	NSString* _ignoredEventID;
	NSArray* _addresses;
	/*^block*/id _resultsBlock;
	id _requestID;
	NSObject*<OS_dispatch_queue> _queue;
	NSError* _error;

}

@property (nonatomic,retain) NSError * error;              //@synthesize error=_error - In the implementation block
-(NSError *)error;
-(void)setError:(NSError *)arg1 ;
-(id)init;
-(void)cancel;
-(id)description;
-(void)start;
-(void)main;
-(BOOL)isFinished;
-(BOOL)isExecuting;
-(id)initWithSource:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 ignoredEventID:(id)arg4 addresses:(id)arg5 resultsBlock:(/*^block*/id)arg6 ;
-(void)_finishWithError:(id)arg1 ;
-(BOOL)isConcurrent;
@end
