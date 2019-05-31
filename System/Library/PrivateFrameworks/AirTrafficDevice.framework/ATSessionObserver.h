/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:18:57 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/AirTrafficDevice.framework/AirTrafficDevice
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol ATSessionObserver <NSObject>
@optional
-(void)session:(id)arg1 willBeginSessionTask:(id)arg2;
-(void)session:(id)arg1 didBeginSessionTask:(id)arg2;
-(void)session:(id)arg1 didUpdateSessionTask:(id)arg2;
-(void)session:(id)arg1 didFinishSessionTask:(id)arg2;
-(void)sessionWillBegin:(id)arg1;
-(void)sessionDidFinish:(id)arg1;

@end

