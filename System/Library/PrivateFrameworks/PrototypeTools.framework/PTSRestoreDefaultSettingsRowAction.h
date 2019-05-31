/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:15:15 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/PrototypeTools.framework/PrototypeTools
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PrototypeTools/PrototypeTools-Structs.h>
#import <PrototypeTools/PTSRowAction.h>

@class NSString;

@interface PTSRestoreDefaultSettingsRowAction : PTSRowAction {

	NSString* _settingsKeyPath;

}

@property (nonatomic,copy) NSString * settingsKeyPath;              //@synthesize settingsKeyPath=_settingsKeyPath - In the implementation block
+(id)actionWithSettingsKeyPath:(id)arg1 ;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)resolveTemplatesWithIndex:(unsigned long long)arg1 ;
-(void)setSettingsKeyPath:(NSString *)arg1 ;
-(NSString *)settingsKeyPath;
@end

