/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:16:44 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/MIME.framework/MIME
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MIME/MFObservable.h>

@class NSLock, MFObservable, MFQueue;

@interface _MFReplayObservable : MFObservable {

	NSLock* _lock;
	MFObservable* _observable;
	MFQueue* _queue;

}
-(void)dealloc;
-(id)subscribe:(id)arg1 ;
-(id)initWithObservable:(id)arg1 count:(unsigned long long)arg2 ;
-(void)_enqueue:(id)arg1 ;
@end
