/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:18:31 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/Catalyst.framework/Catalyst
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSData, CATAddress;

@interface CATEndPoint : NSObject {

	unsigned _port;
	NSData* _data;
	CATAddress* _address;

}

@property (nonatomic,readonly) NSData * data;                     //@synthesize data=_data - In the implementation block
@property (nonatomic,readonly) CATAddress * address;              //@synthesize address=_address - In the implementation block
@property (nonatomic,readonly) unsigned port;                     //@synthesize port=_port - In the implementation block
-(CATAddress *)address;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSData *)data;
-(id)initWithData:(id)arg1 ;
-(unsigned)port;
-(id)initWithAddress:(id)arg1 port:(unsigned)arg2 ;
-(BOOL)isEqualToEndPoint:(id)arg1 ;
@end

