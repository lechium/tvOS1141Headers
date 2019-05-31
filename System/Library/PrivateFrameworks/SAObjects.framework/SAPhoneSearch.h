/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:14:24 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SADomainCommand.h>

@class NSArray, NSDate, NSNumber;

@interface SAPhoneSearch : SADomainCommand

@property (nonatomic,copy) NSArray * contacts; 
@property (nonatomic,copy) NSDate * end; 
@property (nonatomic,copy) NSNumber * faceTime; 
@property (nonatomic,copy) NSNumber * faceTimeAudio; 
@property (nonatomic,copy) NSNumber * isNew; 
@property (nonatomic,copy) NSNumber * last; 
@property (nonatomic,copy) NSNumber * missed; 
@property (nonatomic,copy) NSNumber * outgoing; 
@property (nonatomic,copy) NSDate * start; 
@property (nonatomic,copy) NSNumber * voiceMail; 
+(id)search;
+(id)searchWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(NSDate *)start;
-(void)setStart:(NSDate *)arg1 ;
-(NSDate *)end;
-(void)setEnd:(NSDate *)arg1 ;
-(void)setLast:(NSNumber *)arg1 ;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(BOOL)mutatingCommand;
-(NSNumber *)faceTime;
-(void)setFaceTime:(NSNumber *)arg1 ;
-(NSNumber *)faceTimeAudio;
-(void)setFaceTimeAudio:(NSNumber *)arg1 ;
-(NSArray *)contacts;
-(void)setContacts:(NSArray *)arg1 ;
-(NSNumber *)isNew;
-(void)setIsNew:(NSNumber *)arg1 ;
-(NSNumber *)missed;
-(void)setMissed:(NSNumber *)arg1 ;
-(NSNumber *)outgoing;
-(void)setOutgoing:(NSNumber *)arg1 ;
-(NSNumber *)voiceMail;
-(void)setVoiceMail:(NSNumber *)arg1 ;
-(NSNumber *)last;
@end

