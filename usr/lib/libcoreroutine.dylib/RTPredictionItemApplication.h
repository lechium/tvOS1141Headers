/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:20:44 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /usr/lib/libcoreroutine.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libcoreroutine.dylib/libcoreroutine.dylib-Structs.h>
#import <libcoreroutine.dylib/RTPredictionItem.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface RTPredictionItemApplication : RTPredictionItem <NSCopying> {

	NSString* _bundleId;

}

@property (nonatomic,copy,readonly) NSString * bundleId;              //@synthesize bundleId=_bundleId - In the implementation block
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)bundleId;
-(id)initWithConfidence:(double)arg1 bundleId:(id)arg2 ;
@end

