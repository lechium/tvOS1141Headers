/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:14:55 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudPhotoLibrary/CloudPhotoLibrary-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class CPLResourceIdentity, NSString;

@interface CPLResource : NSObject <NSSecureCoding, NSCopying> {

	unsigned long long _backgroundDownloadTaskIdentifier;
	BOOL _generateDerivative;
	BOOL _canGenerateDerivative;
	CPLResourceIdentity* _identity;
	NSString* _itemIdentifier;
	unsigned long long _resourceType;

}

@property (nonatomic,retain) CPLResourceIdentity * identity;               //@synthesize identity=_identity - In the implementation block
@property (nonatomic,copy) NSString * itemIdentifier;                      //@synthesize itemIdentifier=_itemIdentifier - In the implementation block
@property (assign,nonatomic) unsigned long long resourceType;              //@synthesize resourceType=_resourceType - In the implementation block
@property (assign,nonatomic) BOOL generateDerivative;                      //@synthesize generateDerivative=_generateDerivative - In the implementation block
@property (assign,nonatomic) BOOL canGenerateDerivative;                   //@synthesize canGenerateDerivative=_canGenerateDerivative - In the implementation block
+(id)imageDerivativeTypes;
+(id)videoDerivativeTypes;
+(BOOL)supportsSecureCoding;
+(id)normalizedResourcesFromResources:(id)arg1 ;
+(BOOL)cplShouldIgnorePropertyForEquality:(id)arg1 ;
+(BOOL)hasPriorityBoostForResourceType:(unsigned long long)arg1 ;
+(id)descriptionForResourceType:(unsigned long long)arg1 ;
+(unsigned long long)maxPixelSizeForResourceType:(unsigned long long)arg1 ;
+(float)derivativeGenerationThreshold;
+(id)shortDescriptionForResourceType:(unsigned long long)arg1 ;
-(BOOL)deleteAfterUpload;
-(void)setDeleteAfterUpload:(BOOL)arg1 ;
-(unsigned long long)resourceType;
-(void)setResourceType:(unsigned long long)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(CPLResourceIdentity *)identity;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setIdentity:(CPLResourceIdentity *)arg1 ;
-(id)bestFileNameForResource;
-(unsigned long long)_backgroundDownloadTaskIdentifier;
-(void)_setBackgroundDownloadTaskIdentifier:(unsigned long long)arg1 ;
-(BOOL)shouldCopy;
-(BOOL)shouldApplyDataProtection;
-(unsigned long long)estimatedResourceSize;
-(id)initWithResourceIdentity:(id)arg1 itemIdentifier:(id)arg2 ;
-(BOOL)generateDerivative;
-(void)setGenerateDerivative:(BOOL)arg1 ;
-(BOOL)canGenerateDerivative;
-(NSString *)itemIdentifier;
-(void)setCanGenerateDerivative:(BOOL)arg1 ;
-(BOOL)isTrackedForUpload;
-(void)setItemIdentifier:(NSString *)arg1 ;
-(id)initWithResourceIdentity:(id)arg1 itemIdentifier:(id)arg2 resourceType:(unsigned long long)arg3 ;
@end

