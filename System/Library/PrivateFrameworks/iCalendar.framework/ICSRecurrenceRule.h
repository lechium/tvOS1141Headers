/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:14:50 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/iCalendar.framework/iCalendar
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/ICSWriting.h>

@class NSMutableDictionary, ICSDateValue, NSNumber, NSArray;

@interface ICSRecurrenceRule : NSObject <NSSecureCoding, ICSWriting> {

	int _freq;
	NSMutableDictionary* _parameters;

}

@property (assign,nonatomic) int freq; 
@property (nonatomic,retain) ICSDateValue * until; 
@property (assign,nonatomic) NSNumber * count; 
@property (assign,nonatomic) NSNumber * interval; 
@property (nonatomic,retain) NSArray * bysecond; 
@property (nonatomic,retain) NSArray * byminute; 
@property (nonatomic,retain) NSArray * byhour; 
@property (nonatomic,retain) NSArray * byday; 
@property (nonatomic,retain) NSArray * bymonthday; 
@property (nonatomic,retain) NSArray * byyearday; 
@property (nonatomic,retain) NSArray * byweekno; 
@property (nonatomic,retain) NSArray * bymonth; 
@property (nonatomic,retain) NSArray * bysetpos; 
@property (assign,nonatomic) NSNumber * wkst; 
+(BOOL)supportsSecureCoding;
+(id)recurrenceRuleFromICSCString:(const char*)arg1 withTokenizer:(id)arg2 ;
+(id)recurrenceRuleFromICSString:(id)arg1 ;
-(NSNumber *)count;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setCount:(NSNumber *)arg1 ;
-(void)setInterval:(NSNumber *)arg1 ;
-(NSNumber *)interval;
-(id)propertiesToIncludeForChecksumVersion:(int)arg1 ;
-(id)propertiesThatIfPresentExcludeThisComponentFromChecksummingForVersion:(int)arg1 ;
-(id)propertiesToObscure;
-(void)ICSStringWithOptions:(unsigned long long)arg1 appendingToString:(id)arg2 ;
-(id)parametersToIncludeForChecksumVersion:(int)arg1 ;
-(id)parametersToObscure;
-(BOOL)shouldObscureValue;
-(void)removeParameterValueForName:(id)arg1 ;
-(void)_ICSStringWithOptions:(unsigned long long)arg1 appendingToString:(id)arg2 ;
-(NSArray *)byhour;
-(NSArray *)byminute;
-(NSArray *)bysecond;
-(void)cleanUpForStartDate:(id)arg1 ;
-(id)occurrencesForStartDate:(id)arg1 fromDate:(id)arg2 toDate:(id)arg3 inTimeZone:(id)arg4 ;
-(void)setFreq:(int)arg1 ;
-(void)setBysecond:(NSArray *)arg1 ;
-(void)setByminute:(NSArray *)arg1 ;
-(void)setByhour:(NSArray *)arg1 ;
-(id)initWithFrequency:(int)arg1 ;
-(void)setWkst:(NSNumber *)arg1 ;
-(void)setByday:(NSArray *)arg1 ;
-(void)setBymonth:(NSArray *)arg1 ;
-(void)setBymonthday:(NSArray *)arg1 ;
-(void)setByweekno:(NSArray *)arg1 ;
-(void)setByyearday:(NSArray *)arg1 ;
-(void)setBysetpos:(NSArray *)arg1 ;
-(NSNumber *)wkst;
-(NSArray *)byday;
-(NSArray *)bymonth;
-(NSArray *)bymonthday;
-(NSArray *)byweekno;
-(NSArray *)byyearday;
-(NSArray *)bysetpos;
-(id)parameterValueForName:(id)arg1 ;
-(void)setParameterValue:(id)arg1 forName:(id)arg2 ;
-(ICSDateValue *)until;
-(void)setUntil:(ICSDateValue *)arg1 ;
-(id)ICSStringWithOptions:(unsigned long long)arg1 ;
-(int)freq;
@end

