/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:15:51 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Vision/Vision-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSIndexSet;

@interface VNPersonsModeReadOptions : NSObject <NSCopying, NSSecureCoding> {

	NSIndexSet* _acceptableVersions;

}

@property (nonatomic,copy) NSIndexSet * acceptableVersions;              //@synthesize acceptableVersions=_acceptableVersions - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSIndexSet *)acceptableVersions;
-(void)setAcceptableVersions:(NSIndexSet *)arg1 ;
@end

