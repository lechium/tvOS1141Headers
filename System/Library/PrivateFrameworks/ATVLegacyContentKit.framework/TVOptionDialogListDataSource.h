/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:20:59 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/ATVLegacyContentKit.framework/ATVLegacyContentKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewDataSource.h>

@class NSArray, NSString;

@interface TVOptionDialogListDataSource : NSObject <UITableViewDataSource> {

	NSArray* _menuItems;

}

@property (nonatomic,copy,readonly) NSArray * menuItems;              //@synthesize menuItems=_menuItems - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(NSArray *)menuItems;
-(id)initWithMenuItems:(id)arg1 listView:(id)arg2 ;
-(id)menuItemAtIndexPath:(id)arg1 ;
@end

