//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTInAppMessageNoteMessageWebViewContentDelegate-Protocol.h"
#import "SPTInAppMessageQAToolNoteViewDelegate-Protocol.h"
#import "SPTInAppMessageQAToolViewModelObserver-Protocol.h"

@class NSMutableArray, NSString, SPTInAppMessageActionFactory, SPTInAppMessageNoteMessageViewModel, SPTInAppMessageNotePresentationManagerImplementation, SPTInAppMessageQAToolNoteMessageParser, SPTInAppMessageQAToolNoteMessageViewController;
@protocol SPTInAppMessageQAToolFormatMessageControllerDelegate;

@interface SPTInAppMessageQAToolNoteMessageController : NSObject <SPTInAppMessageNoteMessageWebViewContentDelegate, SPTInAppMessageQAToolNoteViewDelegate, SPTInAppMessageQAToolViewModelObserver>
{
    id <SPTInAppMessageQAToolFormatMessageControllerDelegate> _delegate;
    SPTInAppMessageActionFactory *_actionFactory;
    SPTInAppMessageQAToolNoteMessageParser *_parser;
    NSMutableArray *_noteMessagesQueue;
    SPTInAppMessageNoteMessageViewModel *_noteMessageViewModel;
    SPTInAppMessageNotePresentationManagerImplementation *_notePresentationManager;
    SPTInAppMessageQAToolNoteMessageViewController *_noteMessageViewController;
}

@property(retain, nonatomic) SPTInAppMessageQAToolNoteMessageViewController *noteMessageViewController; // @synthesize noteMessageViewController=_noteMessageViewController;
@property(retain, nonatomic) SPTInAppMessageNotePresentationManagerImplementation *notePresentationManager; // @synthesize notePresentationManager=_notePresentationManager;
@property(retain, nonatomic) SPTInAppMessageNoteMessageViewModel *noteMessageViewModel; // @synthesize noteMessageViewModel=_noteMessageViewModel;
@property(retain, nonatomic) NSMutableArray *noteMessagesQueue; // @synthesize noteMessagesQueue=_noteMessagesQueue;
@property(retain, nonatomic) SPTInAppMessageQAToolNoteMessageParser *parser; // @synthesize parser=_parser;
@property(retain, nonatomic) SPTInAppMessageActionFactory *actionFactory; // @synthesize actionFactory=_actionFactory;
@property(nonatomic) __weak id <SPTInAppMessageQAToolFormatMessageControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)dismissCurrentNote;
- (void)prepareQueueForNextMessage;
- (void)noteMessageViewControllerDidCancelReviewOfCreative:(id)arg1;
- (void)noteMessageViewControllerDidRejectCreative:(id)arg1;
- (void)noteMessageViewControllerDidAcceptCreative:(id)arg1;
- (void)dismissNote;
- (void)presentNote;
- (void)presentFirstMessageInQueue;
- (void)parseNoteData:(id)arg1;
- (void)qaToolViewModel:(id)arg1 didFetchNoteCreativesData:(id)arg2;
- (id)initWithNoteMessageParser:(id)arg1 actionFactory:(id)arg2 notePresentationManager:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

