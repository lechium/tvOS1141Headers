/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:18:54 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/GameplayKit.framework/GameplayKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GameplayKit/GameplayKit-Structs.h>
#import <libobjc.A.dylib/GKRandom.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface GKRandomSource : NSObject <GKRandom, NSSecureCoding, NSCopying>
+(BOOL)supportsSecureCoding;
+(id)sharedRandom;
+(id)systemRandom;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)nextIntWithUpperBound:(unsigned long long)arg1 ;
-(long long)nextInt;
-(float)nextUniform;
-(BOOL)nextBool;
-(id)arrayByShufflingObjectsInArray:(id)arg1 ;
@end

