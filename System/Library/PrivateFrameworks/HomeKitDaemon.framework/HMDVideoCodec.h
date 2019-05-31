/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:19:56 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/HomeKitDaemon-Structs.h>
#import <HomeKitDaemon/HMDNumberParser.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface HMDVideoCodec : HMDNumberParser <NSCopying, NSSecureCoding> {

	long long _codecType;

}

@property (nonatomic,readonly) long long codecType;              //@synthesize codecType=_codecType - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)arrayWithCodecTypes:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)description:(id)arg1 indent:(id)arg2 ;
-(id)initWithTLVData:(id)arg1 ;
-(long long)codecType;
-(id)initWithCodec:(long long)arg1 ;
@end

