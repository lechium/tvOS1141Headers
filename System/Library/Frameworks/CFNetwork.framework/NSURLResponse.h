/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:10:20 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CFNetwork/CFNetwork-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSURLResponseInternal, NSURL, NSString;

@interface NSURLResponse : NSObject <NSSecureCoding, NSCopying> {

	NSURLResponseInternal* _internal;

}

@property (copy,readonly) NSURL * URL; 
@property (copy,readonly) NSString * MIMEType; 
@property (readonly) long long expectedContentLength; 
@property (copy,readonly) NSString * textEncodingName; 
@property (copy,readonly) NSString * suggestedFilename; 
+(id)getObjectKeyWithIndex:(long long)arg1 ;
+(id)_responseWithCFURLResponse:(CFURLResponseRef)arg1 ;
+(BOOL)supportsSecureCoding;
-(id)_initWithCFURLResponse:(CFURLResponseRef)arg1 ;
-(void)_setExpectedContentLength:(long long)arg1 ;
-(void)_setMIMEType:(id)arg1 ;
-(id)_lastModifiedDate;
-(BOOL)_mustRevalidate;
-(double)_freshnessLifetime;
-(id)_peerCertificateChain;
-(long long)expectedContentLength;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSURL *)URL;
-(NSString *)MIMEType;
-(double)_calculatedExpiration;
-(NSString *)textEncodingName;
-(NSString *)suggestedFilename;
-(CFURLResponseRef)_CFURLResponse;
-(id)initWithURL:(id)arg1 MIMEType:(id)arg2 expectedContentLength:(long long)arg3 textEncodingName:(id)arg4 ;
@end

