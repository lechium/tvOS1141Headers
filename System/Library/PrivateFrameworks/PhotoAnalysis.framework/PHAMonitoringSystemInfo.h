/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:20:20 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/PhotoAnalysis
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@interface PHAMonitoringSystemInfo : NSObject <NSSecureCoding> {

	unsigned long long _diskBytesReadPerInterval;
	unsigned long long _diskBytesWritePerInterval;

}

@property (assign) unsigned long long diskBytesReadPerInterval;               //@synthesize diskBytesReadPerInterval=_diskBytesReadPerInterval - In the implementation block
@property (assign) unsigned long long diskBytesWritePerInterval;              //@synthesize diskBytesWritePerInterval=_diskBytesWritePerInterval - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)diskBytesReadPerInterval;
-(unsigned long long)diskBytesWritePerInterval;
-(void)setDiskBytesReadPerInterval:(unsigned long long)arg1 ;
-(void)setDiskBytesWritePerInterval:(unsigned long long)arg1 ;
@end
