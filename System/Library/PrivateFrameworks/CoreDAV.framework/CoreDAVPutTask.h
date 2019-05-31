/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:14:48 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreDAV/CoreDAVPostOrPutTask.h>

@class NSString;

@interface CoreDAVPutTask : CoreDAVPostOrPutTask {

	NSString* _nextETag;

}

@property (nonatomic,retain) NSString * nextETag;                                  //@synthesize nextETag=_nextETag - In the implementation block
@property (assign,nonatomic,__weak) id<CoreDAVTaskDelegate> delegate; 
-(id)description;
-(void)setNextETag:(NSString *)arg1 ;
-(id)httpMethod;
-(void)finishCoreDAVTaskWithError:(id)arg1 ;
-(NSString *)nextETag;
@end
