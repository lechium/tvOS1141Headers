/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:11:26 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreMotion/CoreMotion-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface CMLogItem : NSObject <NSSecureCoding, NSCopying> {

	id _internalLogItem;

}

@property (nonatomic,readonly) double timestamp; 
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(double)timestamp;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithTimestamp:(double)arg1 ;
@end

