/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:20:53 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/TVServices.framework/TVServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVServices/TVServices-Structs.h>
#import <TVServices/TVJSContentIdentifier.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface TVContentIdentifier : NSObject <TVJSContentIdentifier, NSCopying, NSSecureCoding> {

	NSString* _identifier;
	TVContentIdentifier* _container;

}

@property (copy,readonly) NSString * identifier; 
@property (copy,readonly) TVContentIdentifier * container; 
@property (nonatomic,copy,readonly) NSString * identifier;                        //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy,readonly) TVContentIdentifier * container;              //@synthesize container=_container - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)_dictionaryFromIdentifier:(id)arg1 ;
+(id)_identifierFromDictionary:(id)arg1 ;
+(id)contentIdentifierWithContentIdentifier:(id)arg1 ;
+(id)_contentIdentifierWithFlattenedRepresentation:(id)arg1 rootContainer:(id)arg2 ;
-(OpaqueJSValueRef)jsCopyObjectWithContext:(OpaqueJSContextRef)arg1 withException:(const OpaqueJSValue*)arg2 ;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)identifier;
-(id)copyWithZone:(NSZone*)arg1 ;
-(TVContentIdentifier *)container;
-(BOOL)isTVContentIdentifier__;
-(id)_flattenedRepresentation;
-(id)initWithIdentifier:(id)arg1 container:(id)arg2 ;
@end
