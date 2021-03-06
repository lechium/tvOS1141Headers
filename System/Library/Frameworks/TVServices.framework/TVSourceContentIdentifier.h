/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:20:53 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/TVServices.framework/TVServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVServices/TVContentIdentifier.h>

@class Protocol, NSString;

@interface TVSourceContentIdentifier : TVContentIdentifier {

	Protocol* _sourcePublicProtocol;

}

@property (nonatomic,copy,readonly) NSString * sourceBundleIdentifier; 
@property (nonatomic,readonly) Protocol * sourcePublicProtocol;                     //@synthesize sourcePublicProtocol=_sourcePublicProtocol - In the implementation block
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(Protocol *)sourcePublicProtocol;
-(NSString *)sourceBundleIdentifier;
-(id)initWithBundleIdentifier:(id)arg1 publicProtocol:(id)arg2 ;
-(id)initWithIdentifier:(id)arg1 container:(id)arg2 ;
@end

