/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:13:42 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CoreDuet/CoreDuet-Structs.h>
@class NSString, NSMutableDictionary;

@interface _CDPerfMetricFamily : NSObject {

	char _region_path[31];
	NSString* _name;
	NSMutableDictionary* _perfMetrics;
	cdpm_shared_memory_region_s* _sharedMemoryRegion;

}

@property (readonly) NSString * name;                                              //@synthesize name=_name - In the implementation block
@property (readonly) NSMutableDictionary * perfMetrics;                            //@synthesize perfMetrics=_perfMetrics - In the implementation block
@property (readonly) cdpm_shared_memory_region_s* sharedMemoryRegion;              //@synthesize sharedMemoryRegion=_sharedMemoryRegion - In the implementation block
@property (nonatomic,readonly) NSString * bundleIdentifier; 
@property (nonatomic,readonly) NSString * process; 
@property (nonatomic,readonly) NSString * identifier; 
+(id)regionPathForIdentifier:(id)arg1 signingIdentifier:(id)arg2 ;
+(id)perfMetricFamilyWithRegionPath:(id)arg1 name:(id)arg2 ;
+(id)defaultPerfMetricFamily;
+(id)allPerfMetricFamilies;
-(NSString *)process;
-(id)description;
-(NSString *)name;
-(NSString *)identifier;
-(NSString *)bundleIdentifier;
-(id)perfMetricWithName:(id)arg1 userInfo:(id)arg2 ;
-(cdpm_shared_memory_region_s*)sharedMemoryRegion;
-(id)initWithRegionPath:(id)arg1 name:(id)arg2 ;
-(NSMutableDictionary *)perfMetrics;
-(id)allPerfMetrics;
@end

