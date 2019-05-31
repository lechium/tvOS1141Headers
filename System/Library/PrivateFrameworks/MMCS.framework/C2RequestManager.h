/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:14:47 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/MMCS.framework/MMCS
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class C2SessionPool;

@interface C2RequestManager : NSObject {

	C2SessionPool* _sessionPool;

}

@property (nonatomic,readonly) C2SessionPool * sessionPool;              //@synthesize sessionPool=_sessionPool - In the implementation block
+(id)sharedManager;
-(id)init;
-(C2SessionPool *)sessionPool;
-(id)createDataTaskWithRequest:(id)arg1 options:(id)arg2 delegate:(id)arg3 ;
-(id)testUtility_sessionForTask:(id)arg1 ;
-(id)testUtility_sessionTaskForTask:(id)arg1 ;
-(id)createDataTaskWithRequest:(id)arg1 options:(id)arg2 delegate:(id)arg3 sessionHandle:(id*)arg4 ;
@end
