/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:14:17 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/WirelessProximity.framework/WirelessProximity
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSUUID, NSData;

@interface WPCharacteristic : NSObject <NSSecureCoding> {

	NSUUID* _uuid;
	unsigned long long _properties;
	unsigned long long _permissions;
	NSData* _data;
	long long _writeType;

}

@property (retain) NSUUID * uuid;                               //@synthesize uuid=_uuid - In the implementation block
@property (assign) unsigned long long properties;               //@synthesize properties=_properties - In the implementation block
@property (assign) unsigned long long permissions;              //@synthesize permissions=_permissions - In the implementation block
@property (retain) NSData * data;                               //@synthesize data=_data - In the implementation block
@property (assign) long long writeType;                         //@synthesize writeType=_writeType - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setPermissions:(unsigned long long)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(NSData *)data;
-(void)setData:(NSData *)arg1 ;
-(void)setProperties:(unsigned long long)arg1 ;
-(NSUUID *)uuid;
-(unsigned long long)properties;
-(void)setUuid:(NSUUID *)arg1 ;
-(long long)writeType;
-(void)setWriteType:(long long)arg1 ;
-(unsigned long long)permissions;
@end
