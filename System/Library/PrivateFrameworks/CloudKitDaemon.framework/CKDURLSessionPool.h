/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:19:46 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface CKDURLSessionPool : NSObject {

	int _backgroundSessionConnectionPoolLimit;

}

@property (nonatomic,readonly) int backgroundSessionConnectionPoolLimit; 
+(id)sharedURLSessionPool;
+(id)backgroundSessionConnectionPoolName;
-(id)init;
-(int)backgroundSessionConnectionPoolLimit;
-(void)_updateBackgroundSessionConnectionPoolLimit;
@end

