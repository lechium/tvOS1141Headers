/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:10:37 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface MTLPostVertexDumpOutput : NSObject {

	NSString* _airMDType;
	unsigned long long _dataType;
	NSString* _name;
	unsigned long long _offset;

}

@property (readonly) NSString * airMDType;                     //@synthesize airMDType=_airMDType - In the implementation block
@property (readonly) unsigned long long dataType;              //@synthesize dataType=_dataType - In the implementation block
@property (readonly) NSString * name;                          //@synthesize name=_name - In the implementation block
@property (readonly) unsigned long long offset;                //@synthesize offset=_offset - In the implementation block
-(id)formattedDescription:(unsigned long long)arg1 ;
-(id)initWithAirMDType:(id)arg1 dataType:(unsigned long long)arg2 name:(id)arg3 offset:(unsigned long long)arg4 ;
-(NSString *)airMDType;
-(unsigned long long)dataType;
-(void)dealloc;
-(id)description;
-(NSString *)name;
-(unsigned long long)offset;
@end
