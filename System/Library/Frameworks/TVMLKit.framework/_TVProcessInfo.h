/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:20:52 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/TVMLKit.framework/TVMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <TVMLKit/TVMLKit-Structs.h>
@interface _TVProcessInfo : NSObject {

	BOOL _hasPrivateEntitlement;
	BOOL _hasiTunesAPIEntitlement;
	SecTaskRef _currentTask;

}

@property (assign,nonatomic) SecTaskRef currentTask;                      //@synthesize currentTask=_currentTask - In the implementation block
@property (nonatomic,readonly) BOOL hasPrivateEntitlement;                //@synthesize hasPrivateEntitlement=_hasPrivateEntitlement - In the implementation block
@property (nonatomic,readonly) BOOL hasiTunesAPIEntitlement;              //@synthesize hasiTunesAPIEntitlement=_hasiTunesAPIEntitlement - In the implementation block
+(id)currentProcessInfo;
-(id)valueForEntitlement:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(BOOL)hasiTunesAPIEntitlement;
-(BOOL)hasPrivateEntitlement;
-(BOOL)boolValueForEntitlement:(id)arg1 ;
-(BOOL)valueForEntitlement:(id)arg1 containsObject:(id)arg2 ;
-(SecTaskRef)currentTask;
-(void)setCurrentTask:(SecTaskRef)arg1 ;
@end
