/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:15:52 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Vision/Vision-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSMapTable;

@interface VNPersonsModelFaceModel : NSObject <NSSecureCoding> {

	NSMapTable* _serialNumberToPersonUniqueIdentifierMapTable;
	shared_ptr<vision::mod::FaceIDModel>* _faceIDModel;
	int _maximumElementsPerID;

}
+(BOOL)supportsSecureCoding;
+(id)modelBuiltFromConfiguration:(id)arg1 personUniqueIdentifierToSerialNumberMapping:(id)arg2 serialNumberToFaceprintsMapping:(id)arg3 canceller:(id)arg4 error:(id*)arg5 ;
+(shared_ptr<vision::mod::ImageDescriptorBufferFloat32>*)_concatenateFaceprintImageDescriptorBuffer:(shared_ptr<vision::mod::ImageDescriptorBufferFloat32>*)arg1 withFaceprints:(id)arg2 forIdentityWithSerialNumber:(int)arg3 faceprintLabels:(vector<int, std::__1::allocator<int> >*)arg4 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)personCount;
-(id)personUniqueIdentifiers;
-(unsigned long long)faceCountForPersonWithUniqueIdentifier:(id)arg1 ;
-(id)faceCountsForPersonsWithUniqueIdentifiers:(id)arg1 ;
-(id)faceCountsForAllPersons;
-(id)personPredictionsForFace:(id)arg1 withDescriptor:(const ImageDescriptorBufferFloat32*)arg2 limit:(unsigned long long)arg3 canceller:(id)arg4 error:(id*)arg5 ;
-(id)initWithFaceIDModel:(shared_ptr<vision::mod::FaceIDModel>*)arg1 maximumElementsPerID:(unsigned long long)arg2 personUniqueIdentifierToSerialNumberMapping:(id)arg3 ;
-(id)_personPredictionsForFace:(id)arg1 withDescriptor:(const ImageDescriptorBufferFloat32*)arg2 limit:(unsigned long long)arg3 faceIDCanceller:(CVMLCanceller*)arg4 error:(id*)arg5 ;
@end
