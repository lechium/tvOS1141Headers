/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:17:23 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SceneKit/SceneKit-Structs.h>
#import <SceneKit/SCNAction.h>

@interface SCNActionPlaySound : SCNAction {

	SCNCPlaySound* _mycaction;

}
+(BOOL)supportsSecureCoding;
+(id)playAudioSource:(id)arg1 waitForCompletion:(BOOL)arg2 ;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)parameters;
-(id)reversedAction;
-(void)_setupDuration;
@end

