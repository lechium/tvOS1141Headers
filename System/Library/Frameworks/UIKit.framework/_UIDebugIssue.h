/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:13:09 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/_UIDebugIssueReporting.h>

@class NSString, _UIDebugIssueReport, NSArray;

@interface _UIDebugIssue : NSObject <_UIDebugIssueReporting> {

	NSString* _description;
	NSString* _prefix;
	_UIDebugIssueReport* _subissueReport;

}

@property (getter=_subissueReport,nonatomic,readonly) _UIDebugIssueReport * subissueReport;              //@synthesize subissueReport=_subissueReport - In the implementation block
@property (nonatomic,copy) NSString * prefix;                                                            //@synthesize prefix=_prefix - In the implementation block
@property (nonatomic,copy) NSString * description;                                                       //@synthesize description=_description - In the implementation block
@property (nonatomic,copy,readonly) NSArray * subissues; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * debugDescription; 
+(id)issueWithDescription:(id)arg1 ;
+(id)issueWithFormat:(id)arg1 ;
-(id)init;
-(NSString *)description;
-(void)addIssue:(id)arg1 ;
-(void)setPrefix:(NSString *)arg1 ;
-(NSArray *)subissues;
-(void)setDescription:(NSString *)arg1 ;
-(NSString *)prefix;
-(id)_subissueReport;
@end

