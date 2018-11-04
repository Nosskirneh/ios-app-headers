//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SPTDataLoaderFactory, SPTExternalDeeplinksFetcher, SPTShareLogger;

@interface SPTShareHandlerFactory : NSObject
{
    SPTDataLoaderFactory *_dataLoaderFactory;
    SPTShareLogger *_shareLogger;
    SPTExternalDeeplinksFetcher *_externalDeeplinksFetcher;
    id <SPTShareDeeplinkHandler> _deeplinkHandler;
    id <SPTShareTestManager> _testManager;
    id <SPTShareHandler> _instagramStoriesShareHandler;
    id <SPTShareHandler> _spt_copyLinkShareHandler;
    id <SPTShareHandler> _whatsAppShareHandler;
    id <SPTShareHandler><SPTShareHandlerAncillaryViewControllerProvider> _snapchatShareHandler;
    id <SPTShareHandler> _messagesShareHandler;
    id <SPTShareHandler> _facebookStoriesShareHandler;
    id <SPTShareHandler> _lineShareHandler;
    id <SPTShareHandler> _facebookMessengerShareHandler;
    id <SPTShareHandler> _facebookShareHandler;
    id <SPTShareHandler> _twitterShareHandler;
    id <SPTShareHandler> _moreShareHandler;
}

@property(retain, nonatomic) id <SPTShareHandler> moreShareHandler; // @synthesize moreShareHandler=_moreShareHandler;
@property(retain, nonatomic) id <SPTShareHandler> twitterShareHandler; // @synthesize twitterShareHandler=_twitterShareHandler;
@property(retain, nonatomic) id <SPTShareHandler> facebookShareHandler; // @synthesize facebookShareHandler=_facebookShareHandler;
@property(retain, nonatomic) id <SPTShareHandler> facebookMessengerShareHandler; // @synthesize facebookMessengerShareHandler=_facebookMessengerShareHandler;
@property(retain, nonatomic) id <SPTShareHandler> lineShareHandler; // @synthesize lineShareHandler=_lineShareHandler;
@property(retain, nonatomic) id <SPTShareHandler> facebookStoriesShareHandler; // @synthesize facebookStoriesShareHandler=_facebookStoriesShareHandler;
@property(retain, nonatomic) id <SPTShareHandler> messagesShareHandler; // @synthesize messagesShareHandler=_messagesShareHandler;
@property(retain, nonatomic) id <SPTShareHandler><SPTShareHandlerAncillaryViewControllerProvider> snapchatShareHandler; // @synthesize snapchatShareHandler=_snapchatShareHandler;
@property(retain, nonatomic) id <SPTShareHandler> whatsAppShareHandler; // @synthesize whatsAppShareHandler=_whatsAppShareHandler;
@property(retain, nonatomic) id <SPTShareHandler> spt_copyLinkShareHandler; // @synthesize spt_copyLinkShareHandler=_spt_copyLinkShareHandler;
@property(retain, nonatomic) id <SPTShareHandler> instagramStoriesShareHandler; // @synthesize instagramStoriesShareHandler=_instagramStoriesShareHandler;
@property(retain, nonatomic) id <SPTShareTestManager> testManager; // @synthesize testManager=_testManager;
@property(retain, nonatomic) id <SPTShareDeeplinkHandler> deeplinkHandler; // @synthesize deeplinkHandler=_deeplinkHandler;
@property(retain, nonatomic) SPTExternalDeeplinksFetcher *externalDeeplinksFetcher; // @synthesize externalDeeplinksFetcher=_externalDeeplinksFetcher;
@property(retain, nonatomic) SPTShareLogger *shareLogger; // @synthesize shareLogger=_shareLogger;
@property(retain, nonatomic) SPTDataLoaderFactory *dataLoaderFactory; // @synthesize dataLoaderFactory=_dataLoaderFactory;
- (void).cxx_destruct;
- (id)provideMoreShareHandler;
- (id)provideTwitterShareHandler;
- (id)provideFacebookShareHandler;
- (id)provideFacebookMessengerShareHandler;
- (id)provideLineShareHandler;
- (id)provideFacebookStoriesShareHandler;
- (id)provideMessagesShareHandler;
- (id)provideSnapchatShareHandler;
- (id)provideWhatsAppShareHandler;
- (id)provideCopyLinkShareHandler;
- (id)provideInstagramStoriesShareHandler;
- (id)initWithDataLoaderFactory:(id)arg1 shareLogger:(id)arg2 externalDeeplinksFetcher:(id)arg3 deeplinkHandler:(id)arg4 testManager:(id)arg5;

@end

