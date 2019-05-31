/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:13:25 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface UIContentSizeCategoryPreference : NSObject {

	NSString* _preferredContentSizeCategory;

}

@property (nonatomic,retain) NSString * preferredContentSizeCategory;              //@synthesize preferredContentSizeCategory=_preferredContentSizeCategory - In the implementation block
+(id)system;
+(void)_resetSystemPreferenceOverride;
+(void)_overrideSystemPreferenceToContentSizeCategory:(id)arg1 ;
+(void)_overrideSystemPreferenceToContentSizeCategory:(id)arg1 forBlock:(/*^block*/id)arg2 ;
-(id)init;
-(NSString *)preferredContentSizeCategory;
-(void)checkForChanges;
-(id)initWithContentSizeCategory:(id)arg1 ;
-(void)setPreferredContentSizeCategory:(NSString *)arg1 ;
@end

