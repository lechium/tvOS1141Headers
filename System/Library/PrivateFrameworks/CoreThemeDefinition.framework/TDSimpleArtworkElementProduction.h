/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:19:52 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/CoreThemeDefinition.framework/CoreThemeDefinition
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreThemeDefinition/TDElementProduction.h>

@class TDTemplateRenderingMode;

@interface TDSimpleArtworkElementProduction : TDElementProduction

@property (nonatomic,retain) TDTemplateRenderingMode * templateRenderingMode; 
@property (assign,nonatomic) BOOL optOutOfThinning; 
@property (assign,nonatomic) BOOL isFlippable; 
@property (assign,nonatomic) BOOL preservesVectorRepresentation; 
@property (assign,nonatomic) BOOL recognitionImage; 
-(id)associatedFileModificationDateWithDocument:(id)arg1 ;
-(void)deleteRenditionsInDocument:(id)arg1 shouldDeleteAssetFiles:(BOOL)arg2 ;
@end

