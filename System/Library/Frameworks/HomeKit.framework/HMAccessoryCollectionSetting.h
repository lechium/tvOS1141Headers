/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:18:21 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKit/HomeKit-Structs.h>
#import <HomeKit/HMAccessorySetting.h>
#import <libobjc.A.dylib/NSFastEnumeration.h>

@class NSSet;

@interface HMAccessoryCollectionSetting : HMAccessorySetting <NSFastEnumeration>

@property (copy,readonly) NSSet * itemValueClasses; 
+(id)itemValueClassesForKeyPath:(id)arg1 ;
+(void)setItemValueClasses:(id)arg1 forKeyPath:(id)arg2 ;
+(void)setItemValueClass:(Class)arg1 forKeyPath:(id)arg2 ;
-(id)initWithInternal:(id)arg1 ;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_HM2*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(id)value;
-(void)_setting:(id)arg1 didAddConstraint:(id)arg2 ;
-(void)_setting:(id)arg1 didRemoveConstraint:(id)arg2 ;
-(id)initWithKey:(id)arg1 properties:(unsigned long long)arg2 value:(id)arg3 ;
-(void)setItemValueClasses:(NSSet *)arg1 ;
-(NSSet *)itemValueClasses;
-(void)replaceItem:(id)arg1 withItem:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(Class)valueClass;
-(void)addItem:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)removeItem:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setItemValueClass:(Class)arg1 ;
-(void)replaceItems:(id)arg1 withItems:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)updateValue:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
@end
