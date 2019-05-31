/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:14:32 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class SAUIAppPunchOut, NSNumber, SACalendar, NSString;

@interface SAMovieShowtime : AceObject <SAAceSerializable>

@property (nonatomic,retain) SAUIAppPunchOut * buyTicketsPunchout; 
@property (nonatomic,copy) NSNumber * childTicketQuantity; 
@property (assign,nonatomic) BOOL is3d; 
@property (assign,nonatomic) BOOL isImax; 
@property (nonatomic,copy) NSNumber * regularTicketQuantity; 
@property (nonatomic,copy) NSNumber * seniorTicketQuantity; 
@property (nonatomic,retain) SACalendar * showtime; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)showtime;
+(id)showtimeWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)is3d;
-(void)setIs3d:(BOOL)arg1 ;
-(SACalendar *)showtime;
-(SAUIAppPunchOut *)buyTicketsPunchout;
-(void)setBuyTicketsPunchout:(SAUIAppPunchOut *)arg1 ;
-(NSNumber *)childTicketQuantity;
-(void)setChildTicketQuantity:(NSNumber *)arg1 ;
-(BOOL)isImax;
-(void)setIsImax:(BOOL)arg1 ;
-(NSNumber *)regularTicketQuantity;
-(void)setRegularTicketQuantity:(NSNumber *)arg1 ;
-(NSNumber *)seniorTicketQuantity;
-(void)setSeniorTicketQuantity:(NSNumber *)arg1 ;
-(void)setShowtime:(SACalendar *)arg1 ;
@end

