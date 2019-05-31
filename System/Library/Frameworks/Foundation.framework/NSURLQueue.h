/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:10:29 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSURLQueueNode;

@interface NSURLQueue : NSObject {

	unsigned long long count;
	NSURLQueueNode* head;
	NSURLQueueNode* tail;
	id monitor;
	BOOL waitOnTake;
	BOOL _pad1;
	BOOL _pad2;
	BOOL _pad3;

}
+(id)newNode;
-(void)put:(id)arg1 ;
-(id)take;
-(id)peek;
-(id)peekAt:(unsigned long long)arg1 ;
-(long long)indexOf:(id)arg1 ;
-(BOOL)waitOnTake;
-(void)setWaitOnTake:(BOOL)arg1 ;
-(id)init;
-(unsigned long long)count;
-(void)dealloc;
-(BOOL)isEmpty;
-(void)clear;
-(BOOL)remove:(id)arg1 ;
@end

