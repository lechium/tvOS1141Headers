/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:19:04 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/Frameworks/PhotosGraph.framework/Frameworks/MediaMiningKit.framework/MediaMiningKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface CLSInformant : NSObject {

	NSString* _uuid;

}

@property (nonatomic,copy,readonly) NSString * uuid;              //@synthesize uuid=_uuid - In the implementation block
+(id)identifier;
+(id)familyIdentifier;
+(id)supportedOutputClueKeys;
+(id)classIdentifier;
+(id)informantDependenciesIdentifiers;
-(id)init;
-(NSString *)uuid;
-(id)uniqueIdentifier;
-(id)gatherCluesOperationForInvestigation:(id)arg1 ;
-(id)_gatherCluesForInvestigation:(id)arg1 ;
@end

