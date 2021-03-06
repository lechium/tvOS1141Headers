/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:10:43 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSSet;

@interface BKSHIDEventRouter : NSObject <NSSecureCoding> {

	long long _destination;
	NSSet* _hidEventDescriptors;

}

@property (readonly) long long destination;                           //@synthesize destination=_destination - In the implementation block
@property (retain,readonly) NSSet * hidEventDescriptors;              //@synthesize hidEventDescriptors=_hidEventDescriptors - In the implementation block
+(id)defaultSystemAppEventRouter;
+(id)defaultFocusedAppEventRouter;
+(id)routerWithDestination:(long long)arg1 ;
+(id)defaultEventRouters;
+(BOOL)supportsSecureCoding;
-(id)initWithDestination:(long long)arg1 hidEventDescriptors:(id)arg2 ;
-(NSSet *)hidEventDescriptors;
-(id)stringForDestination:(long long)arg1 ;
-(void)addHIDEventDescriptors:(id)arg1 ;
-(void)removeHIDEventDescriptors:(id)arg1 ;
-(BOOL)specifiesDescriptor:(id)arg1 ;
-(BOOL)containsDescriptor:(id)arg1 ;
-(id)dumpContents;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(long long)destination;
-(id)initWithDestination:(long long)arg1 ;
@end

