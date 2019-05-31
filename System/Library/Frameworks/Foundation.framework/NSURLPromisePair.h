/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:10:32 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSURL;

@interface NSURLPromisePair : NSObject <NSSecureCoding> {

	NSURL* _logicalURL;
	NSURL* _physicalURL;

}

@property (copy,readonly) NSURL * URL; 
@property (readonly) NSURL * logicalURL;               //@synthesize logicalURL=_logicalURL - In the implementation block
@property (readonly) NSURL * physicalURL;              //@synthesize physicalURL=_physicalURL - In the implementation block
+(id)pairWithLogicalURL:(id)arg1 physicalURL:(id)arg2 ;
+(id)pairWithURL:(id)arg1 ;
+(BOOL)supportsSecureCoding;
-(NSURL *)logicalURL;
-(NSURL *)physicalURL;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(NSURL *)URL;
@end
