/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 31, 2019 at 2:17:32 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <IMCore/IMCore-Structs.h>
#import <libobjc.A.dylib/NSFastEnumeration.h>

@protocol OS_dispatch_queue;
@class NSMutableArray, NSMutableDictionary, NSString, IMTimer, NSUserActivity, NSArray, NSObject;

@interface IMChatRegistry : NSObject <NSFastEnumeration> {

	NSMutableArray* _allChats;
	NSMutableDictionary* _chatGUIDToCurrentThreadMap;
	NSMutableDictionary* _chatGUIDToInfoMap;
	NSMutableDictionary* _chatGUIDToChatMap;
	NSMutableDictionary* _threadNameToChatMap;
	NSMutableDictionary* _chatGUIDToiMessageSentOrReceivedMap;
	NSMutableArray* _allChatsInThreadNameMap;
	NSMutableArray* _pendingQueries;
	NSMutableArray* _waitingForQueries;
	NSString* _historyModificationStamp;
	IMTimer* _markAsReadTimer;
	NSMutableDictionary* _queryCompletionBlocks;
	double _timerStartTimeInterval;
	BOOL _firstLoad;
	BOOL _loading;
	BOOL _daemonHadTerminated;
	BOOL _wantsHistoryReload;
	BOOL _postMessageSentNotifications;
	BOOL _isInternalInstall;
	unsigned long long _defaultNumberOfMessagesToLoad;
	unsigned long long _daemonUnreadCount;
	long long _daemonLastFailedMessageDate;
	NSUserActivity* _userActivity;
	NSMutableDictionary* _chatsBeingLoadedMap;
	NSMutableDictionary* _chatPersonIDToChatMap;
	BOOL _personaKitRetriveAPITimedOut;
	NSArray* _simulatedChats;
	IMChatRegistry* _batchProcessingRegistry;
	NSObject*<OS_dispatch_queue> _batchProcessingQueue;
	NSMutableArray* _updateBlocks;
	NSArray* _preExistingAllChats;

}

