/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:10:21 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CFNetwork/CFNetwork-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSURLAuthenticationChallengeInternal, NSURLProtectionSpace, NSURLCredential, NSURLResponse, NSError;

@interface NSURLAuthenticationChallenge : NSObject <NSSecureCoding> {

	NSURLAuthenticationChallengeInternal* _internal;

}

@property (copy,readonly) NSURLProtectionSpace * protectionSpace; 
@property (copy,readonly) NSURLCredential * proposedCredential; 
@property (readonly) long long previousFailureCount; 
@property (copy,readonly) NSURLResponse * failureResponse; 
@property (copy,readonly) NSError * error; 
@property (retain,readonly) id<NSURLAuthenticationChallengeSender> sender; 
+(id)_authenticationChallengeForCFAuthChallenge:(CFURLAuthChallengeRef)arg1 sender:(id)arg2 ;
+(id)_createAuthenticationChallengeForCFAuthChallenge:(CFURLAuthChallengeRef)arg1 sender:(id)arg2 ;
+(BOOL)supportsSecureCoding;
-(CFURLAuthChallengeRef)_createCFAuthChallenge;
-(id)_initWithListOfProtectionSpaces:(id)arg1 CurrentProtectionSpace:(id)arg2 proposedCredential:(id)arg3 previousFailureCount:(long long)arg4 failureResponse:(id)arg5 error:(id)arg6 sender:(id)arg7 ;
-(id)_initWithCFAuthChallenge:(CFURLAuthChallengeRef)arg1 sender:(id)arg2 ;
-(BOOL)_isPasswordBasedChallenge;
-(id)initWithAuthenticationChallenge:(id)arg1 sender:(id)arg2 ;
-(id)initWithProtectionSpace:(id)arg1 proposedCredential:(id)arg2 previousFailureCount:(long long)arg3 failureResponse:(id)arg4 error:(id)arg5 sender:(id)arg6 ;
-(NSError *)error;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id<NSURLAuthenticationChallengeSender>)sender;
-(long long)previousFailureCount;
-(NSURLProtectionSpace *)protectionSpace;
-(void)setSender:(id<NSURLAuthenticationChallengeSender>)arg1 ;
-(NSURLCredential *)proposedCredential;
-(NSURLResponse *)failureResponse;
@end

