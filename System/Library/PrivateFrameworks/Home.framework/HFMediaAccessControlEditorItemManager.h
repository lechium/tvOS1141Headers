/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:18:38 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Home/HFItemManager.h>

@class HFMediaAccessControlEditorItemModule;

@interface HFMediaAccessControlEditorItemManager : HFItemManager {

	HFMediaAccessControlEditorItemModule* _accessControlEditorItemModule;

}

@property (nonatomic,readonly) HFMediaAccessControlEditorItemModule * accessControlEditorItemModule;              //@synthesize accessControlEditorItemModule=_accessControlEditorItemModule - In the implementation block
-(id)_buildItemProvidersForHome:(id)arg1 ;
-(id)_buildSectionsWithDisplayedItems:(id)arg1 ;
-(id)initWithDelegate:(id)arg1 sourceItem:(id)arg2 ;
-(id)initWithDelegate:(id)arg1 home:(id)arg2 ;
-(HFMediaAccessControlEditorItemModule *)accessControlEditorItemModule;
@end
