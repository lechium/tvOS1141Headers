/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:17:10 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/PKPaymentValidating.h>

@class PKPaymentRequest, NSString;

@interface PKPaymentRequestValidator : NSObject <PKPaymentValidating> {

	PKPaymentRequest* _request;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)validatorWithObject:(id)arg1 ;
+(Class)validatedClass;
-(BOOL)isValidWithError:(id*)arg1 ;
-(id)initWithPaymentRequest:(id)arg1 ;
-(BOOL)_checkTotal:(id)arg1 error:(id*)arg2 ;
@end

