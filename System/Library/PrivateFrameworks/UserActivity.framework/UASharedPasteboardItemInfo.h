/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:19:26 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/UserActivity.framework/UserActivity
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UserActivity/UserActivity-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSDictionary;

@interface UASharedPasteboardItemInfo : NSObject <NSSecureCoding, NSCopying> {

	NSDictionary* _types;

}

@property (copy) NSDictionary * types;              //@synthesize types=_types - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(NSDictionary *)types;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setTypes:(NSDictionary *)arg1 ;
@end

