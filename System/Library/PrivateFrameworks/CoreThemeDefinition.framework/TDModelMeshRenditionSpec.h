/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:19:52 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/CoreThemeDefinition.framework/CoreThemeDefinition
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreThemeDefinition/TDModelObjectRenditionSpec.h>

@class NSOrderedSet, MDLMesh;

@interface TDModelMeshRenditionSpec : TDModelObjectRenditionSpec

@property (nonatomic,retain) NSOrderedSet * submeshes; 
@property (nonatomic,retain) MDLMesh * mesh; 
+(id)fetchRequest;
-(id)createCSIRepresentationWithCompression:(BOOL)arg1 colorSpaceID:(unsigned long long)arg2 document:(id)arg3 ;
@end

