/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:15:53 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/VNSerializingInternal.h>

@class NSString, NSData;

@interface VNMPImageDescriptor : NSObject <NSSecureCoding, VNSerializingInternal> {

	long long _internalNonSerializedDescriptorId;
	float _quality;
	float _nextLeafDescriptorDistance;
	float _previousLeafDescriptorDistance;
	float _nextLeafTotalDistance;
	float _previousLeafTotalDistance;
	NSString* _externalImageId;
	long long _exifTimestamp;
	void* _colorGaborDescriptor;
	void* _sceneClassifierDescriptor;
	void* _imageRegistrationDescriptor;
	long long _previousLeafId;
	long long _nextLeafId;
	long long _nextLeafTimestampDistance;
	long long _previousLeafTimestampDistance;
	NSString* _imageFilePath;

}

@property (assign) long long previousLeafId;                                     //@synthesize previousLeafId=_previousLeafId - In the implementation block
@property (assign) long long nextLeafId;                                         //@synthesize nextLeafId=_nextLeafId - In the implementation block
@property (assign) float nextLeafDescriptorDistance;                             //@synthesize nextLeafDescriptorDistance=_nextLeafDescriptorDistance - In the implementation block
@property (assign) float previousLeafDescriptorDistance;                         //@synthesize previousLeafDescriptorDistance=_previousLeafDescriptorDistance - In the implementation block
@property (assign) long long nextLeafTimestampDistance;                          //@synthesize nextLeafTimestampDistance=_nextLeafTimestampDistance - In the implementation block
@property (assign) long long previousLeafTimestampDistance;                      //@synthesize previousLeafTimestampDistance=_previousLeafTimestampDistance - In the implementation block
@property (assign) float nextLeafTotalDistance;                                  //@synthesize nextLeafTotalDistance=_nextLeafTotalDistance - In the implementation block
@property (assign) float previousLeafTotalDistance;                              //@synthesize previousLeafTotalDistance=_previousLeafTotalDistance - In the implementation block
@property (readonly) NSData * rawColorGaborDescriptor; 
@property (readonly) NSString * imageFilePath;                                   //@synthesize imageFilePath=_imageFilePath - In the implementation block
@property (readonly) long long descriptorId;                                     //@synthesize internalNonSerializedDescriptorId=_internalNonSerializedDescriptorId - In the implementation block
@property (readonly) NSString * externalImageId;                                 //@synthesize externalImageId=_externalImageId - In the implementation block
@property (readonly) long long exifTimestamp;                                    //@synthesize exifTimestamp=_exifTimestamp - In the implementation block
@property (readonly) float quality;                                              //@synthesize quality=_quality - In the implementation block
@property (readonly) void* colorGaborDescriptor;                                 //@synthesize colorGaborDescriptor=_colorGaborDescriptor - In the implementation block
@property (readonly) void* sceneClassifierDescriptor;                            //@synthesize sceneClassifierDescriptor=_sceneClassifierDescriptor - In the implementation block
@property (readonly) void* imageRegistrationDescriptor;                          //@synthesize imageRegistrationDescriptor=_imageRegistrationDescriptor - In the implementation block
@property (nonatomic,readonly) unsigned long long serializedLength; 
+(BOOL)supportsSecureCoding;
+(unsigned long long)currentVersion;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(float)quality;
-(id)initWithImageData:(id)arg1 andQualityCriteria:(id)arg2 context:(id)arg3 error:(id*)arg4 ;
-(long long)exifTimestamp;
-(long long)descriptorId;
-(NSString *)imageFilePath;
-(NSString *)externalImageId;
-(id)initWithRawColorGaborDescriptor:(id)arg1 ;
-(id)initWithState:(id)arg1 startingAtByteOffset:(unsigned long long)arg2 error:(id*)arg3 ;
-(unsigned long long)serializedLength;
-(float)distanceFromDescriptor:(id)arg1 ;
-(unsigned long long)serializeStateIntoData:(id)arg1 startingAtByteOffset:(unsigned long long)arg2 error:(id*)arg3 ;
-(void)setPreviousLeafId:(long long)arg1 ;
-(void)setNextLeafId:(long long)arg1 ;
-(void)setPreviousLeafDescriptorDistance:(float)arg1 ;
-(void)setNextLeafDescriptorDistance:(float)arg1 ;
-(void)setPreviousLeafTimestampDistance:(long long)arg1 ;
-(void)setNextLeafTimestampDistance:(long long)arg1 ;
-(void)setPreviousLeafTotalDistance:(float)arg1 ;
-(void)setNextLeafTotalDistance:(float)arg1 ;
-(BOOL)computeDescriptorForImageData:(id)arg1 context:(id)arg2 error:(id*)arg3 ;
-(BOOL)computeConvnetDescriptorForImageData:(id)arg1 context:(id)arg2 error:(id*)arg3 ;
-(BOOL)computeRegistrationFeaturesForImageData:(id)arg1 context:(id)arg2 error:(id*)arg3 ;
-(id)initWithImageData:(id)arg1 context:(id)arg2 error:(id*)arg3 ;
-(BOOL)computeQualityForImageData:(id)arg1 andQualityCriteria:(id)arg2 context:(id)arg3 error:(id*)arg4 ;
-(NSData *)rawColorGaborDescriptor;
-(void*)colorGaborDescriptor;
-(float)computeFinalDescriptorBasedDistanceForColorDistance:(float)arg1 andSceneClassifierDistance:(float)arg2 ;
-(id)initWithImageData:(id)arg1 andCustomQualityScore:(float)arg2 context:(id)arg3 error:(id*)arg4 ;
-(void*)sceneClassifierDescriptor;
-(void*)imageRegistrationDescriptor;
-(long long)previousLeafId;
-(long long)nextLeafId;
-(float)nextLeafDescriptorDistance;
-(float)previousLeafDescriptorDistance;
-(long long)nextLeafTimestampDistance;
-(long long)previousLeafTimestampDistance;
-(float)nextLeafTotalDistance;
-(float)previousLeafTotalDistance;
@end

