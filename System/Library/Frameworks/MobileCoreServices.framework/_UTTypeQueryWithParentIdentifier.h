/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:10:39 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/MobileCoreServices.framework/MobileCoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileCoreServices/_UTTypeQuery.h>

@class NSString;

@interface _UTTypeQueryWithParentIdentifier : _UTTypeQuery {

	NSString* _parentIdentifier;

}
+(BOOL)supportsSecureCoding;
-(BOOL)_canResolveLocallyWithoutMappingDatabase;
-(BOOL)canIdentifierHaveChildren;
-(id)initWithParentIdentifier:(id)arg1 ;
-(void)_enumerateWithXPCConnection:(id)arg1 block:(/*^block*/id)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)debugDescription;
@end
