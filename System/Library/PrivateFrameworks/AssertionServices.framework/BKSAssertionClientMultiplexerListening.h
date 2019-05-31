/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:10:41 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/AssertionServices.framework/AssertionServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString;


@protocol BKSAssertionClientMultiplexerListening <NSObject>
@property (nonatomic,readonly) NSString * supportedAssertionType; 
@required
-(NSString *)supportedAssertionType;
-(void)assertionQueue_handleMessage:(id)arg1;
-(void)assertionQueue_handleEvent:(id)arg1 ofType:(unsigned long long)arg2;
-(void)assertionQueue_handleDestroyEvent:(id)arg1;
-(void)connectionWasDestroyed;

@end

