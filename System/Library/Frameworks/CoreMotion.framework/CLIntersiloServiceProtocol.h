/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:11:27 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CLIntersiloServiceProtocol <CLIntersiloProxyDelegateProtocol>
@optional
-(void)beginService;
-(void)endService;
-(void)registerDelegate:(id)arg1 inSilo:(id)arg2;
-(void)setDelegateEntityName:(const char*)arg1;

@required
+(id)getSilo;
+(void)becameFatallyBlocked:(id)arg1 index:(unsigned long long)arg2;
+(void)performSyncOnSilo:(id)arg1 invoker:(/*^block*/id)arg2;
+(BOOL)isSupported;

@end