@property (assign,setter=_setPostMessageSentNotifications:,nonatomic) BOOL _postMessageSentNotifications;                              //@synthesize postMessageSentNotifications=_postMessageSentNotifications - In the implementation block
@property (assign,setter=_setDefaultNumberOfMessagesToLoad:,nonatomic) unsigned long long _defaultNumberOfMessagesToLoad;              //@synthesize defaultNumberOfMessagesToLoad=_defaultNumberOfMessagesToLoad - In the implementation block
@property (assign,nonatomic) BOOL personaKitRetriveAPITimedOut;                                                                        //@synthesize personaKitRetriveAPITimedOut=_personaKitRetriveAPITimedOut - In the implementation block
@property (setter=_setSimulatedChats:,nonatomic,retain) NSArray * simulatedChats;                                                      //@synthesize simulatedChats=_simulatedChats - In the implementation block
@property (nonatomic,readonly) BOOL _isLoading;                                                                                        //@synthesize loading=_loading - In the implementation block
@property (nonatomic,retain) IMChatRegistry * batchProcessingRegistry;                                                                 //@synthesize batchProcessingRegistry=_batchProcessingRegistry - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> batchProcessingQueue;                                                        //@synthesize batchProcessingQueue=_batchProcessingQueue - In the implementation block
@property (nonatomic,readonly) BOOL isBatchProcessing; 
@property (nonatomic,retain) NSMutableArray * updateBlocks;                                                                            //@synthesize updateBlocks=_updateBlocks - In the implementation block
@property (nonatomic,retain) NSArray * preExistingAllChats;                                                                            //@synthesize preExistingAllChats=_preExistingAllChats - In the implementation block
@property (nonatomic,readonly) NSArray * allExistingChats; 
@property (nonatomic,readonly) unsigned long long numberOfExistingChats; 
+(id)sharedInstance;
+(BOOL)hasInitializedChatFiltering;
+(void)setHasInitializedChatFiltering:(BOOL)arg1 ;
+(void)setMessageClass:(Class)arg1 ;
+(Class)messageClass;
-(id)init;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_IM7*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(void)dealloc;
-(NSMutableArray *)updateBlocks;
-(void)setUpdateBlocks:(NSMutableArray *)arg1 ;
-(unsigned long long)unreadCount;
-(BOOL)_hasChat:(id)arg1 forService:(id)arg2 ;
-(id)_chatsWithMessageGUID:(id)arg1 ;
-(NSArray *)allExistingChats;
-(void)verifyFilteringForAllChats;
-(void)systemApplicationDidResume;
-(void)setupComplete:(BOOL)arg1 info:(id)arg2 ;
-(void)setupComplete;
-(void)chat:(id)arg1 updated:(id)arg2 ;
-(void)chat:(id)arg1 propertiesUpdated:(id)arg2 ;
-(void)chat:(id)arg1 displayNameUpdated:(id)arg2 ;
-(void)chat:(id)arg1 isFilteredUpdated:(BOOL)arg2 ;
-(void)chat:(id)arg1 engramIDUpdated:(id)arg2 ;
-(void)leftChat:(id)arg1 ;
-(void)engroupParticipantsUpdatedForChat:(id)arg1 ;
-(void)loadedChats:(id)arg1 ;
-(void)account:(id)arg1 chat:(id)arg2 style:(unsigned char)arg3 chatProperties:(id)arg4 invitationReceived:(id)arg5 ;
-(void)account:(id)arg1 chat:(id)arg2 style:(unsigned char)arg3 chatProperties:(id)arg4 updateProperties:(id)arg5 ;
-(void)account:(id)arg1 chat:(id)arg2 style:(unsigned char)arg3 chatProperties:(id)arg4 chatPersonCentricID:(id)arg5 messageSent:(id)arg6 ;
-(void)account:(id)arg1 chat:(id)arg2 style:(unsigned char)arg3 chatProperties:(id)arg4 chatPersonCentricID:(id)arg5 messageReceived:(id)arg6 ;
-(void)account:(id)arg1 chat:(id)arg2 style:(unsigned char)arg3 chatProperties:(id)arg4 chatPersonCentricID:(id)arg5 messagesReceived:(id)arg6 ;
-(void)account:(id)arg1 chat:(id)arg2 style:(unsigned char)arg3 chatProperties:(id)arg4 messageUpdated:(id)arg5 ;
-(void)account:(id)arg1 chat:(id)arg2 style:(unsigned char)arg3 chatProperties:(id)arg4 notifySentMessage:(id)arg5 sendTime:(id)arg6 ;
-(void)account:(id)arg1 chat:(id)arg2 style:(unsigned char)arg3 chatProperties:(id)arg4 messagesUpdated:(id)arg5 ;
-(void)account:(id)arg1 chat:(id)arg2 style:(unsigned char)arg3 chatProperties:(id)arg4 error:(id)arg5 ;
-(void)account:(id)arg1 chat:(id)arg2 style:(unsigned char)arg3 chatProperties:(id)arg4 chatPersonCentricID:(id)arg5 statusChanged:(int)arg6 handleInfo:(id)arg7 ;
-(void)account:(id)arg1 chat:(id)arg2 style:(unsigned char)arg3 chatProperties:(id)arg4 member:(id)arg5 statusChanged:(int)arg6 ;
-(void)historyQuery:(id)arg1 chatID:(id)arg2 services:(id)arg3 finishedWithResult:(id)arg4 limit:(unsigned long long)arg5 ;
-(void)pagedHistoryQuery:(id)arg1 chatID:(id)arg2 services:(id)arg3 numberOfMessagesBefore:(unsigned long long)arg4 numberOfMessagesAfter:(unsigned long long)arg5 finishedWithResult:(id)arg6 ;
-(void)attachmentQuery:(id)arg1 chatID:(id)arg2 services:(id)arg3 finishedWithResult:(id)arg4 ;
-(void)markAsSpamQuery:(id)arg1 chatID:(id)arg2 services:(id)arg3 finishedWithResult:(id)arg4 ;
-(void)historicalMessageGUIDsDeleted:(id)arg1 chatGUIDs:(id)arg2 queryID:(id)arg3 ;
-(void)frequentRepliesQuery:(id)arg1 chatID:(id)arg2 services:(id)arg3 finishedWithResult:(id)arg4 limit:(unsigned long long)arg5 ;
-(void)chatLoadedWithChatIdentifier:(id)arg1 chats:(id)arg2 ;
-(void)unreadCountChanged:(long long)arg1 ;
-(void)lastFailedMessageDateChanged:(long long)arg1 ;
-(void)_handleMergedChatReconstructions:(id)arg1 ;
-(void)_handleChatReconstructions:(id)arg1 ;
-(id)chatForIMHandles:(id)arg1 ;
-(id)existingChatWithGroupID:(id)arg1 ;
-(void)_chat_closeSession:(id)arg1 ;
-(id)existingChatWithGUID:(id)arg1 ;
-(id)existingChatWithChatIdentifier:(id)arg1 ;
-(void)enumerateAllChatsAndIncludingSyncedAttachmentSizes:(BOOL)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)_setSimulatedChats:(id)arg1 ;
-(void)_noteChatInit:(id)arg1 ;
-(void)_noteChatDealloc:(id)arg1 ;
-(BOOL)_firstLoad;
-(void)_setChatHasCommunicatedOveriMessage:(id)arg1 ;
-(void)_chat_clearHistory:(id)arg1 beforeGUID:(id)arg2 afterGUID:(id)arg3 queryID:(id)arg4 ;
-(void)_chat_markAsSpam:(id)arg1 queryID:(id)arg2 ;
-(void)_chat_markAsSpamAutomatically:(id)arg1 ;
-(void)_chat:(id)arg1 updateIsFiltered:(BOOL)arg2 ;
-(void)_markHasHadSuccessfulQueryForChat:(id)arg1 ;
-(void)_registerCompletion:(/*^block*/id)arg1 forQueryID:(id)arg2 ;
-(void)_blockUntilQueriesComplete:(id)arg1 ;
-(void)_chat:(id)arg1 updateDisplayName:(id)arg2 ;
-(void)_chat_storeItem:(id)arg1 inChat:(id)arg2 ;
-(void)_chat:(id)arg1 joinWithProperties:(id)arg2 ;
-(void)_chat_declineInvitation:(id)arg1 ;
-(void)_chat:(id)arg1 sendMessage:(id)arg2 ;
-(void)_updateUnreadCountForChat:(id)arg1 ;
-(void)_chat:(id)arg1 sendReadReceiptForMessages:(id)arg2 ;
-(void)_chat_sendReadReceiptForAllMessages:(id)arg1 ;
-(void)_chat:(id)arg1 setValue:(id)arg2 forChatProperty:(id)arg3 ;
-(void)_chat:(id)arg1 setProperties:(id)arg2 ofParticipant:(id)arg3 ;
-(void)_chat_leave:(id)arg1 leavingiMessageChat:(BOOL)arg2 ;
-(void)_chat_remove:(id)arg1 ;
-(void)_chat:(id)arg1 inviteParticipants:(id)arg2 reason:(id)arg3 toiMessageChat:(BOOL)arg4 ;
-(void)_chat:(id)arg1 removeParticipants:(id)arg2 reason:(id)arg3 fromiMessageChat:(BOOL)arg4 ;
-(void)_chat_loadHistory:(id)arg1 limit:(unsigned long long)arg2 beforeGUID:(id)arg3 afterGUID:(id)arg4 queryID:(id)arg5 ;
-(void)_chat_loadPagedHistory:(id)arg1 numberOfMessagesBefore:(unsigned long long)arg2 numberOfMessagesAfter:(unsigned long long)arg3 messageGUID:(id)arg4 queryID:(id)arg5 ;
-(void)_chat_loadFrequentReplies:(id)arg1 limit:(unsigned long long)arg2 queryID:(id)arg3 ;
-(void)_chat_loadUnreadMessages:(id)arg1 limit:(unsigned long long)arg2 fallbackGUID:(id)arg3 queryId:(id)arg4 ;
-(void)_chat_loadAttachments:(id)arg1 queryID:(id)arg2 ;
-(void)_chat:(id)arg1 sendSavedReceiptForMessage:(id)arg2 ;
-(void)_chat:(id)arg1 sendPlayedReceiptForMessage:(id)arg2 ;
-(void)_chat:(id)arg1 setPlayedExpressiveSendForMessage:(id)arg2 ;
-(BOOL)isBatchProcessing;
-(IMChatRegistry *)batchProcessingRegistry;
-(void)handleIMChatParticipantsDidChange:(id)arg1 ;
-(void)_daemonReallyDied:(id)arg1 ;
-(void)_registerChatDictionary:(id)arg1 forChat:(id)arg2 isIncoming:(BOOL)arg3 newGUID:(id)arg4 shouldPostNotification:(BOOL)arg5 ;
-(void)_registerChatDictionary:(id)arg1 forChat:(id)arg2 isIncoming:(BOOL)arg3 newGUID:(id)arg4 ;
-(id)_allGUIDsForChat:(id)arg1 ;
-(void)_unregisterChatWithGUID:(id)arg1 ;
-(id)existingChatForIMHandle:(id)arg1 ;
-(id)_createdChatForIMHandle:(id)arg1 ;
-(void)_registerChat:(id)arg1 isIncoming:(BOOL)arg2 guid:(id)arg3 ;
-(id)chatForIMHandles:(id)arg1 displayName:(id)arg2 joinedChatsOnly:(BOOL)arg3 ;
-(id)existingChatForIMHandles:(id)arg1 allowRetargeting:(BOOL)arg2 groupID:(id)arg3 displayName:(id)arg4 joinedChatsOnly:(BOOL)arg5 ;
-(id)_createdChatForIMHandles:(id)arg1 style:(unsigned char)arg2 groupID:(id)arg3 displayName:(id)arg4 joinedChatsOnly:(BOOL)arg5 ;
-(id)existingChatForIMHandles:(id)arg1 ;
-(id)existingChatForRoom:(id)arg1 onAccount:(id)arg2 ;
-(id)_createdChatForRoom:(id)arg1 onAccount:(id)arg2 ;
-(void)setUserActivityForChat:(id)arg1 message:(id)arg2 orHandles:(id)arg3 title:(id)arg4 ;
-(id)messagesURLWithChat:(id)arg1 orHandles:(id)arg2 withMessageText:(id)arg3 ;
-(id)_allCreatedChats;
-(id)_createdChatWithIdentifier:(id)arg1 style:(unsigned char)arg2 account:(id)arg3 ;
-(NSArray *)simulatedChats;
-(id)_existingChatWithIdentifier:(id)arg1 style:(unsigned char)arg2 service:(id)arg3 ;
-(id)existingChatForIMHandle:(id)arg1 allowRetargeting:(BOOL)arg2 ;
-(id)existingChatForRoom:(id)arg1 onAccount:(id)arg2 allowRetargeting:(BOOL)arg3 ;
-(id)existingChatForIMHandles:(id)arg1 allowRetargeting:(BOOL)arg2 groupID:(id)arg3 displayName:(id)arg4 ignoresDisplayName:(BOOL)arg5 joinedChatsOnly:(BOOL)arg6 ;
-(id)_existingChatWithIdentifier:(id)arg1 style:(unsigned char)arg2 account:(id)arg3 ;
-(void)__blockUntilQueriesComplete;
-(void)_clearMarkAsReadTimerIfNecessary;
-(void)_startMarkAsReadTimerIfNecessary;
-(id)_chatInstanceForGUID:(id)arg1 ;
-(void)unregisterChat:(id)arg1 ;
-(void)unregisterChatWithGUID:(id)arg1 ;
-(void)_unregisterChat:(id)arg1 ;
-(id)chatForIMHandle:(id)arg1 ;
-(id)chatForIMHandles:(id)arg1 chatName:(id)arg2 ;
-(id)chatForRoom:(id)arg1 onAccount:(id)arg2 ;
-(id)chatForURL:(id)arg1 outMessageText:(id*)arg2 outRecipientIDs:(id*)arg3 outService:(id*)arg4 outMessageGUID:(id*)arg5 ;
-(void)setActiveChatURL:(id)arg1 ;
-(void)setUserActivityForChat:(id)arg1 orHandles:(id)arg2 title:(id)arg3 ;
-(long long)lastFailedMessageDate;
-(unsigned long long)numberOfExistingChats;
-(id)_lookupExistingChatWithIMHandle:(id)arg1 ;
-(id)existingChatForPersonID:(id)arg1 ;
-(id)exisitingChatForGroupID:(id)arg1 ;
-(id)existingChatForEngramID:(id)arg1 ;
-(id)existingChatForIMHandles:(id)arg1 allowRetargeting:(BOOL)arg2 groupID:(id)arg3 ;
-(id)existingChatForAddresses:(id)arg1 allowRetargeting:(BOOL)arg2 bestHandles:(id*)arg3 ;
-(id)existingChatForIMHandles:(id)arg1 allowRetargeting:(BOOL)arg2 ;
-(id)_chatForChatDictionary:(id)arg1 items:(id)arg2 allowCreate:(BOOL)arg3 createdChat:(BOOL*)arg4 outGUID:(id*)arg5 ;
-(id)loadChatFromDaemonWithChatIdentifier:(id)arg1 ;
-(id)_chatsWithMessage:(id)arg1 ;
-(id)_chatGUIDToChatMap;
-(void)_chat:(id)arg1 handleCompletionOfQuery:(id)arg2 withUserInfo:(id)arg3 success:(BOOL)arg4 error:(id)arg5 ;
-(unsigned long long)_defaultNumberOfMessagesToLoad;
-(void)_setDefaultNumberOfMessagesToLoad:(unsigned long long)arg1 ;
-(BOOL)_isLoading;
-(BOOL)_postMessageSentNotifications;
-(void)_setPostMessageSentNotifications:(BOOL)arg1 ;
-(BOOL)personaKitRetriveAPITimedOut;
-(void)setPersonaKitRetriveAPITimedOut:(BOOL)arg1 ;
-(void)setBatchProcessingRegistry:(IMChatRegistry *)arg1 ;
-(NSObject*<OS_dispatch_queue>)batchProcessingQueue;
-(void)setBatchProcessingQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSArray *)preExistingAllChats;
-(void)setPreExistingAllChats:(NSArray *)arg1 ;
-(void)_IMChatGetIdentifiersAndServicesTestHook:(id)arg1 identifiers:(id*)arg2 services:(id*)arg3 personCentricEnabled:(BOOL)arg4 ;
-(id)_eventForMessage:(id)arg1 ;
-(void)_trackUsageForMessage:(id)arg1 ;
-(void)_chat_markAsSpam:(id)arg1 queryID:(id)arg2 autoReport:(BOOL)arg3 ;
-(id)copyForBatchProcessing;
-(void)__handleChatReconstructions:(id)arg1 ;
-(void)mergeWithCopyRegistry:(id)arg1 ;
-(void)_startBackgroundProcessingChats:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_account:(id)arg1 chat:(id)arg2 style:(unsigned char)arg3 chatProperties:(id)arg4 messagesUpdated:(id)arg5 ;
-(void)_updateInfo:(id)arg1 forGUID:(id)arg2 updatingUnreadCount:(BOOL)arg3 ;
-(void)_processMessageForAccount:(id)arg1 chat:(id)arg2 style:(unsigned char)arg3 chatProperties:(id)arg4 chatPersonCentricID:(id)arg5 message:(id)arg6 ;
-(void)_checkLimitAndSetMessagesToKeepLoadedIfNeeded:(unsigned long long)arg1 chat:(id)arg2 ;
-(void)__handleMergedChatReconstructions:(id)arg1 ;
-(void)_resetChatRegistry;
-(void)_chatLoadedWithChatIdentifier:(id)arg1 chats:(id)arg2 ;
-(void)frequentRepliesQuery:(id)arg1 finishedWithResult:(id)arg2 limit:(unsigned long long)arg3 ;
-(id)chatPersonIDToChatMap;
@end
