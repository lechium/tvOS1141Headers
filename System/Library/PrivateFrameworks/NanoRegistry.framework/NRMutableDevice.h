/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:15:41 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/NanoRegistry.framework/NanoRegistry
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NanoRegistry/NanoRegistry-Structs.h>
#import <NanoRegistry/NRMutableStateBase.h>
#import <libobjc.A.dylib/NRMutableStateParentDelegate.h>
#import <libobjc.A.dylib/NSFastEnumeration.h>

@class NSMutableDictionary, NSUUID;

@interface NRMutableDevice : NRMutableStateBase <NRMutableStateParentDelegate, NSFastEnumeration> {

	NSMutableDictionary* _properties;
	NSMutableDictionary* _childMap;

}

@property (nonatomic,retain) NSMutableDictionary * properties;              //@synthesize properties=_properties - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * childMap;                //@synthesize childMap=_childMap - In the implementation block
@property (nonatomic,readonly) NSUUID * pairingID; 
@property (nonatomic,readonly) BOOL isPaired; 
@property (nonatomic,readonly) BOOL isActive; 
@property (nonatomic,readonly) BOOL isArchived; 
@property (nonatomic,readonly) BOOL migratable; 
+(BOOL)supportsSecureCoding;
+(id)enclosedClassTypes;
+(id)diffFrom:(id)arg1 to:(id)arg2 ;
+(id)diffsToActivate:(BOOL)arg1 withDate:(id)arg2 ;
+(id)diffsToPair:(BOOL)arg1 withDate:(id)arg2 ;
+(id)diffsToSetStatusCode:(unsigned long long)arg1 andCompatibilityState:(unsigned short)arg2 ;
+(id)diffsToClearStatusCodeAndCompatibilityState;
-(id)init;
-(unsigned long long)count;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_NR1*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)objectForKeyedSubscript:(id)arg1 ;
-(void)setObject:(id)arg1 forKeyedSubscript:(id)arg2 ;
-(BOOL)isActive;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setProperties:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)properties;
-(id)propertyForName:(id)arg1 ;
-(id)applyDiff:(id)arg1 upOnly:(BOOL)arg2 notifyParent:(BOOL)arg3 unconditional:(BOOL)arg4 ;
-(void)child:(id)arg1 didApplyDiff:(id)arg2 ;
-(NSMutableDictionary *)childMap;
-(void)setChildMap:(NSMutableDictionary *)arg1 ;
-(void)removePropertyForName:(id)arg1 ;
-(id)allPropertyNames;
-(BOOL)migratable;
-(BOOL)isArchived;
-(BOOL)supportsCapability:(id)arg1 ;
-(NSUUID *)pairingID;
-(BOOL)isPaired;
-(void)setProperty:(id)arg1 forName:(id)arg2 ;
@end
