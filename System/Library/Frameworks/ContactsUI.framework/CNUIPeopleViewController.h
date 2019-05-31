/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:15:48 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewController.h>
#import <libobjc.A.dylib/CNContactListBannerViewDelegate.h>

@class NSArray, CNContactFormatter, CNUIContactsEnvironment, CNContactListBannerView, CNContactStore, NSString;

@interface CNUIPeopleViewController : UITableViewController <CNContactListBannerViewDelegate> {

	NSArray* _people;
	CNContactFormatter* _formatter;
	CNUIContactsEnvironment* _environment;
	CNContactListBannerView* _meBanner;
	CNContactStore* _contactStore;

}

@property (nonatomic,retain) CNContactFormatter * formatter;                     //@synthesize formatter=_formatter - In the implementation block
@property (nonatomic,retain) CNUIContactsEnvironment * environment;              //@synthesize environment=_environment - In the implementation block
@property (nonatomic,retain) CNContactListBannerView * meBanner;                 //@synthesize meBanner=_meBanner - In the implementation block
@property (nonatomic,retain) CNContactStore * contactStore;                      //@synthesize contactStore=_contactStore - In the implementation block
@property (nonatomic,retain) NSArray * people;                                   //@synthesize people=_people - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(CNContactFormatter *)formatter;
-(void)setFormatter:(CNContactFormatter *)arg1 ;
-(void)setEnvironment:(CNUIContactsEnvironment *)arg1 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(CNUIContactsEnvironment *)environment;
-(void)viewDidLoad;
-(void)bannerView:(id)arg1 wasSelectedToPresentMeContact:(id)arg2 ;
-(void)bannerViewWasSelectedToPresentPeoplePicker:(id)arg1 ;
-(id)initWithEnvironment:(id)arg1 contactStore:(id)arg2 ;
-(void)setMeBanner:(CNContactListBannerView *)arg1 ;
-(CNContactListBannerView *)meBanner;
-(void)showContact:(id)arg1 animated:(BOOL)arg2 ;
-(CNContactStore *)contactStore;
-(void)setContactStore:(CNContactStore *)arg1 ;
-(NSArray *)people;
-(void)setPeople:(NSArray *)arg1 ;
-(id)descriptorForRequiredKeys;
@end

