/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:10:39 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/MobileCoreServices.framework/MobileCoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDictionary, NSURL;

@interface _LSOpenConfiguration : NSObject <NSSecureCoding> {

	BOOL _ignoreOpenStrategy;
	NSDictionary* _frontBoardOptions;
	NSURL* _referrerURL;

}

@property (nonatomic,copy) NSDictionary * frontBoardOptions;              //@synthesize frontBoardOptions=_frontBoardOptions - In the implementation block
@property (assign,nonatomic) BOOL ignoreOpenStrategy;                     //@synthesize ignoreOpenStrategy=_ignoreOpenStrategy - In the implementation block
@property (nonatomic,copy) NSURL * referrerURL;                           //@synthesize referrerURL=_referrerURL - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSURL *)referrerURL;
-(void)setReferrerURL:(NSURL *)arg1 ;
-(BOOL)ignoreOpenStrategy;
-(NSDictionary *)frontBoardOptions;
-(void)setFrontBoardOptions:(NSDictionary *)arg1 ;
-(void)setIgnoreOpenStrategy:(BOOL)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
@end
