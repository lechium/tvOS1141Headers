/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:19:52 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/CoreThemeDefinition.framework/CoreThemeDefinition
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreThemeDefinition/TDRenditionSpec.h>

@class NSString;

@interface TDMicaRenditionSpec : TDRenditionSpec

@property (nonatomic,copy) NSString * layerPath; 
-(id)debugDescription;
-(id)createCSIRepresentationWithCompression:(BOOL)arg1 colorSpaceID:(unsigned long long)arg2 document:(id)arg3 ;
-(void)_logError:(id)arg1 ;
-(void)copyAttributesInto:(id)arg1 ;
-(id)copyDataFromAttributes;
-(void)setAttributesFromCopyData:(id)arg1 ;
-(void)_logWarning:(id)arg1 ;
-(void)_logExtra:(id)arg1 ;
@end

