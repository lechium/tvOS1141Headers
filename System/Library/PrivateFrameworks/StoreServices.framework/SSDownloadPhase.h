/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:13:54 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreServices/StoreServices-Structs.h>
#import <libobjc.A.dylib/SSXPCCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class SSOperationProgress, NSString;

@interface SSDownloadPhase : NSObject <SSXPCCoding, NSCopying> {

	SSOperationProgress* _operationProgress;

}

@property (readonly) SSOperationProgress * operationProgress; 
@property (readonly) long long phaseType; 
@property (readonly) long long progressValue; 
@property (readonly) long long totalProgressValue; 
@property (readonly) long long progressUnits; 
@property (readonly) double estimatedSecondsRemaining; 
@property (readonly) float progressChangeRate; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithXPCEncoding:(id)arg1 ;
-(id)copyXPCEncoding;
-(id)init;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(double)estimatedSecondsRemaining;
-(SSOperationProgress *)operationProgress;
-(id)initWithOperationProgress:(id)arg1 ;
-(long long)phaseType;
-(long long)progressUnits;
-(float)progressChangeRate;
-(long long)progressValue;
-(long long)totalProgressValue;
@end

