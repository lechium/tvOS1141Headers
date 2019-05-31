/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:13:09 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray, UISUISecurityContext;

@interface UISUIActivityViewControllerConfiguration : NSObject <NSSecureCoding> {

	BOOL _allowsEmbedding;
	BOOL _sourceIsManaged;
	BOOL _shouldMatchOnlyUserElectedExtensions;
	BOOL _shouldExcludeiCloudAddToDriveActivity;
	BOOL _shouldExcludeiCloudSharingActivity;
	BOOL _shouldPresentAirDropSection;
	BOOL _canExcludeExtensionActivities;
	BOOL _canShowShareSheetPlugIns;
	BOOL __unitTest_disableExcludingSourceApplicationFromOpenActivities;
	NSArray* _hostActivityConfigurations;
	NSArray* _activityItemValueClassNames;
	NSArray* _activityTypesToCreateInShareService;
	UISUISecurityContext* _securityScopedURLsForMatching;
	NSArray* _activityItemValueExtensionMatchingDictionaries;
	NSArray* _includedActivityTypes;
	NSArray* _excludedActivityTypes;
	NSArray* _activityTypeOrder;
	long long _excludedActivityCategories;

}

@property (nonatomic,retain) NSArray * hostActivityConfigurations;                                              //@synthesize hostActivityConfigurations=_hostActivityConfigurations - In the implementation block
@property (nonatomic,retain) NSArray * activityItemValueClassNames;                                             //@synthesize activityItemValueClassNames=_activityItemValueClassNames - In the implementation block
@property (nonatomic,retain) NSArray * activityTypesToCreateInShareService;                                     //@synthesize activityTypesToCreateInShareService=_activityTypesToCreateInShareService - In the implementation block
@property (nonatomic,retain) UISUISecurityContext * securityScopedURLsForMatching;                              //@synthesize securityScopedURLsForMatching=_securityScopedURLsForMatching - In the implementation block
@property (nonatomic,retain) NSArray * activityItemValueExtensionMatchingDictionaries;                          //@synthesize activityItemValueExtensionMatchingDictionaries=_activityItemValueExtensionMatchingDictionaries - In the implementation block
@property (assign,nonatomic) BOOL allowsEmbedding;                                                              //@synthesize allowsEmbedding=_allowsEmbedding - In the implementation block
@property (assign,nonatomic) BOOL sourceIsManaged;                                                              //@synthesize sourceIsManaged=_sourceIsManaged - In the implementation block
@property (assign,nonatomic) BOOL shouldMatchOnlyUserElectedExtensions;                                         //@synthesize shouldMatchOnlyUserElectedExtensions=_shouldMatchOnlyUserElectedExtensions - In the implementation block
@property (assign,nonatomic) BOOL shouldExcludeiCloudAddToDriveActivity;                                        //@synthesize shouldExcludeiCloudAddToDriveActivity=_shouldExcludeiCloudAddToDriveActivity - In the implementation block
@property (assign,nonatomic) BOOL shouldExcludeiCloudSharingActivity;                                           //@synthesize shouldExcludeiCloudSharingActivity=_shouldExcludeiCloudSharingActivity - In the implementation block
@property (assign,nonatomic) BOOL shouldPresentAirDropSection;                                                  //@synthesize shouldPresentAirDropSection=_shouldPresentAirDropSection - In the implementation block
@property (assign,nonatomic) BOOL canExcludeExtensionActivities;                                                //@synthesize canExcludeExtensionActivities=_canExcludeExtensionActivities - In the implementation block
@property (assign,nonatomic) BOOL canShowShareSheetPlugIns;                                                     //@synthesize canShowShareSheetPlugIns=_canShowShareSheetPlugIns - In the implementation block
@property (nonatomic,retain) NSArray * includedActivityTypes;                                                   //@synthesize includedActivityTypes=_includedActivityTypes - In the implementation block
@property (nonatomic,retain) NSArray * excludedActivityTypes;                                                   //@synthesize excludedActivityTypes=_excludedActivityTypes - In the implementation block
@property (nonatomic,retain) NSArray * activityTypeOrder;                                                       //@synthesize activityTypeOrder=_activityTypeOrder - In the implementation block
@property (assign,nonatomic) long long excludedActivityCategories;                                              //@synthesize excludedActivityCategories=_excludedActivityCategories - In the implementation block
@property (nonatomic,readonly) BOOL _unitTest_disableExcludingSourceApplicationFromOpenActivities;              //@synthesize _unitTest_disableExcludingSourceApplicationFromOpenActivities=__unitTest_disableExcludingSourceApplicationFromOpenActivities - In the implementation block
+(BOOL)supportsSecureCoding;
+(void)_unitTest_SetDisableExcludingSourceApplicationFromOpenActivities:(BOOL)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)sourceIsManaged;
-(void)setSourceIsManaged:(BOOL)arg1 ;
-(BOOL)allowsEmbedding;
-(NSArray *)hostActivityConfigurations;
-(void)setHostActivityConfigurations:(NSArray *)arg1 ;
-(NSArray *)activityTypesToCreateInShareService;
-(void)setActivityTypesToCreateInShareService:(NSArray *)arg1 ;
-(NSArray *)activityItemValueClassNames;
-(void)setActivityItemValueClassNames:(NSArray *)arg1 ;
-(NSArray *)activityItemValueExtensionMatchingDictionaries;
-(void)setActivityItemValueExtensionMatchingDictionaries:(NSArray *)arg1 ;
-(UISUISecurityContext *)securityScopedURLsForMatching;
-(void)setSecurityScopedURLsForMatching:(UISUISecurityContext *)arg1 ;
-(void)setAllowsEmbedding:(BOOL)arg1 ;
-(BOOL)shouldMatchOnlyUserElectedExtensions;
-(void)setShouldMatchOnlyUserElectedExtensions:(BOOL)arg1 ;
-(BOOL)shouldExcludeiCloudAddToDriveActivity;
-(void)setShouldExcludeiCloudAddToDriveActivity:(BOOL)arg1 ;
-(BOOL)shouldExcludeiCloudSharingActivity;
-(void)setShouldExcludeiCloudSharingActivity:(BOOL)arg1 ;
-(BOOL)shouldPresentAirDropSection;
-(void)setShouldPresentAirDropSection:(BOOL)arg1 ;
-(BOOL)canExcludeExtensionActivities;
-(void)setCanExcludeExtensionActivities:(BOOL)arg1 ;
-(BOOL)canShowShareSheetPlugIns;
-(void)setCanShowShareSheetPlugIns:(BOOL)arg1 ;
-(NSArray *)includedActivityTypes;
-(void)setIncludedActivityTypes:(NSArray *)arg1 ;
-(NSArray *)excludedActivityTypes;
-(void)setExcludedActivityTypes:(NSArray *)arg1 ;
-(NSArray *)activityTypeOrder;
-(void)setActivityTypeOrder:(NSArray *)arg1 ;
-(long long)excludedActivityCategories;
-(void)setExcludedActivityCategories:(long long)arg1 ;
-(BOOL)_unitTest_disableExcludingSourceApplicationFromOpenActivities;
-(id)availableActivityItemValueClasses;
-(id)_contextForMatchingActivityItems:(id)arg1 activityItemValues:(id)arg2 activityItemValueClasses:(id)arg3 ;
-(id)contextForMatchingByActivityItemValueClasses;
-(id)contextForMatchingByActivityItems:(id)arg1 itemValues:(id)arg2 ;
@end
