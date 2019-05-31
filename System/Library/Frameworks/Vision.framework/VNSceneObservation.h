/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:15:52 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Vision/Vision-Structs.h>
#import <Vision/VNObservation.h>

@class NSArray, NSString;

@interface VNSceneObservation : VNObservation {

	NSArray* _sceneprints;
	NSString* _sceneprintVersion;

}

@property (nonatomic,copy) NSArray * sceneprints;                              //@synthesize sceneprints=_sceneprints - In the implementation block
@property (nonatomic,copy,readonly) NSString * sceneprintVersion;              //@synthesize sceneprintVersion=_sceneprintVersion - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)observationWithSceneprints:(id)arg1 ;
+(id)sceneprintCurrentVersion;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSArray *)sceneprints;
-(id)initWithSceneprints:(id)arg1 ;
-(void)setSceneprints:(NSArray *)arg1 ;
-(NSString *)sceneprintVersion;
@end

