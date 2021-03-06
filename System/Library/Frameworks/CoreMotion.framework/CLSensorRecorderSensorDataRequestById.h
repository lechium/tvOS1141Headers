/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:11:31 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@interface CLSensorRecorderSensorDataRequestById : NSObject <NSSecureCoding> {

	int _dataType;
	unsigned long long _identifier;
	unsigned long long _metaIdentifier;

}

@property (assign) unsigned long long identifier;                  //@synthesize identifier=_identifier - In the implementation block
@property (assign) unsigned long long metaIdentifier;              //@synthesize metaIdentifier=_metaIdentifier - In the implementation block
@property (assign) int dataType;                                   //@synthesize dataType=_dataType - In the implementation block
+(BOOL)supportsSecureCoding;
-(int)dataType;
-(void)setMetaIdentifier:(unsigned long long)arg1 ;
-(unsigned long long)metaIdentifier;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)identifier;
-(void)setIdentifier:(unsigned long long)arg1 ;
-(void)setDataType:(int)arg1 ;
@end

