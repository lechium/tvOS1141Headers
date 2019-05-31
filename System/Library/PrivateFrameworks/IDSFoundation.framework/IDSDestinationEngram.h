/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:14:01 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <IDSFoundation/IDSFoundation-Structs.h>
#import <IDSFoundation/IDSDestination.h>

@class ENGroup;

@interface IDSDestinationEngram : IDSDestination {

	ENGroup* _underlyingGroup;

}

@property (nonatomic,retain,readonly) ENGroup * underlyingGroup;              //@synthesize underlyingGroup=_underlyingGroup - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)destinationURIs;
-(id)initWithENGroup:(id)arg1 ;
-(ENGroup *)underlyingGroup;
-(id)groupID;
@end
