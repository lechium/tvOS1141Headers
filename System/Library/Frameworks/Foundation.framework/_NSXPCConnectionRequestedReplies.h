/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:10:33 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Foundation/Foundation-Structs.h>
@interface _NSXPCConnectionRequestedReplies : NSObject {

	CFDictionaryRef _replyDictionaryTable;
	CFDictionaryRef _progressTable;
	unsigned long long _requestedReplyCount;
	unsigned char _invalid;
	opaque_pthread_mutex_t _lock;

}
-(void)beginTransactionForSequence:(unsigned long long)arg1 reply:(id)arg2 withProgress:(id)arg3 ;
-(void)endTransactionForSequence:(unsigned long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)progressForSequence:(unsigned long long)arg1 ;
-(id)init;
-(void)invalidate;
-(void)dealloc;
@end

