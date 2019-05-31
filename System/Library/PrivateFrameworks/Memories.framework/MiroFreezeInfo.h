/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:20:13 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Memories/Memories-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData;

@interface MiroFreezeInfo : NSObject <NSSecureCoding, NSCopying> {

	BOOL _isFreeze;
	BOOL _isRemoved;
	BOOL _isAdded;

}

@property (nonatomic,readonly) BOOL isFreeze;                            //@synthesize isFreeze=_isFreeze - In the implementation block
@property (nonatomic,readonly) BOOL isRemoved;                           //@synthesize isRemoved=_isRemoved - In the implementation block
@property (nonatomic,readonly) BOOL isAdded;                             //@synthesize isAdded=_isAdded - In the implementation block
@property (nonatomic,readonly) NSData * dataRepresentation; 
+(BOOL)supportsSecureCoding;
+(id)freezeInfoWithData:(id)arg1 ;
-(NSData *)dataRepresentation;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithData:(id)arg1 ;
-(BOOL)isRemoved;
-(BOOL)isAdded;
-(BOOL)isFreeze;
@end

