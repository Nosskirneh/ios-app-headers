//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "MFMessageComposeViewControllerDelegate-Protocol.h"
#import "SPTShareHandler-Protocol.h"

@class NSString, SPTShareData, SPTShareLogger, SPTStatusBarToken;
@protocol SPTShareDeeplinkHandler;

@interface SPTShareMessagesShareHandler : NSObject <MFMessageComposeViewControllerDelegate, SPTShareHandler>
{
    SPTShareLogger *_shareLogger;
    id <SPTShareDeeplinkHandler> _deeplinkHandler;
    SPTShareData *_shareData;
    CDUnknownBlockType _completionBlock;
    SPTStatusBarToken *_statusBarToken;
}

@property(retain, nonatomic) SPTStatusBarToken *statusBarToken; // @synthesize statusBarToken=_statusBarToken;
@property(copy, nonatomic) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
@property(retain, nonatomic) SPTShareData *shareData; // @synthesize shareData=_shareData;
@property(retain, nonatomic) id <SPTShareDeeplinkHandler> deeplinkHandler; // @synthesize deeplinkHandler=_deeplinkHandler;
@property(retain, nonatomic) SPTShareLogger *shareLogger; // @synthesize shareLogger=_shareLogger;
- (void).cxx_destruct;
- (void)messageComposeViewController:(id)arg1 didFinishWithResult:(long long)arg2;
- (id)generateShareTextBodyFromShareData:(id)arg1;
- (void)shareWithData:(id)arg1 shareDestination:(id)arg2 sharePresenter:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (id)createAlertModel;
- (id)initWithShareLogger:(id)arg1 deeplinkHandler:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

