/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:17:04 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/CoreRoutine.framework/CoreRoutine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreRoutine/CoreRoutine-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSUUID;

@interface RTMicroLocation : NSObject <NSSecureCoding, NSCopying> {

	NSUUID* _identifier;
	double _probability;

}

@property (nonatomic,retain) NSUUID * identifier;              //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic) double probability;               //@synthesize probability=_probability - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSUUID *)identifier;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setIdentifier:(NSUUID *)arg1 ;
-(BOOL)isEqualToMicroLocation:(id)arg1 ;
-(id)initWithIdentifier:(id)arg1 probability:(double)arg2 ;
-(double)probability;
-(void)setProbability:(double)arg1 ;
@end

