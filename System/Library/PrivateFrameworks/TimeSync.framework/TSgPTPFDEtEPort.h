/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:20:30 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/TimeSync.framework/TimeSync
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TimeSync/TSgPTPNetworkPort.h>

@class TSgPTPPortStatistics;

@interface TSgPTPFDEtEPort : TSgPTPNetworkPort

@property (nonatomic,readonly) TSgPTPPortStatistics * statistics; 
+(id)diagnosticDescriptionForService:(unsigned)arg1 withIndent:(id)arg2 ;
-(TSgPTPPortStatistics *)statistics;
@end
