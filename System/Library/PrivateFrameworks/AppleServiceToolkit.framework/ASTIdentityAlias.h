/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:19:37 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/AppleServiceToolkit.framework/AppleServiceToolkit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppleServiceToolkit/AppleServiceToolkit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDictionary;

@interface ASTIdentityAlias : NSObject <NSCopying, NSSecureCoding> {

	NSDictionary* _dictionary;

}

@property (nonatomic,retain) NSDictionary * dictionary;              //@synthesize dictionary=_dictionary - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)identityAliasWithSerialNumber:(id)arg1 ;
+(id)identityAliasWithMainLogicBoardSerialNumber:(id)arg1 ;
+(id)identityAliasWithChipId:(id)arg1 uniqueChipId:(id)arg2 ;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSDictionary *)dictionary;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setDictionary:(NSDictionary *)arg1 ;
-(id)initWithSerialNumber:(id)arg1 ;
-(id)initWithMainLogicBoardSerialNumber:(id)arg1 ;
-(id)initWithChipId:(id)arg1 uniqueChipId:(id)arg2 ;
@end

