/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:14:02 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <IDSFoundation/IDSFoundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface IDSURI : NSObject <NSCopying, NSSecureCoding> {

	NSString* _prefixedURI;

}

@property (nonatomic,retain) NSString * prefixedURI;                  //@synthesize prefixedURI=_prefixedURI - In the implementation block
@property (nonatomic,readonly) NSString * unprefixedURI; 
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithPrefixedURI:(id)arg1 ;
-(BOOL)isEqualToURI:(id)arg1 ;
-(id)initWithUnprefixedURI:(id)arg1 ;
-(void)setPrefixedURI:(NSString *)arg1 ;
-(NSString *)unprefixedURI;
-(NSString *)prefixedURI;
@end

