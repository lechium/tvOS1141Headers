/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:14:10 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/IDS
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface IDSAutoCleanup : NSObject {

	/*^block*/id _cleanupBlock;
	int _accessCount;

}
-(void)dealloc;
-(id)initWithBlock:(/*^block*/id)arg1 ;
-(void)incrementAccessCount;
@end

