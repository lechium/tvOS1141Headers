/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:15:31 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/CVML.framework/CVML
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CVML/CVMLRequest.h>

@class NSError, NSArray;

@interface CVMLAlignFaceBBoxPrivateRequest : CVMLRequest {

	NSError* _initializationError;
	NSArray* _inputFaces;

}
-(BOOL)internalProcessWithHandler:(id)arg1 error:(id*)arg2 ;
-(void)internalDetermineFacesToProcessFrom:(id)arg1 outputFacesThatNeedNoProcessing:(id)arg2 outputFacesThatNeedProcessing:(id)arg3 ;
-(id)initWithName:(id)arg1 options:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
@end
