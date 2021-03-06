/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:12:26 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreUI/CoreUI-Structs.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface CUIPSDGradientStop : NSObject <NSCoding, NSCopying> {

	double location;

}
+(void)initialize;
-(id)initWithLocation:(double)arg1 ;
-(BOOL)isColorStop;
-(BOOL)isOpacityStop;
-(BOOL)isDoubleStop;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(double)location;
-(void)setLocation:(double)arg1 ;
@end

