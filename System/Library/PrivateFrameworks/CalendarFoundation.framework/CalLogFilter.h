/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:14:51 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/CalendarFoundation.framework/CalendarFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray, NSSet;

@interface CalLogFilter : NSObject {

	int _minimumLevel;
	NSArray* _includes;
	NSArray* _excludes;
	NSArray* _includesAsRegexes;
	NSArray* _excludesAsRegexes;
	NSSet* _includesRegardlessOfLevel;

}

@property (nonatomic,retain) NSArray * includesAsRegexes;                  //@synthesize includesAsRegexes=_includesAsRegexes - In the implementation block
@property (nonatomic,retain) NSArray * excludesAsRegexes;                  //@synthesize excludesAsRegexes=_excludesAsRegexes - In the implementation block
@property (assign,nonatomic) int minimumLevel;                             //@synthesize minimumLevel=_minimumLevel - In the implementation block
@property (nonatomic,copy) NSArray * includes;                             //@synthesize includes=_includes - In the implementation block
@property (nonatomic,copy) NSArray * excludes;                             //@synthesize excludes=_excludes - In the implementation block
@property (nonatomic,copy) NSSet * includesRegardlessOfLevel;              //@synthesize includesRegardlessOfLevel=_includesRegardlessOfLevel - In the implementation block
-(id)init;
-(id)description;
-(void)setMinimumLevel:(int)arg1 ;
-(void)setIncludesRegardlessOfLevel:(NSSet *)arg1 ;
-(NSSet *)includesRegardlessOfLevel;
-(int)minimumLevel;
-(BOOL)proceedProcessingEnvelope:(id)arg1 ;
-(NSArray *)includes;
-(NSArray *)excludes;
-(NSArray *)includesAsRegexes;
-(id)generateRegexesForPatterns:(id)arg1 ;
-(void)setIncludesAsRegexes:(NSArray *)arg1 ;
-(void)setExcludesAsRegexes:(NSArray *)arg1 ;
-(void)setIncludes:(NSArray *)arg1 ;
-(void)setExcludes:(NSArray *)arg1 ;
-(NSArray *)excludesAsRegexes;
@end
