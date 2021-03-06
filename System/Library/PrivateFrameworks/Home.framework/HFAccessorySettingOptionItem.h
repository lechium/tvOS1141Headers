/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:18:33 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Home/Home-Structs.h>
#import <Home/HFAccessorySettingItem.h>

@class HMAccessorySelectionSettingItem;

@interface HFAccessorySettingOptionItem : HFAccessorySettingItem {

	HMAccessorySelectionSettingItem* _optionItem;

}

@property (nonatomic,retain) HMAccessorySelectionSettingItem * optionItem;              //@synthesize optionItem=_optionItem - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)value;
-(id)homeKitObject;
-(id)_subclass_updateWithOptions:(id)arg1 ;
-(HMAccessorySelectionSettingItem *)optionItem;
-(id)initWithMediaProfileContainer:(id)arg1 setting:(id)arg2 optionItem:(id)arg3 ;
-(id)settingKeyPath;
-(void)_decorateOutcomeWithDependencies:(id)arg1 ;
-(id)toggleSelection;
-(void)setOptionItem:(HMAccessorySelectionSettingItem *)arg1 ;
@end

