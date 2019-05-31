/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:20:30 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/TimeSync.framework/TimeSync
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TimeSync/TSgPTPFDEtEPort.h>

@interface TSgPTPUnicastUDPv4EtEPort : TSgPTPFDEtEPort
+(id)diagnosticDescriptionForService:(unsigned)arg1 withIndent:(id)arg2 ;
+(id)iokitMatchingDictionaryForInterfaceName:(id)arg1 andIPv4Address:(unsigned)arg2 ;
-(long long)portType;
-(void)dealloc;
-(id)initWithService:(unsigned)arg1 ;
-(id)initWithMatchingDictionary:(id)arg1 ;
-(id)sourceAddressString;
-(id)destinationAddressString;
-(id)initWithInterfaceName:(id)arg1 andIPv4Address:(unsigned)arg2 ;
@end

