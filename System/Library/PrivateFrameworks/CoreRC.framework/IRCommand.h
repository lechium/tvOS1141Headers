/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:21:09 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/CoreRC.framework/CoreRC
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreRC/CoreRC-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class IRProtocol;

@interface IRCommand : NSObject <NSSecureCoding, NSCopying> {

	BOOL _isRepeat;
	IRProtocol* _protocol;
	unsigned long long _payload;
	unsigned long long _timestamp;
	unsigned long long* _sequence;
	unsigned long long _sequenceCount;

}

@property (nonatomic,readonly) unsigned long long* sequence;                  //@synthesize sequence=_sequence - In the implementation block
@property (nonatomic,readonly) unsigned long long sequenceCount;              //@synthesize sequenceCount=_sequenceCount - In the implementation block
@property (nonatomic,readonly) IRProtocol * protocol;                         //@synthesize protocol=_protocol - In the implementation block
@property (nonatomic,readonly) unsigned long long payload;                    //@synthesize payload=_payload - In the implementation block
@property (nonatomic,readonly) BOOL isRepeat;                                 //@synthesize isRepeat=_isRepeat - In the implementation block
@property (assign,nonatomic) unsigned long long timestamp;                    //@synthesize timestamp=_timestamp - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)commandWithProtocol:(id)arg1 payload:(unsigned long long)arg2 repeat:(BOOL)arg3 ;
-(unsigned long long*)sequence;
-(unsigned long long)sequenceCount;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(unsigned long long)timestamp;
-(unsigned long long)payload;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(IRProtocol *)protocol;
-(BOOL)isRepeat;
-(id)initWithProtocol:(id)arg1 payload:(unsigned long long)arg2 repeat:(BOOL)arg3 ;
-(BOOL)setSequence:(unsigned long long*)arg1 withCount:(unsigned long long)arg2 ;
@end
