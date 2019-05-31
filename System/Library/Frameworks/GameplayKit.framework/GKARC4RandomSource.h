/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:18:54 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/GameplayKit.framework/GameplayKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GameplayKit/GameplayKit-Structs.h>
#import <GameplayKit/GKRandomSource.h>

@class NSData;

@interface GKARC4RandomSource : GKRandomSource {

	Arc4State* _state;
	NSData* _seed;

}

@property (nonatomic,copy) NSData * seed; 
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSData *)seed;
-(unsigned long long)nextIntWithUpperBound:(unsigned long long)arg1 ;
-(id)initWithSeed:(id)arg1 ;
-(void)setSeed:(NSData *)arg1 ;
-(unsigned long long)nextBits:(int)arg1 ;
-(long long)nextInt;
-(float)nextUniform;
-(BOOL)nextBool;
-(void)dropValuesWithCount:(unsigned long long)arg1 ;
@end
