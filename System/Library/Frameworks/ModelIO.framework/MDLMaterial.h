/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:14:19 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/ModelIO.framework/ModelIO
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ModelIO/ModelIO-Structs.h>
#import <libobjc.A.dylib/MDLNamed.h>
#import <libobjc.A.dylib/NSFastEnumeration.h>

@class NSMutableArray, MDLScatteringFunction, NSString;

@interface MDLMaterial : NSObject <MDLNamed, NSFastEnumeration> {

	NSMutableArray* _userProperties;
	NSMutableArray* _builtinProperties;
	MDLScatteringFunction* _scatteringFunction;
	NSString* _name;
	MDLMaterial* _baseMaterial;
	unsigned long long _materialFace;

}

@property (nonatomic,readonly) BidirectionalScatteringDistributionFunction* bsdf; 
@property (nonatomic,retain,readonly) MDLScatteringFunction * scatteringFunction; 
@property (nonatomic,copy) NSString * name;                                                    //@synthesize name=_name - In the implementation block
@property (nonatomic,retain) MDLMaterial * baseMaterial;                                       //@synthesize baseMaterial=_baseMaterial - In the implementation block
@property (nonatomic,readonly) unsigned long long count; 
@property (assign,nonatomic) unsigned long long materialFace;                                  //@synthesize materialFace=_materialFace - In the implementation block
-(id)propertyNamed:(id)arg1 ;
-(id)init;
-(unsigned long long)count;
-(id)objectAtIndexedSubscript:(unsigned long long)arg1 ;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_MD5*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(id)objectForKeyedSubscript:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(void)removeAllProperties;
-(void)resolveTexturesWithResolver:(id)arg1 ;
-(void)setScatteringFunction:(MDLScatteringFunction *)arg1 ;
-(MDLMaterial *)baseMaterial;
-(id)propertiesWithSemantic:(unsigned long long)arg1 ;
-(void)loadTexturesUsingResolver:(id)arg1 ;
-(id)initWithName:(id)arg1 physicallyPlausibleBSDF:(PhysicallyPlausibleDistribution*)arg2 ;
-(void)conformToMatProperties;
-(BidirectionalScatteringDistributionFunction*)bsdf;
-(void)setBaseMaterial:(MDLMaterial *)arg1 ;
-(void)removeProperty:(id)arg1 ;
-(void)setProperty:(id)arg1 ;
-(id)initWithName:(id)arg1 scatteringFunction:(id)arg2 ;
-(void)setMaterialFace:(unsigned long long)arg1 ;
-(MDLScatteringFunction *)scatteringFunction;
-(unsigned long long)materialFace;
-(id)propertyWithSemantic:(unsigned long long)arg1 ;
@end

