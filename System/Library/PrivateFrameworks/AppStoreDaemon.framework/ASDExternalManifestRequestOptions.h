/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:17:35 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppStoreDaemon/AppStoreDaemon-Structs.h>
#import <AppStoreDaemon/ASDRequestOptions.h>

@class NSURL;

@interface ASDExternalManifestRequestOptions : ASDRequestOptions {

	BOOL _shouldHideUserPrompts;
	NSURL* _manifestURL;

}

@property (nonatomic,readonly) NSURL * manifestURL;                   //@synthesize manifestURL=_manifestURL - In the implementation block
@property (assign,nonatomic) BOOL shouldHideUserPrompts;              //@synthesize shouldHideUserPrompts=_shouldHideUserPrompts - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithURL:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setShouldHideUserPrompts:(BOOL)arg1 ;
-(BOOL)shouldHideUserPrompts;
-(NSURL *)manifestURL;
@end

