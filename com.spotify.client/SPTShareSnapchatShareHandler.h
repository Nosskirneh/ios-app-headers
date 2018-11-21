//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTShareHandler-Protocol.h"
#import "SPTShareHandlerAncillaryViewControllerProvider-Protocol.h"

@class NSString, SPTExternalDeeplinksFetcher, SPTShareData, SPTShareLogger;
@protocol SPTShareDeeplinkHandler;

@interface SPTShareSnapchatShareHandler : NSObject <SPTShareHandler, SPTShareHandlerAncillaryViewControllerProvider>
{
    SPTShareLogger *_shareLogger;
    SPTExternalDeeplinksFetcher *_externalDeeplinksFetcher;
    id <SPTShareDeeplinkHandler> _deeplinkHandler;
    SPTShareData *_shareData;
}

@property(retain, nonatomic) SPTShareData *shareData; // @synthesize shareData=_shareData;
@property(retain, nonatomic) id <SPTShareDeeplinkHandler> deeplinkHandler; // @synthesize deeplinkHandler=_deeplinkHandler;
@property(retain, nonatomic) SPTExternalDeeplinksFetcher *externalDeeplinksFetcher; // @synthesize externalDeeplinksFetcher=_externalDeeplinksFetcher;
@property(retain, nonatomic) SPTShareLogger *shareLogger; // @synthesize shareLogger=_shareLogger;
- (void).cxx_destruct;
- (id)createAlertModel;
- (id)provideAncillaryViewControllerWithDelegate:(id)arg1;
- (void)shareWithData:(id)arg1 shareDestination:(id)arg2 sharePresenter:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (id)initWithShareLogger:(id)arg1 externalDeeplinksFetcher:(id)arg2 deeplinkHandler:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

