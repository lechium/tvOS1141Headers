/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:21:15 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/TVContentPartnerKitUI.framework/TVContentPartnerKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, TVCKDataType;

@interface TVCKBookmarkKey : NSObject <NSSecureCoding> {

	NSString* _identifier;
	TVCKDataType* _mediaType;

}

@property (nonatomic,readonly) NSString * identifier;                 //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) TVCKDataType * mediaType;              //@synthesize mediaType=_mediaType - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(NSString *)identifier;
-(TVCKDataType *)mediaType;
-(id)initWithIdentifier:(id)arg1 mediaType:(id)arg2 ;
@end

