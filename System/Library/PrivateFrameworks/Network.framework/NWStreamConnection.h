/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:13:42 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/Network.framework/Network
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Network/NWConnection.h>

@interface NWStreamConnection : NWConnection
+(id)connectionWithConnectedSocket:(int)arg1 ;
-(BOOL)readDataWithMinimumLength:(unsigned long long)arg1 maximumLength:(unsigned long long)arg2 completionHandler:(/*^block*/id)arg3 ;
-(BOOL)writeData:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)writeCloseWithCompletionHandler:(/*^block*/id)arg1 ;
@end

