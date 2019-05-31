/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:16:46 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AXMediaUtilities/AXMEvaluationNode.h>

@class NSURL;

@interface AXMModelDetectorNode : AXMEvaluationNode {

	NSURL* _modelURL;

}

@property (nonatomic,retain) NSURL * modelURL;              //@synthesize modelURL=_modelURL - In the implementation block
+(id)title;
+(BOOL)supportsSecureCoding;
+(BOOL)isSupported;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSURL *)modelURL;
-(void)nodeInitialize;
-(BOOL)requiresVisionFramework;
-(BOOL)preloadModelIfNeeded:(id*)arg1 ;
-(void)setModelURL:(NSURL *)arg1 ;
-(void)evaluate:(id)arg1 ;
@end

