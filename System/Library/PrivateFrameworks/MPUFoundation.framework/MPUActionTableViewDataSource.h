/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:17:46 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/MPUFoundation.framework/MPUFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MPUActionTableViewDataSource <UITableViewDataSource>
@required
+(id)actionCellConfigurationClasses;
+(id)actionCellConfigurationClassesForLocation:(unsigned long long)arg1;
-(void)reloadActionRowsAnimated:(BOOL)arg1;
-(Class)cellConfigurationForIndexPath:(id)arg1;
-(long long)numberOfTopActionRowsInTableView:(id)arg1;
-(long long)numberOfBottomActionRowsInTableView:(id)arg1;
-(BOOL)shouldShowActionCellConfiguration:(Class)arg1;
-(long long)numberOfActionRowsInTableView:(id)arg1;

@end

