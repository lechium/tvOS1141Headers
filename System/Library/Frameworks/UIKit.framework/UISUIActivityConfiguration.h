/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:13:20 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSUUID, NSString, UISUIActivityImageConfiguration, UIImage;

@interface UISUIActivityConfiguration : NSObject <NSSecureCoding> {

	BOOL _activitySupportsPromiseURLs;
	BOOL _appIsDocumentTypeOwner;
	NSUUID* _activityUUID;
	long long _activityCategory;
	NSString* _activityType;
	NSString* _fallbackActivityType;
	long long _defaultSortGroup;
	unsigned long long _indexInApplicationDefinedActivities;
	NSString* _overrideTitle;
	NSString* _defaultActivityTitle;
	NSString* _positionBeforeActivityType;
	NSString* _activityClassName;
	long long _encodingType;
	UISUIActivityImageConfiguration* _activityImageConfiguration;
	UISUIActivityImageConfiguration* _activitySettingsImageConfiguration;
	CGSize _preferredThumbnailSize;

}

@property (nonatomic,retain) NSString * activityClassName;                                                      //@synthesize activityClassName=_activityClassName - In the implementation block
@property (assign,nonatomic) long long encodingType;                                                            //@synthesize encodingType=_encodingType - In the implementation block
@property (nonatomic,retain) UISUIActivityImageConfiguration * activityImageConfiguration;                      //@synthesize activityImageConfiguration=_activityImageConfiguration - In the implementation block
@property (nonatomic,retain) UISUIActivityImageConfiguration * activitySettingsImageConfiguration;              //@synthesize activitySettingsImageConfiguration=_activitySettingsImageConfiguration - In the implementation block
@property (nonatomic,retain) NSString * overrideTitle;                                                          //@synthesize overrideTitle=_overrideTitle - In the implementation block
@property (nonatomic,readonly) NSUUID * activityUUID;                                                           //@synthesize activityUUID=_activityUUID - In the implementation block
@property (nonatomic,readonly) long long activityCategory;                                                      //@synthesize activityCategory=_activityCategory - In the implementation block
@property (nonatomic,readonly) UIImage * activityImage; 
@property (nonatomic,readonly) UIImage * settingsImage; 
@property (nonatomic,readonly) NSString * activityTitle; 
@property (nonatomic,readonly) NSString * activityType;                                                         //@synthesize activityType=_activityType - In the implementation block
@property (nonatomic,readonly) NSString * fallbackActivityType;                                                 //@synthesize fallbackActivityType=_fallbackActivityType - In the implementation block
@property (nonatomic,readonly) CGSize preferredThumbnailSize;                                                   //@synthesize preferredThumbnailSize=_preferredThumbnailSize - In the implementation block
@property (nonatomic,readonly) BOOL activitySupportsPromiseURLs;                                                //@synthesize activitySupportsPromiseURLs=_activitySupportsPromiseURLs - In the implementation block
@property (nonatomic,readonly) long long defaultSortGroup;                                                      //@synthesize defaultSortGroup=_defaultSortGroup - In the implementation block
@property (nonatomic,readonly) BOOL appIsDocumentTypeOwner;                                                     //@synthesize appIsDocumentTypeOwner=_appIsDocumentTypeOwner - In the implementation block
@property (nonatomic,readonly) unsigned long long indexInApplicationDefinedActivities;                          //@synthesize indexInApplicationDefinedActivities=_indexInApplicationDefinedActivities - In the implementation block
@property (nonatomic,readonly) NSString * defaultActivityTitle;                                                 //@synthesize defaultActivityTitle=_defaultActivityTitle - In the implementation block
@property (nonatomic,readonly) NSString * positionBeforeActivityType;                                           //@synthesize positionBeforeActivityType=_positionBeforeActivityType - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)configurationForActivity:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)_init;
-(long long)activityCategory;
-(NSString *)activityType;
-(NSString *)activityTitle;
-(NSUUID *)activityUUID;
-(BOOL)activitySupportsPromiseURLs;
-(UIImage *)activityImage;
-(id)initWithActivity:(id)arg1 encodingType:(long long)arg2 ;
-(void)_collectPropertiesFromAttributesOfUnderlyingActivity:(id)arg1 ;
-(void)_decodeBasicPropertiesWithCoder:(id)arg1 ;
-(void)_decodeForEncodingByClassNameWithCoder:(id)arg1 ;
-(void)_decodeForEncodingByPropertiesWithCoder:(id)arg1 ;
-(void)_encodeBasicPropertiesWithCoder:(id)arg1 ;
-(void)_encodeByClassNameWithCoder:(id)arg1 ;
-(void)_encodeByPropertiesWithCoder:(id)arg1 ;
-(long long)encodingType;
-(BOOL)appIsDocumentTypeOwner;
-(NSString *)overrideTitle;
-(NSString *)activityClassName;
-(UISUIActivityImageConfiguration *)activityImageConfiguration;
-(NSString *)fallbackActivityType;
-(UISUIActivityImageConfiguration *)activitySettingsImageConfiguration;
-(NSString *)positionBeforeActivityType;
-(long long)defaultSortGroup;
-(unsigned long long)indexInApplicationDefinedActivities;
-(void)_validateProperties;
-(void)updateConfigurationWithOverrideTitle:(id)arg1 ;
-(UIImage *)settingsImage;
-(CGSize)preferredThumbnailSize;
-(void)setOverrideTitle:(NSString *)arg1 ;
-(NSString *)defaultActivityTitle;
-(void)setActivityClassName:(NSString *)arg1 ;
-(void)setEncodingType:(long long)arg1 ;
-(void)setActivityImageConfiguration:(UISUIActivityImageConfiguration *)arg1 ;
-(void)setActivitySettingsImageConfiguration:(UISUIActivityImageConfiguration *)arg1 ;
@end

