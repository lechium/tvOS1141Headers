/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:15:42 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CNQuickContactActionDelegate.h>

@protocol CNQuickActionsManagerDelegate;
@class NSMutableDictionary, NSOrderedSet, NSMutableSet, NSArray, NSMutableArray, NSDictionary, CNQuickFaceTimeAction, CNQuickActionsUsageManager, CNContact, NSString;

@interface CNQuickActionsManager : NSObject <CNQuickContactActionDelegate> {

	NSMutableDictionary* _actionsByCategories;
	NSOrderedSet* _actions;
	NSMutableSet* _requests;
	BOOL _bypassActionValidation;
	BOOL _useDuetIfAvailable;
	NSArray* _contacts;
	id<CNQuickActionsManagerDelegate> _delegate;
	NSArray* _categories;
	long long _mode;
	unsigned long long _desiredNumberOfActions;
	NSMutableArray* _updateBlocks;
	NSDictionary* _groups;
	CNQuickFaceTimeAction* _faceTimeVideoAction;
	CNQuickFaceTimeAction* _faceTimeAudioAction;
	CNQuickActionsUsageManager* _usageManager;
	NSArray* _subManagers;

}

@property (nonatomic,retain) NSMutableArray * updateBlocks;                                  //@synthesize updateBlocks=_updateBlocks - In the implementation block
@property (nonatomic,retain) NSDictionary * groups;                                          //@synthesize groups=_groups - In the implementation block
@property (nonatomic,retain) CNQuickFaceTimeAction * faceTimeVideoAction;                    //@synthesize faceTimeVideoAction=_faceTimeVideoAction - In the implementation block
@property (nonatomic,retain) CNQuickFaceTimeAction * faceTimeAudioAction;                    //@synthesize faceTimeAudioAction=_faceTimeAudioAction - In the implementation block
@property (nonatomic,retain) CNQuickActionsUsageManager * usageManager;                      //@synthesize usageManager=_usageManager - In the implementation block
@property (nonatomic,retain) NSArray * subManagers;                                          //@synthesize subManagers=_subManagers - In the implementation block
@property (nonatomic,retain) NSArray * contacts;                                             //@synthesize contacts=_contacts - In the implementation block
@property (nonatomic,readonly) CNContact * contact; 
@property (assign,nonatomic,__weak) id<CNQuickActionsManagerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSArray * categories;                                             //@synthesize categories=_categories - In the implementation block
@property (assign,nonatomic) long long mode;                                                 //@synthesize mode=_mode - In the implementation block
@property (assign,nonatomic) unsigned long long desiredNumberOfActions;                      //@synthesize desiredNumberOfActions=_desiredNumberOfActions - In the implementation block
@property (assign,nonatomic) BOOL bypassActionValidation;                                    //@synthesize bypassActionValidation=_bypassActionValidation - In the implementation block
@property (assign,nonatomic) BOOL sortsWithDuet; 
@property (assign,nonatomic) BOOL useDuetIfAvailable;                                        //@synthesize useDuetIfAvailable=_useDuetIfAvailable - In the implementation block
@property (nonatomic,readonly) NSArray * actions; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)defaultCategories;
+(id)actionsManagerForContacts:(id)arg1 ;
+(BOOL)hasActionsForContact:(id)arg1 ;
+(id)descriptorForRequiredKeys;
-(id<CNQuickActionsManagerDelegate>)delegate;
-(void)setDelegate:(id<CNQuickActionsManagerDelegate>)arg1 ;
-(void)dealloc;
-(NSArray *)actions;
-(void)_openURL:(id)arg1 ;
-(NSArray *)categories;
-(NSDictionary *)groups;
-(void)setGroups:(NSDictionary *)arg1 ;
-(void)setMode:(long long)arg1 ;
-(long long)mode;
-(NSArray *)contacts;
-(void)setContacts:(NSArray *)arg1 ;
-(void)setCategories:(NSArray *)arg1 ;
-(id)initWithContacts:(id)arg1 ;
-(void)_createGroupsForPropertyKeys:(id)arg1 ;
-(void)stopUpdatingActions;
-(CNQuickActionsUsageManager *)usageManager;
-(void)setSortsWithDuet:(BOOL)arg1 ;
-(BOOL)sortsWithDuet;
-(id)_hierarchicalActionsForCategory:(id)arg1 fromActions:(id)arg2 askDelegate:(BOOL)arg3 ;
-(BOOL)_shouldGroupActionsInCategory:(id)arg1 ;
-(BOOL)useDuetIfAvailable;
-(void)setUseDuetIfAvailable:(BOOL)arg1 ;
-(unsigned long long)desiredNumberOfActions;
-(id)_ignoredLabels;
-(id)_orderedLabels;
-(void)_addAction:(id)arg1 ;
-(id)_addActionForPropertyItem:(id)arg1 category:(id)arg2 propertyActionClass:(Class)arg3 ;
-(BOOL)bypassActionValidation;
-(void)refreshActionsAndForceSendUpdate:(BOOL)arg1 ;
-(void)_updateSingleContactActions;
-(void)_updateMultiContactActions;
-(id)_propertyItemsForKey:(id)arg1 ;
-(void)_updateActionsForPropertyItems:(id)arg1 category:(id)arg2 propertyActionClass:(Class)arg3 ;
-(void)setFaceTimeVideoAction:(CNQuickFaceTimeAction *)arg1 ;
-(void)setFaceTimeAudioAction:(CNQuickFaceTimeAction *)arg1 ;
-(void)_updateIDSActionsForPropertyItems:(id)arg1 category:(id)arg2 serviceName:(id)arg3 propertyActionClass:(Class)arg4 ;
-(NSArray *)subManagers;
-(void)_actionsUpdated;
-(void)setBypassActionValidation:(BOOL)arg1 ;
-(void)updateActionsWithBlock:(/*^block*/id)arg1 ;
-(void)setSubManagers:(NSArray *)arg1 ;
-(id)_groupedActionsFromOrderedActionsByCategories:(id)arg1 ;
-(id)_expandedActionsFromOrderedActionsByCategories:(id)arg1 totalNumberOfActions:(unsigned long long)arg2 ;
-(id)_hybridActionsFromOrderedActionsByCategories:(id)arg1 totalNumberOfActions:(unsigned long long)arg2 ;
-(void)actionPerformed:(id)arg1 ;
-(CNQuickFaceTimeAction *)faceTimeVideoAction;
-(CNQuickFaceTimeAction *)faceTimeAudioAction;
-(void)contactActionDidUpdate:(id)arg1 ;
-(void)contactAction:(id)arg1 presentViewController:(id)arg2 ;
-(void)refreshActions;
-(id)quickActions;
-(void)setDesiredNumberOfActions:(unsigned long long)arg1 ;
-(NSMutableArray *)updateBlocks;
-(void)setUpdateBlocks:(NSMutableArray *)arg1 ;
-(void)setUsageManager:(CNQuickActionsUsageManager *)arg1 ;
-(CNContact *)contact;
@end

