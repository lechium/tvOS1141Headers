/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:17:41 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlaybackCore/MediaPlaybackCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class ICRadioContentReference;

@interface MPCModelRadioContentReference : NSObject <NSCopying, NSSecureCoding> {

	ICRadioContentReference* _ICRadioContentReference;

}

@property (nonatomic,readonly) ICRadioContentReference * ICRadioContentReference;              //@synthesize ICRadioContentReference=_ICRadioContentReference - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)referenceWithMPModelObject:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(ICRadioContentReference *)ICRadioContentReference;
-(id)initWithICRadioContentReference:(id)arg1 ;
@end
