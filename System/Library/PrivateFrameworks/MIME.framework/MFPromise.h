/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:16:43 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/MIME.framework/MIME
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class MFFuture;

@interface MFPromise : NSObject {

	MFFuture* _future;

}

@property (readonly) MFFuture * future;              //@synthesize future=_future - In the implementation block
+(id)promise;
-(id)init;
-(BOOL)respondsToSelector:(SEL)arg1 ;
-(void)dealloc;
-(id)forwardingTargetForSelector:(SEL)arg1 ;
-(MFFuture *)future;
@end

