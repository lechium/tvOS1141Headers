/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:20:38 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /usr/lib/libacmobileshim.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSNumber, NSDictionary, NSError;


@protocol ACMTicketVerificationResponse <NSObject>
@property (retain,readonly) NSNumber * personDSID; 
@property (retain) NSDictionary * rawResponseData; 
@property (retain) NSError * error; 
@property (retain) id userInfo; 
@required
-(NSError *)error;
-(void)setError:(id)arg1;
-(id)userInfo;
-(void)setUserInfo:(id)arg1;
-(NSDictionary *)rawResponseData;
-(void)setRawResponseData:(id)arg1;
-(NSNumber *)personDSID;

@end

