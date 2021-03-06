/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:15:11 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/PLPTPConversionSupport.h>

@class PHMediaFormatConversionManager, PFMediaCapabilities, NSString;

@interface PLPTPLegacyConversionSupport : NSObject <PLPTPConversionSupport> {

	PHMediaFormatConversionManager* _mediaFormatConversionManager;
	PFMediaCapabilities* _peerMediaCapabilities;

}

@property (nonatomic,readonly) BOOL supportsTranscodeChoice; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(BOOL)supportsTranscodeChoice;
-(id)conversionResultForAsset:(id)arg1 isVideo:(BOOL)arg2 isRender:(BOOL)arg3 ;
@end

