/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:12:30 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/DataDetectorsCore.framework/DataDetectorsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray;

@interface DDScannerList : NSObject {

	int _type;
	NSMutableArray* _waitQueue;
	NSMutableArray* _scannerCache;
	NSMutableArray* _activeScanners;

}
-(id)getCachedScanner;
-(void)activateScanner:(id)arg1 ;
-(void)pushBackScanner:(id)arg1 ;
-(/*^block*/id)dequeueJob;
-(BOOL)full;
-(void)dealloc;
-(id)initWithType:(int)arg1 ;
-(void)enqueueJob:(/*^block*/id)arg1 ;
-(id)scanner;
@end
