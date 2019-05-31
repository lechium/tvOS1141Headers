/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:11:43 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <AVFoundation/AVMetadataObject.h>

@class AVMetadataMachineReadableCodeObjectInternal, CIBarcodeDescriptor, NSArray, NSString;

@interface AVMetadataMachineReadableCodeObject : AVMetadataObject {

	AVMetadataMachineReadableCodeObjectInternal* _internal;

}

@property (readonly) CIBarcodeDescriptor * descriptor; 
@property (readonly) NSArray * corners; 
@property (readonly) NSString * stringValue; 
+(id)machineReadableCodeObjectWithFigEmbeddedCaptureDeviceMachineReadableCodeDictionary:(id)arg1 input:(id)arg2 ;
-(id)initDerivedMetadataObjectFromMetadataObject:(id)arg1 withTransform:(CGAffineTransform)arg2 isVideoMirrored:(BOOL)arg3 rollAdjustment:(double)arg4 ;
-(id)basicDescriptor;
-(id)initWithFigEmbeddedCaptureDeviceMachineReadableCodeDictionary:(id)arg1 input:(id)arg2 ;
-(void)dealloc;
-(id)description;
-(NSString *)stringValue;
-(CIBarcodeDescriptor *)descriptor;
-(NSArray *)corners;
@end
