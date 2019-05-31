/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:11:31 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@interface CLSensorRecorderSensorSampleRate : NSObject <NSSecureCoding> {

	unsigned _rate;
	int _dataType;

}

@property (assign) unsigned rate;              //@synthesize rate=_rate - In the implementation block
@property (assign) int dataType;               //@synthesize dataType=_dataType - In the implementation block
+(BOOL)supportsSecureCoding;
-(int)dataType;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setDataType:(int)arg1 ;
-(void)setRate:(unsigned)arg1 ;
-(unsigned)rate;
@end
