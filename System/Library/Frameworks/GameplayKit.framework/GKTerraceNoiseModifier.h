/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:18:55 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/GameplayKit.framework/GameplayKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GameplayKit/GKNoiseModifier.h>

@interface GKTerraceNoiseModifier : GKNoiseModifier {

	double* _controlPoints;
	int _count;
	BOOL _inverted;

}
-(id)init;
-(void)dealloc;
-(double)valueAt:;
-(id)cloneModule;
-(int)requiredInputModuleCount;
-(id)initWithPeakInputValues:(id)arg1 terracesInverted:(BOOL)arg2 ;
-(id)initWithInputModuleCount:(unsigned long long)arg1 ;
@end
