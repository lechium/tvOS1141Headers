/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:21:17 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/TVHomeSharingKit.framework/TVHomeSharingKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVHomeSharingKit/TVHomeSharingKit-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface TVHKMediaEntityIdentifier : NSObject <NSSecureCoding, NSCopying> {

	unsigned long long _protocol;

}

@property (assign,nonatomic) unsigned long long protocol;              //@synthesize protocol=_protocol - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)mediaEntityIdentifierWithStringRepresentation:(id)arg1 ;
+(id)mediaEntityIdentifierWithProtocol:(unsigned long long)arg1 persistentID:(unsigned long long)arg2 ;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)protocol;
-(id)initWithProtocol:(unsigned long long)arg1 ;
-(id)stringRepresentation;
-(void)setProtocol:(unsigned long long)arg1 ;
@end

