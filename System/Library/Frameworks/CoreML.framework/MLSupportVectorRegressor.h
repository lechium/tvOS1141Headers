/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:15:35 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/CoreML.framework/CoreML
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreML/MLRegressor.h>

@class MLSVREngine;

@interface MLSupportVectorRegressor : MLRegressor {

	MLSVREngine* _engine;

}

@property (retain) MLSVREngine * engine;              //@synthesize engine=_engine - In the implementation block
-(void)setEngine:(MLSVREngine *)arg1 ;
-(id)regress:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
-(id)initWithEngine:(id)arg1 interface:(id)arg2 metadata:(id)arg3 error:(id*)arg4 ;
-(MLSVREngine *)engine;
@end

