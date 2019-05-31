/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:12:22 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/MobileAsset.framework/MobileAsset
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray;

@interface MAProgressHandler : NSObject {

	unsigned long long _notificationInterval;
	NSMutableArray* _callBackArray;

}

@property (assign,nonatomic) unsigned long long notificationInterval;              //@synthesize notificationInterval=_notificationInterval - In the implementation block
@property (nonatomic,readonly) NSMutableArray * callBackArray;                     //@synthesize callBackArray=_callBackArray - In the implementation block
-(NSMutableArray *)callBackArray;
-(void)addCallBack:(/*^block*/id)arg1 ;
-(id)initWithCallBack:(/*^block*/id)arg1 ;
-(unsigned long long)notificationInterval;
-(void)setNotificationInterval:(unsigned long long)arg1 ;
-(void)dealloc;
@end

