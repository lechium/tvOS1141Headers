/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:13:42 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/Network.framework/Network
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Network/NWConnection.h>

@interface NWMessageConnection : NWConnection
-(void)writeCloseWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)readMessageWithMaximumCount:(unsigned long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)writeMessage:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
@end

