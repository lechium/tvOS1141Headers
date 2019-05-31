/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:18:50 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/IMDaemonCore.framework/IMDaemonCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CUTWeakReference, NSDate;

@interface IMDInconsistency : NSObject {

	CUTWeakReference* _contextWeakReference;
	NSDate* _firstOccurrence;
	unsigned long long _count;

}

@property (assign,nonatomic,__weak) id context; 
@property (readonly) NSDate * firstOccurrence;                      //@synthesize firstOccurrence=_firstOccurrence - In the implementation block
@property (assign,nonatomic) unsigned long long count;              //@synthesize count=_count - In the implementation block
-(id)init;
-(unsigned long long)count;
-(id)context;
-(void)setCount:(unsigned long long)arg1 ;
-(void)setContext:(id)arg1 ;
-(NSDate *)firstOccurrence;
-(BOOL)shouldJettison:(id*)arg1 ;
@end

