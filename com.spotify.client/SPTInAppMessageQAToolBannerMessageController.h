//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "SPTInAppMessageBannerMessageWebViewContentDelegate-Protocol.h"
#import "SPTInAppMessageQAToolBannerViewDelegate-Protocol.h"
#import "SPTInAppMessageQAToolViewModelObserver-Protocol.h"

@class NSMutableArray, NSString, SPTInAppMessageActionFactory, SPTInAppMessageBannerMessageViewModel, SPTInAppMessageQAToolBannerMessageParser, SPTInAppMessageQAToolBannerMessageViewController;
@protocol SPTBannerPresentationManager, SPTBannerPresentationManagerTicket, SPTInAppMessageQAToolFormatMessageControllerDelegate;

@interface SPTInAppMessageQAToolBannerMessageController : NSObject <SPTInAppMessageBannerMessageWebViewContentDelegate, SPTInAppMessageQAToolBannerViewDelegate, SPTInAppMessageQAToolViewModelObserver>
{
    id <SPTInAppMessageQAToolFormatMessageControllerDelegate> _delegate;
    SPTInAppMessageActionFactory *_actionFactory;
    SPTInAppMessageQAToolBannerMessageParser *_parser;
    NSMutableArray *_bannerMessagesQueue;
    SPTInAppMessageBannerMessageViewModel *_bannerMessageViewModel;
    id <SPTBannerPresentationManager> _bannerPresentationManager;
    id <SPTBannerPresentationManagerTicket> _bannerTicket;
    SPTInAppMessageQAToolBannerMessageViewController *_bannerMessageViewController;
}

@property(retain, nonatomic) SPTInAppMessageQAToolBannerMessageViewController *bannerMessageViewController; // @synthesize bannerMessageViewController=_bannerMessageViewController;
@property(retain, nonatomic) id <SPTBannerPresentationManagerTicket> bannerTicket; // @synthesize bannerTicket=_bannerTicket;
@property(retain, nonatomic) id <SPTBannerPresentationManager> bannerPresentationManager; // @synthesize bannerPresentationManager=_bannerPresentationManager;
@property(retain, nonatomic) SPTInAppMessageBannerMessageViewModel *bannerMessageViewModel; // @synthesize bannerMessageViewModel=_bannerMessageViewModel;
@property(retain, nonatomic) NSMutableArray *bannerMessagesQueue; // @synthesize bannerMessagesQueue=_bannerMessagesQueue;
@property(retain, nonatomic) SPTInAppMessageQAToolBannerMessageParser *parser; // @synthesize parser=_parser;
@property(retain, nonatomic) SPTInAppMessageActionFactory *actionFactory; // @synthesize actionFactory=_actionFactory;
@property(nonatomic) __weak id <SPTInAppMessageQAToolFormatMessageControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)serializeDictionary:(id)arg1;
- (id)deserializeData:(id)arg1;
- (void)dismissCurrentBanner;
- (void)prepareQueueForNextMessage;
- (void)bannerMessageViewControllerDidCancelReviewOfCreative:(id)arg1;
- (void)bannerMessageViewControllerDidRejectCreative:(id)arg1;
- (void)bannerMessageViewControllerDidAcceptCreative:(id)arg1;
- (void)dismissBanner;
- (void)presentBanner;
- (void)presentFirstMessageInQueue;
- (void)parseBannerData:(id)arg1;
- (void)qaToolViewModel:(id)arg1 didFetchBannerCreativesData:(id)arg2;
- (id)initWithBannerMessageParser:(id)arg1 actionFactory:(id)arg2 bannerPresentationManager:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

