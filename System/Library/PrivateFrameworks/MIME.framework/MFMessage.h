/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:16:43 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/MIME.framework/MIME
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MIME/MIME-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class MFMessageStore, NSString, NSArray, MFMimePart, NSURL;

@interface MFMessage : NSObject <NSCopying> {

	MFMessageStore* _store;
	unsigned _preferredEncoding;
	NSString* _senderAddressComment;
	unsigned _dateSentInterval;
	unsigned _dateReceivedInterval;
	unsigned long long _generationNumber;
	NSString* _subject;
	NSArray* _to;
	NSArray* _cc;
	NSArray* _bcc;
	NSArray* _sender;
	NSString* _contentType;
	long long _messageIDHeaderHash;
	long long _conversationID;
	long long _listIDHash;
	NSString* _summary;
	NSString* _externalID;
	MFMimePart* _parentPart;
	NSURL* _messageURL;
	NSString* _cachedMessageIDHeader;
	unsigned _calculatedAttachmentInfo : 1;
	unsigned short _numberOfAttachments;

}

@property (nonatomic,retain) MFMimePart * parentPart;              //@synthesize parentPart=_parentPart - In the implementation block
+(id)messageWithRFC822Data:(id)arg1 ;
+(Class)dataMessageStoreToUse;
+(id)messageWithRFC822Data:(id)arg1 withParentPart:(id)arg2 ;
+(id)messageWithRFC822Data:(id)arg1 withParentPart:(id)arg2 generateMessageIDHash:(BOOL)arg3 ;
+(void)setMessageClassForStore:(id)arg1 ;
-(id)messageBody;
-(unsigned long long)messageSize;
-(id)bodyData;
-(void)setTo:(id)arg1 ;
-(id)messageID;
-(id)to;
-(id)summary;
-(id)init;
-(void)dealloc;
-(id)path;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setSender:(id)arg1 ;
-(unsigned)uid;
-(void)setSubject:(id)arg1 ;
-(id)subject;
-(void)setNumberOfAttachments:(unsigned)arg1 ;
-(id)externalID;
-(void)setExternalID:(id)arg1 ;
-(id)senders;
-(id)dateSent;
-(id)persistentID;
-(void)setContentType:(id)arg1 ;
-(void)setParentPart:(MFMimePart *)arg1 ;
-(id)messageDataIsComplete:(BOOL*)arg1 downloadIfNecessary:(BOOL)arg2 ;
-(BOOL)_doesDateAppearToBeSane:(id)arg1 ;
-(id)_copyDateFromReceivedHeadersInHeaders:(id)arg1 ;
-(id)_copyDateFromDateHeaderInHeaders:(id)arg1 ;
-(void)_setDateReceivedFromHeaders:(id)arg1 ;
-(void)_setDateSentFromHeaders:(id)arg1 ;
-(id)uniqueArray:(id)arg1 withStore:(id)arg2 ;
-(long long)_messageIDHeaderHashIvar;
-(id)bodyDataIsComplete:(BOOL*)arg1 isPartial:(BOOL*)arg2 ;
-(id)bodyDataIsComplete:(BOOL*)arg1 isPartial:(BOOL*)arg2 downloadIfNecessary:(BOOL)arg3 ;
-(id)headerDataDownloadIfNecessary:(BOOL)arg1 ;
-(void)_calculateAttachmentInfoFromBody:(id)arg1 ;
-(void)setNumberOfAttachments:(unsigned)arg1 isSigned:(BOOL)arg2 isEncrypted:(BOOL)arg3 ;
-(BOOL)calculatedNumberOfAttachments;
-(id)subjectIfCached;
-(BOOL)needsDateReceived;
-(id)bodyDataIsComplete:(BOOL*)arg1 ;
-(id)dataForMimePart:(id)arg1 inRange:(NSRange)arg2 isComplete:(BOOL*)arg3 ;
-(BOOL)fetchDataForMimePart:(id)arg1 inRange:(NSRange)arg2 withConsumer:(id)arg3 isComplete:(BOOL*)arg4 downloadIfNecessary:(BOOL)arg5 ;
-(void)deleteBodyData;
-(id)defaultAlternativeInPart:(id)arg1 ;
-(BOOL)canBeTriaged;
-(id)additionalHeadersForReply;
-(id)additionalHeadersForForward;
-(BOOL)isMessageContentsLocallyAvailable;
-(unsigned)preferredEncoding;
-(void)setPreferredEncoding:(unsigned)arg1 ;
-(void)calculateAttachmentInfoFromBody:(id)arg1 ;
-(double)dateReceivedAsTimeIntervalSince1970;
-(double)dateSentAsTimeIntervalSince1970;
-(id)senderAddressComment;
-(id)messageStore;
-(id)messageBodyIfAvailable;
-(BOOL)messageData:(id*)arg1 messageSize:(unsigned long long*)arg2 isComplete:(BOOL*)arg3 downloadIfNecessary:(BOOL)arg4 ;
-(id)messageDataHolder;
-(BOOL)messageDataHolder:(id*)arg1 messageSize:(unsigned long long*)arg2 isComplete:(BOOL*)arg3 downloadIfNecessary:(BOOL)arg4 ;
-(id)headersIfAvailable;
-(id)attachmentStorageLocation;
-(long long)conversationID;
-(long long)listIDHash;
-(void)setDateSentTimeIntervalSince1970:(double)arg1 ;
-(id)cc;
-(void)setCc:(id)arg1 ;
-(id)bcc;
-(void)setBcc:(id)arg1 ;
-(long long)messageIDHash;
-(void)setMessageIDHash:(long long)arg1 ;
-(void)loadCachedHeaderValuesFromHeaders:(id)arg1 ;
-(id)dataPathForMimePart:(id)arg1 ;
-(id)preferredEmailAddressToReplyWith;
-(void)setMessageData:(id)arg1 isPartial:(BOOL)arg2 ;
-(id)dataConsumerForMimePart:(id)arg1 ;
-(BOOL)isLibraryMessage;
-(void)setMessageStore:(id)arg1 ;
-(unsigned long long)generationNumber;
-(MFMimePart *)parentPart;
-(id)dataForMimePart:(id)arg1 inRange:(NSRange)arg2 isComplete:(BOOL*)arg3 downloadIfNecessary:(BOOL)arg4 didDownload:(BOOL*)arg5 ;
-(id)messageBodyUpdatingFlags:(BOOL)arg1 ;
-(id)messageBodyIfAvailableUpdatingFlags:(BOOL)arg1 ;
-(id)firstSender;
-(unsigned short)numberOfAttachments;
-(id)dateReceived;
-(id)messageDataHolderIsComplete:(BOOL*)arg1 downloadIfNecessary:(BOOL)arg2 ;
-(void)setConversationID:(long long)arg1 ;
-(void)setGenerationNumber:(unsigned long long)arg1 ;
-(id)sendersIfCached;
-(id)toIfCached;
-(id)ccIfCached;
-(id)bccIfCached;
-(void)setMessageInfo:(id)arg1 to:(id)arg2 cc:(id)arg3 bcc:(id)arg4 sender:(id)arg5 dateReceivedTimeIntervalSince1970:(double)arg6 dateSentTimeIntervalSince1970:(double)arg7 messageIDHash:(long long)arg8 conversationID:(long long)arg9 summary:(id)arg10 ;
-(void)setMessageIDHeader:(id)arg1 ;
-(void)setSubject:(id)arg1 to:(id)arg2 cc:(id)arg3 bcc:(id)arg4 sender:(id)arg5 dateReceived:(double)arg6 dateSent:(double)arg7 messageIDHash:(long long)arg8 conversationIDHash:(long long)arg9 summary:(id)arg10 withOptions:(unsigned)arg11 ;
-(void)setDateReceivedTimeIntervalSince1970:(double)arg1 ;
-(void)setListIDHash:(long long)arg1 ;
-(id)messageIDHeader;
-(id)messageIDHeaderInFortyBytesOrLess;
-(id)bestAlternativeInPart:(id)arg1 ;
-(id)messageURL;
-(void)setMessageURL:(id)arg1 ;
-(long long)generationCompare:(id)arg1 ;
-(id)dataForMimePart:(id)arg1 ;
-(void)setMessageInfoFromMessage:(id)arg1 ;
-(id)messageData;
-(id)contentType;
-(id)headerData;
-(id)headers;
-(id)remoteID;
@end

